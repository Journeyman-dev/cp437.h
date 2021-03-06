/*
    Created by Daniel Valcour (Journeyman-dev)
    
    This is free and unencumbered software released into the public domain.

    Anyone is free to copy, modify, publish, use, compile, sell, or
    distribute this software, either in source code form or as a compiled
    binary, for any purpose, commercial or non-commercial, and by any
    means.

    In jurisdictions that recognize copyright laws, the author or authors
    of this software dedicate any and all copyright interest in the
    software to the public domain. We make this dedication for the benefit
    of the public at large and to the detriment of our heirs and
    successors. We intend this dedication to be an overt act of
    relinquishment in perpetuity of all present and future rights to this
    software under copyright law.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
    IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
    OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
    ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
    OTHER DEALINGS IN THE SOFTWARE.

    For more information, please refer to <https://unlicense.org>
*/

/*
    HOW TO USE:
    
    Include this file in one translation unit of your project after defining the implement macro like so:
    
        #define CP437_IMPLEMENTATION
        #include <cp437.h>
        
    Now, you can include this header in any other translation unit, and have access to the wchar_t array 
    CP437_UNICODE_LOOKUP_TABLE, which contains the unicode codes of every cp437 glyph. This header also 
    includes macros for each cp437 glyph to quickly get the ascii code.
*/

#ifndef CP437_H
#define CP437_H
#ifdef __cplusplus
extern "C"
{
#endif

#define CP437_CODEPAGE_SIZE 256

extern const wchar_t const CP437_UNICODE_LOOKUP_TABLE[CP437_CODEPAGE_SIZE];

#define CP437_NULL                                                   0
#define CP437_SMILING_FACE                                           1
#define CP437_INV_SMILING_FACE                                       2
#define CP437_HEART                                                  3
#define CP437_DIAMOND                                                4
#define CP437_CLUB                                                   5
#define CP437_SPADE                                                  6
#define CP437_BULLET                                                 7
#define CP437_INV_BULLET                                             8
#define CP437_CIRCLE                                                 9
#define CP437_INV_CIRCLE                                             10
#define CP437_MARS                                                   11
#define CP437_VENUS                                                  12
#define CP437_EIGHTH_NOTE                                            13
#define CP437_EIGHTH_NOTE_PAIR                                       14
#define CP437_SUN                                                    15
#define CP437_RIGHT_TRIANGLE                                         16
#define CP437_LEFT_TRIANGLE                                          17
#define CP437_UP_DOWN_ARROW                                          18
#define CP437_DOUBLE_EXCLAMATION                                     19
#define CP437_PILCROW                                                20
#define CP437_SECTION                                                21
#define CP437_RECTANGLE                                              22
#define CP437_UP_DOWN_ARROW_BASE                                     23
#define CP437_UP_ARROW                                               24
#define CP437_DOWN_ARROW                                             25
#define CP437_RIGHT_ARROW                                            26
#define CP437_LEFT_ARROW                                             27
#define CP437_RIGHT_ANGLE                                            28
#define CP437_lEFT_RIGHT_ARROW                                       29
#define CP437_UP_TRIANGLE                                            30
#define CP437_DOWN_TRIANGLE                                          31
#define CP437_SPACE                                                  32
#define CP437_EXCLAMATION                                            33
#define CP437_DOUBLE_QUOTE                                           34
#define CP437_NUMBER                                                 35
#define CP437_DOLLAR                                                 36
#define CP437_PERCENT                                                37
#define CP437_AMPERSAND                                              38
#define CP437_APOSTROPHE                                             39
#define CP437_OPEN_PARENTHESIS                                       40
#define CP437_CLOSE_PARENTHESIS                                      41
#define CP437_ASTERISK                                               42
#define CP437_PLUS                                                   43
#define CP437_COMMA                                                  44
#define CP437_MINUS                                                  45
#define CP437_PERIOD                                                 46
#define CP437_FORWARD_SLASH                                          47
#define CP437_0                                                      48
#define CP437_1                                                      49
#define CP437_2                                                      50
#define CP437_3                                                      51
#define CP437_4                                                      52
#define CP437_5                                                      53
#define CP437_6                                                      54
#define CP437_7                                                      55
#define CP437_8                                                      56
#define CP437_9                                                      57
#define CP437_COLON                                                  58
#define CP437_SEMICOLON                                              59
#define CP437_LESS_THAN                                              60
#define CP437_GREATER_THAN                                           61
#define CP437_QUESTION                                               62 
#define CP437_COMMERCIAL_AT                                          63
#define CP437_CAPITAL_A                                              64
#define CP437_CAPITAL_B                                              65
#define CP437_CAPITAL_C                                              66
#define CP437_CAPITAL_D                                              67
#define CP437_CAPITAL_E                                              68
#define CP437_CAPITAL_F                                              69
#define CP437_CAPITAL_G                                              70
#define CP437_CAPITAL_H                                              71
#define CP437_CAPITAL_I                                              72
#define CP437_CAPITAL_J                                              73
#define CP437_CAPITAL_k                                              74
#define CP437_CAPITAL_K                                              75
#define CP437_CAPITAL_L                                              76
#define CP437_CAPITAL_M                                              77
#define CP437_CAPITAL_N                                              78
#define CP437_CAPITAL_O                                              79
#define CP437_CAPITAL_P                                              80
#define CP437_CAPITAL_Q                                              81
#define CP437_CAPITAL_R                                              82
#define CP437_CAPITAL_S                                              83
#define CP437_CAPITAL_T                                              84
#define CP437_CAPITAL_U                                              85
#define CP437_CAPITAL_V                                              86
#define CP437_CAPITAL_W                                              87
#define CP437_CAPITAL_X                                              88
#define CP437_CAPITAL_Y                                              89
#define CP437_CAPITAL_Z                                              90
#define CP437_OPEN_SQUARE_BRACKET                                    91
#define CP437_BACK_SLASH                                             92
#define CP437_CLOSED_SQUARE_BRACKET                                  93
#define CP437_CARET                                                  94
#define CP437_LOW_LINE                                               95
#define CP437_GRAVE_ACCENT                                           96
#define CP437_SMALL_A                                                97
#define CP437_SMALL_B                                                98
#define CP437_SMALL_C                                                99
#define CP437_SMALL_D                                                100
#define CP437_SMALL_E                                                101
#define CP437_SMALL_F                                                102
#define CP437_SMALL_G                                                103
#define CP437_SMALL_H                                                104
#define CP437_SMALL_I                                                105
#define CP437_SMALL_J                                                106
#define CP437_SMALL_K                                                107
#define CP437_SMALL_L                                                108
#define CP437_SMALL_M                                                109
#define CP437_SMALL_N                                                110
#define CP437_SMALL_O                                                111
#define CP437_SMALL_P                                                112
#define CP437_SMALL_Q                                                113
#define CP437_SMALL_R                                                114
#define CP437_SMALL_S                                                115
#define CP437_SMALL_T                                                116
#define CP437_SMALL_U                                                117
#define CP437_SMALL_V                                                118
#define CP437_SMALL_W                                                119
#define CP437_SMALL_X                                                120
#define CP437_SMALL_Y                                                121
#define CP437_SMALL_Z                                                122
#define CP437_OPEN_CURLY_BRACKET                                     123
#define CP437_BROKEN_BAR                                             124
#define CP437_CLOSED_CURLY_BRACKET                                   125
#define CP437_TILDE                                                  126
#define CP437_HOUSE                                                  127
#define CP437_CAPITAL_C_CEDILLA                                      128
#define CP437_SMALL_U_DIAERESIS                                      129
#define CP437_SMALL_E_ACUTE                                          130
#define CP437_SMALL_A_CIRCUMFLEX                                     131
#define CP437_SMALL_A_DIARESIS                                       132
#define CP437_SMALL_A_GRAVE                                          133
#define CP437_SMALL_A_RING                                           134
#define CP437_SMALL_C_CEDILLA                                        135
#define CP437_SMALL_E_CIRCUMFLEX                                     136
#define CP437_SMALL_E_DIARESIS                                       137
#define CP437_SMALL_E_GRAVE                                          138
#define CP437_SMALL_I_DIARESIS                                       139
#define CP437_SMALL_I_CIRCUMFLEX                                     140
#define CP437_SMALL_I_GRAVE                                          141
#define CP437_CAPITAL_A_DIARESIS                                     142
#define CP437_CAPITAL_A_RING                                         143
#define CP437_CAPITAL_E_ACUTE                                        144
#define CP437_SMALL_AE                                               145
#define CP437_CAPITAL_AE                                             146
#define CP437_SMALL_O_CIRCUMFLEX                                     147
#define CP437_SMALL_O_DIARESIS                                       148
#define CP437_SMALL_O_GRAVE                                          149
#define CP437_SMALL_U_CIRCUMFLEX                                     150
#define CP437_SMALL_U_GRAVE                                          151
#define CP437_SMALL_Y_DIARESIS                                       152
#define CP437_CAPITAL_O_DIARESIS                                     153
#define CP437_CAPITAL_U_DIARESIS                                     154
#define CP437_CENT                                                   155
#define CP437_POUND                                                  156
#define CP437_YEN                                                    157
#define CP437_PESETA                                                 158
#define CP437_F_HOOK                                                 159
#define CP437_SMALL_A_ACUTE                                          160
#define CP437_SMALL_I_ACUTE                                          161
#define CP437_SMALL_O_ACUTE                                          162
#define CP437_SMALL_U_ACUTE                                          163
#define CP437_SMALL_N_TILDE                                          164
#define CP437_CAPITAL_N_TILDE                                        165
#define CP437_FEMININE_ORDINAL_INDICATOR                             166
#define CP437_MASCULINE_ORDINAL_INDICATOR                            167
#define CP437_INV_QUESTION                                           168
#define CP437_NEGATION                                               169
#define CP437_INV_NEGATION                                           170
#define CP437_HALF                                                   171
#define CP437_QUARTER                                                172
#define CP437_INV_EXCLAMATION                                        173
#define CP437_LEFT_DOUBLE_ANGLE_QUOTATION                            174
#define CP437_RIGHT_DOUBLE_ANGLE_QUOTATION                           175
#define CP437_LIGHT_SHADE                                            176
#define CP437_MEDIUM_SHADE                                           177
#define CP437_DARK_SHADE                                             178
#define CP437_BOX_DRAWING_SINGLE_VERTICAL                            179
#define CP437_BOX_DRAWING_SINGLE_VERTICAL_AND_SINGLE_LEFT            180
#define CP437_BOX_DRAWING_SINGLE_VERTICAL_AND_DOUBLE_LEFT            181
#define CP437_BOX_DRAWING_DOUBLE_VERTICAL_AND_SINGLE_LEFT            182
#define CP437_BOX_DRAWING_DOUBLE_DOWN_AND_SINGLE_LEFT                183
#define CP437_BOX_DRAWING_SINGLE_DOWN_AND_DOUBLE_LEFT                184
#define CP437_BOX_DRAWING_DOUBLE_VERTICAL_AND_DOUBLE_LEFT            185
#define CP437_BOX_DRAWING_DOUBLE_VERTICAL                            186
#define CP437_BOX_DRAWING_DOUBLE_DOWN_AND_DOUBLE_LEFT                187
#define CP437_BOX_DRAWING_DOUBLE_UP_AND_DOUBLE_LEFT                  188
#define CP437_BOX_DRAWING_DOUBLE_UP_AND_SINGLE_LEFT                  189
#define CP437_BOX_DRAWING_SINGLE_UP_AND_DOUBLE_LEFT                  190
#define CP437_BOX_DRAWING_SINGLE_DOWN_AND_SINGLE_LEFT                191
#define CP437_BOX_DRAWING_SINGLE_UP_AND_SINGLE_RIGHT                 192
#define CP437_BOX_DRAWING_SINGLE_UP_AND_SINGLE_HORIZONTAL            193
#define CP437_BOX_DRAWING_SINGLE_DOWN_AND_SINGLE_HORIZONTAL          194
#define CP437_BOX_DRAWING_SINGLE_VERTICAL_AND_SINGLE_RIGHT           195
#define CP437_BOX_DRAWING_SINGLE_HORIZONTAL                          196
#define CP437_BOX_DRAWING_SINGLE_VERTICAL_AND_SINGLE_HORIZONTAL      197
#define CP437_BOX_DRAWING_SINGLE_VERTICAL_AND_DOUBLE_RIGHT           198
#define CP437_BOX_DRAWING_DOUBLE_VERTICAL_AND_SINGLE_RIGHT           199
#define CP437_BOX_DRAWING_DOUBLE_UP_AND_DOUBLE_RIGHT                 200
#define CP437_BOX_DRAWING_DOUBLE_DOWN_AND_DOUBLE_RIGHT               201
#define CP437_BOX_DRAWING_DOUBLE_UP_AND_DOUBLE_HORIZONTAL            202
#define CP437_BOX_DRAWING_DOUBLE_DOWN_AND_DOUBLE_HORIZONTAL          203
#define CP437_BOX_DRAWING_DOUBLE_VERTICAL_AND_DOUBLE_RIGHT           204
#define CP437_BOX_DRAWING_DOUBLE_HORIZONTAL                          205
#define CP437_BOX_DRAWING_DOUBLE_VERTICAL_AND_DOUBLE_HORIZONTAL      206
#define CP437_BOX_DRAWING_SINGLE_UP_AND_DOUBLE_HORIZONTAL            207
#define CP437_BOX_DRAWING_DOUBLE_UP_AND_SINGLE_HORIZONTAL            208
#define CP437_BOX_DRAWING_SINGLE_DOWN_AND_DOUBLE_HORIZONTAL          209
#define CP437_BOX_DRAWING_DOUBLE_DOWN_AND_SINGLE_HORIZONTAL          210
#define CP437_BOX_DRAWING_DOUBLE_UP_AND_SINGLE_RIGHT                 211
#define CP437_BOX_DRAWING_SINGLE_UP_AND_DOUBLE_RIGHT                 212
#define CP437_BOX_DRAWING_SINGLE_DOWN_AND_DOUBLE_RIGHT               213
#define CP437_BOX_DRAWING_DOUBLE_DOWN_AND_SINGLE_RIGHT               214
#define CP437_BOX_DRAWING_DOUBLE_VERTICAL_AND_SINGLE_HORIZONTAL      215
#define CP437_BOX_DRAWING_SINGLE_VERTICAL_AND_DOUBLE_HORIZONTAL      216
#define CP437_BOX_DRAWING_SINGLE_UP_AND_SINGLE_LEFT                  217
#define CP437_BOX_DRAWING_SINGLE_DOWN_AND_SINGLE_RIGHT               218
#define CP437_FULL_BLOCK                                             219
#define CP437_LOWER_HALF_BLOCK                                       220
#define CP437_LEFT_HALF_BLOCK                                        221
#define CP437_RIGHT_HALF_BLOCK                                       222
#define CP437_TOP_HALF_BLOCK                                         223
#define CP437_ALPHA                                                  224
#define CP437_BETA                                                   225
#define CP437_GAMMA                                                  226
#define CP437_PI                                                     227
#define CP437_CAPITAL_SIGMA                                          228
#define CP437_SMALL_SIGMA                                            229
#define CP437_MU                                                     230
#define CP437_TAU                                                    231
#define CP437_CAPITAL_PHI                                            232
#define CP437_THETA                                                  233
#define CP437_OMEGA                                                  234
#define CP437_DELTA                                                  235
#define CP437_INFINITY                                               236
#define CP437_SMALL_PHI                                              237
#define CP437_SMALL_EPSILON                                          238
#define CP437_INTERSECTION                                           239
#define CP437_TRIPPLE_BAR                                            240
#define CP437_PLUS_MINUS                                             241
#define CP437_GREATER_THAN_OR_EQUAL_TO                               242
#define CP437_LESS_THAN_OR_EQUAL_TO                                  243
#define CP437_INTEGRAL_TOP                                           244
#define CP437_INTEGRAL_BOTTOM                                        245
#define CP437_DIVISION                                               246
#define CP437_ALMOST_EQUAL_TO                                        247
#define CP437_DEGREE                                                 248
#define CP437_ALT_BULLET                                             249
#define CP437_INTERPUNCT                                             250
#define CP437_SQUARE_ROOT                                            251
#define CP437_SUBSCRIPT_N                                            252
#define CP437_SUPERSCRIPT_2                                          253
#define CP437_SQUARE                                                 254
#define CP437_NBSP                                                   255

#ifdef CP437_IMPLEMENTATION

#ifndef CP437_IMPLEMENTED
#define CP_437_IMPLEMENTED

const wchar_t const CP437_UNICODE_LOOKUP_TABLE[256] =
{
    0x20,   0x263A, 0x263B, 0x2665, 0x2666, 0x2662, 0x2660, 0x2022, 0x25D8, 0x26CB, 0x25D9, 0x2642, 0x2640, 0x266A, 0x266B, 0x266C,
    0x26BA, 0x25C4, 0x2195, 0x204C, 0xB6,   0xA7,   0x26AC, 0x21A8, 0x2191, 0x2193, 0x2192, 0x2190, 0x221F, 0x2194, 0x25B2, 0x25BC,
    0x20,   0x21,   0x22,   0x23,   0x24,   0x25,   0x26,   0x27,   0x28,   0x29,   0x2A,   0x2B,   0x2C,   0x2D,   0x2E,   0x2F,   
    0x30,   0x31,   0x32,   0x33,   0x34,   0x35,   0x36,   0x37,   0x38,   0x39,   0x3A,   0x3B,   0x3C,   0x3D,   0x3E,   0x3F,   
    0x40,   0x41,   0x42,   0x43,   0x44,   0x45,   0x46,   0x47,   0x48,   0x49,   0x4A,   0x4B,   0x4C,   0x4D,   0x4E,   0x4F,   
    0x50,   0x51,   0x52,   0x53,   0x54,   0x55,   0x56,   0x57,   0x58,   0x59,   0x5A,   0x5B,   0x5C,   0x5D,   0x5E,   0x5F,   
    0x60,   0x61,   0x62,   0x63,   0x64,   0x65,   0x66,   0x67,   0x68,   0x69,   0x6A,   0x6B,   0x6C,   0x6D,   0x6E,   0x6F,   
    0x70,   0x71,   0x72,   0x73,   0x74,   0x75,   0x76,   0x77,   0x78,   0x79,   0x7A,   0x7B,   0x7C,   0x7D,   0x7E,   0x2302, 
    0xC7,   0xFC,   0xE9,   0xE2,   0xE4,   0xE0,   0xE5,   0xE7,   0xEA,   0xEB,   0xE8,   0xEF,   0xEE,   0xEC,   0xC4,   0xC5,   
    0xC9,   0xE6,   0xC6,   0xF4,   0xF6,   0xF2,   0xFB,   0xF9,   0xFF,   0xD6,   0xDC,   0xA2,   0xA3,   0xA6,   0x20A7, 0x192,  
    0xE1,   0xED,   0xF3,   0xFA,   0xF1,   0xD1,   0xAA,   0xBA,   0xBF,   0x2310, 0xAC,   0xBD,   0xBC,   0xA1,   0xAB,   0xBB,   
    0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x2561, 0x2562, 0x2556, 0x2555, 0x2563, 0x2551, 0x2557, 0x255D, 0x255C, 0x255B, 0x2510, 
    0x2514, 0x2534, 0x252C, 0x251C, 0x2500, 0x253C, 0x255E, 0x255F, 0x255A, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256C, 0x2567, 
    0x2568, 0x2564, 0x2565, 0x2559, 0x2558, 0x2552, 0x2553, 0x256B, 0x256A, 0x2518, 0x250C, 0x2588, 0x2584, 0x258C, 0x2590, 0x2580, 
    0x3B1,  0xDF,   0x393,  0x3C0,  0x3A3,  0x3C3,  0xB5,   0x3C4,  0x3A6,  0x398,  0x3A9,  0x3B4,  0x221E, 0x3C6,  0x3B5,  0x2229, 
    0x2261, 0xB1,   0x2265, 0x2264, 0x2320, 0x2321, 0xF7,   0x2248, 0xB0,   0x2219, 0xB7,   0x221A, 0x207F, 0xB2,   0x25A0, 0xA0
};

#endif

#endif

#endif
#ifdef __cplusplus
}
#endif