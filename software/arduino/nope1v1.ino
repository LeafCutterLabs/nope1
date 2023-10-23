#include <Control_Surface.h>

// Instantiate a MIDI over USB interface.
USBMIDI_Interface midi;

CCPotentiometer pot0 { A0, MIDI_CC::General_Purpose_Controller_1 }; //joystick up/down
CCPotentiometer pot1 { A1, MIDI_CC::General_Purpose_Controller_2 }; //joystick left/right

const int ENCODER_1 = 3;
const int ENCODER_2 = 9;
const int ENCODER_3 = 14;
const int ENCODER_4 = 15;

// Row Pins
const int ROW_0 = 2;
const int ROW_1 = 8;
const int ROW_2 = 9;
const int ROW_3 = 14;
const int ROW_4 = 15;

// Col Pins
const int COL_0 = 7;
const int COL_1 = 6;
const int COL_2 = 5;
const int COL_3 = 4;
const int COL_4 = 3;
const int COL_5 = 13;
const int COL_6 = 12;
const int COL_7 = 11;
const int COL_8 = 10;
const int COL_9 = 16;

CCRotaryEncoder enc1 = {
    {24, 25}, // pins
    {ENCODER_1},         // MIDI address (CC number + optional channel)
    1,      // optional multiplier if the control isn't fast enough
};

CCRotaryEncoder enc2 = {
    {23, 22}, // pins
    {ENCODER_2},         // MIDI address (CC number + optional channel)
    1,      // optional multiplier if the control isn't fast enough
};

CCRotaryEncoder enc3 = {
    {28, 29}, // pins
    {ENCODER_3},         // MIDI address (CC number + optional channel)
    1,      // optional multiplier if the control isn't fast enough
};

CCRotaryEncoder enc4 = {
    {20, 21}, // pins
    {ENCODER_4},         // MIDI address (CC number + optional channel)
    1,      // optional multiplier if the control isn't fast enough
};

const AddressMatrix<3, 10> noteAddresses = {{
                                                {1 ,  1,  1,  1, 1 , 76, 74, 72, 71, 69},
                                                {54, 56, 58, 61, 63, 66, 68, 70, 73, 75},
                                                {1 , 53, 55, 57, 59, 60, 62, 64, 65, 67},  
                                            }};

NoteButtonMatrix<3, 10> noteButtonMatrix = {
    {ROW_2, ROW_3, ROW_4}, // row pins
    {COL_0, COL_1, COL_2, COL_3, COL_4, COL_5, COL_6, COL_7, COL_8, COL_9},    // column pins
    noteAddresses,    // address matrix
    CHANNEL_1,    // channel and cable number
};

void setup() {
    Control_Surface.begin(); // Initialize Control Surface
}

void loop() {
    Control_Surface.loop(); // Update the Control Surface
}

/*
// CC values
const int ENCODER_1 = 3;
const int ENCODER_2 = 9;
const int ENCODER_3 = 14;
const int ENCODER_4 = 15;
const int ENCODER_1_BUTTON = 20;
const int ENCODER_2_BUTTON = 21;
const int ENCODER_3_BUTTON = 22;
const int ENCODER_4_BUTTON = 23;
const int UNDO_BUTTON = 24;
const int TEMPO_BUTTON = 25;
const int SAVE_BUTTON = 26;
const int SETTINGS_BUTTON = 85;
const int TRACKS_BUTTON = 86;
const int MIXER_BUTTON = 88;
const int PLUGINS_BUTTON = 89;
const int MODIFIERS_BUTTON = 90;
const int SEQUENCERS_BUTTON = 102;   
const int LOOP_IN_BUTTON = 103;
const int LOOP_OUT_BUTTON = 104;
const int LOOP_BUTTON = 105;
const int CUT_BUTTON = 106;
const int PASTE_BUTTON = 107;
const int SLICE_BUTTON = 108;
const int RECORD_BUTTON = 109;
const int PLAY_BUTTON = 110;
const int STOP_BUTTON = 111;
const int CONTROL_BUTTON = 112;
const int OCTAVE_CHANGE = 117;
const int PLUS_BUTTON = 118;
const int MINUS_BUTTON = 119;
const int DUMMY = 31;


const AddressMatrix<5, 10> noteAddresses = {{
                                                {50, 51, 52, 53, 54, 55, 56, 57, 58, 59},
                                                {60, 61, 62, 63, 64, 65, 66, 67, 68, 69},
                                                {70, 71, 72, 73, 74, 75, 76, 77, 78, 79},
                                                {80, 81, 82, 83, 84, 85, 86, 87, 88, 89},
                                                {90, 91, 92, 93, 94, 95, 96, 97, 98, 99},  
                                            }};

Bankable::NoteButtonMatrix<2, 14> noteButtonMatrix = {
    transposer,
    {ROW_1, ROW_2, ROW_3, ROW_4, ROW_5}, // row pins
    {COL_0, COL_1, COL_2, COL_3, COL_4, COL_5, COL_6, COL_7, COL_8, COL_9},    // column pins
    noteAddresses,    // address matrix
    CHANNEL_1,    // channel and cable number
};


/*
const int maxTransposition = 4;
const int minTransposition = -1 * maxTransposition;
const int transpositionSemitones = 12;
Transposer<minTransposition, maxTransposition>transposer(transpositionSemitones);

const AddressMatrix<2, 14> noteAddresses = {{
                                                {1, 54, 56, 58, 1, 61, 63, 1, 66, 68, 70, 1, 73, 75},
                                                {53, 55, 57, 59, 60, 62, 64, 65, 67, 69, 71, 72, 74, 76},  
                                            }};

Bankable::NoteButtonMatrix<2, 14> noteButtonMatrix = {
    transposer,
    {ROW_3, ROW_4}, // row pins
    {COL_0, COL_1, COL_2, COL_3, COL_4, COL_5, COL_6, COL_7, COL_8, COL_9, COL_10, COL_11, COL_12, COL_13},    // column pins
    noteAddresses,    // address matrix
    CHANNEL_1,    // channel and cable number
};

// Note that plus and minus buttons need special care since they also control the transposer
// When presses are detected on plus and minus as part of the matrix scanning just send a dummy CC message
// The plus/minus buttons are handled separately as part of updatePlusMinus()
const AddressMatrix<3, 11> ccAddresses = {{
                                              {LOOP_BUTTON, LOOP_IN_BUTTON, LOOP_OUT_BUTTON, DUMMY, DUMMY, DUMMY, ENCODER_1_BUTTON, ENCODER_2_BUTTON, DUMMY, ENCODER_3_BUTTON, ENCODER_4_BUTTON},
                                              {CUT_BUTTON, PASTE_BUTTON, SLICE_BUTTON, SAVE_BUTTON, UNDO_BUTTON, DUMMY, DUMMY, DUMMY, DUMMY, DUMMY, DUMMY},
                                              {CONTROL_BUTTON, RECORD_BUTTON, PLAY_BUTTON, STOP_BUTTON, SETTINGS_BUTTON, TEMPO_BUTTON, MIXER_BUTTON, TRACKS_BUTTON, PLUGINS_BUTTON, MODIFIERS_BUTTON, SEQUENCERS_BUTTON}
                                         }};

CCButtonMatrix<3, 11> ccButtonmatrix = {
    {ROW_0, ROW_1, ROW_2}, // row pins
    {COL_3, COL_4, COL_5, COL_6, COL_7, COL_8, COL_9, COL_10, COL_11, COL_12, COL_13},    // column pins
    ccAddresses,    // address matrix
    CHANNEL_1,    // channel and cable number
};

bool plusPressed = false;
bool minusPressed = false;
bool shiftPressed = false;
bool shouldUpdateOctave = false;

// There is probably a better way, but this is what I thought of first and it works ok ¯\_(ツ)_/¯
// Hard to follow though :/
void updatePlusMinus() {
    // check if shift is down
    // getPrevState uses (col, row)
    if (ccButtonmatrix.getPrevState(0, 2) == 0) {
        shiftPressed = true;
        // Shift is down so send the octave change messages instead of the regular plus/minus ones
        // Check if plus was released
        if (ccButtonmatrix.getPrevState(3, 0) == 0) {
            plusPressed = true;
            
        } else {
            if (plusPressed) {
                if (transposer.getTransposition() < maxTransposition) {
                    transposer.setTransposition(transposer.getTransposition() + 1);
                }
                shouldUpdateOctave = true;
                plusPressed = false;
            }
        }

        // Check if minus was released
        if (ccButtonmatrix.getPrevState(4, 0) == 0) {
            minusPressed = true;
        } else {
            if (minusPressed) {
                if (transposer.getTransposition() > minTransposition) {
                    transposer.setTransposition(transposer.getTransposition() - 1);
                }
                shouldUpdateOctave = true;
                minusPressed = false;
            }
        }

        if (shouldUpdateOctave) {
            // Cant send negative midi values, so we need to remap to only positive values
            map(transposer.getTransposition(), minTransposition, maxTransposition, 0, maxTransposition - minTransposition);
            Control_Surface.sendControlChange(MIDIAddress(OCTAVE_CHANGE, CHANNEL_1), transposer.getTransposition() + maxTransposition);
            shouldUpdateOctave = false;
        }
    } else {
        // Check if plus was pressed/released
        if (ccButtonmatrix.getPrevState(3, 0) == 0) {
            if (!plusPressed) {
                plusPressed = true;
                Control_Surface.sendControlChange(MIDIAddress(PLUS_BUTTON, CHANNEL_1), 127);
            }
            
        } else {
            if (plusPressed) {
                plusPressed = false;
                Control_Surface.sendControlChange(MIDIAddress(PLUS_BUTTON, CHANNEL_1), 0);
            }
        }

        // Check if minus was pressed/released
        if (ccButtonmatrix.getPrevState(4, 0) == 0) {
            if (!minusPressed) {
                minusPressed = true;
                Control_Surface.sendControlChange(MIDIAddress(MINUS_BUTTON, CHANNEL_1), 127);
            }
        } else {
            if (minusPressed) {
                minusPressed = false;
                Control_Surface.sendControlChange(MIDIAddress(MINUS_BUTTON, CHANNEL_1), 0);
            }
        }
    } 
}
*/