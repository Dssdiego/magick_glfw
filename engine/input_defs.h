//
// Created by Diego Seabra on 20/03/2021.
//

#ifndef MAGICK_GLFW_INPUT_DEFS_H
#define MAGICK_GLFW_INPUT_DEFS_H

// NOTE: Copied from GLFW key definitions
//  https://www.glfw.org/docs/3.3/group__keys.html
#define KEY_DEFINITIONS \
    DEFINE_KEY(Unknown, -1) \
    DEFINE_KEY(Space, 32)   \
    DEFINE_KEY(Apostrophe, 39) \
    DEFINE_KEY(Comma, 44) \
    DEFINE_KEY(Minus, 45) \
    DEFINE_KEY(Period, 46) \
    DEFINE_KEY(Slash, 47) \
    DEFINE_KEY(N_0, 48) \
    DEFINE_KEY(N_1, 49) \
    DEFINE_KEY(N_2, 50) \
    DEFINE_KEY(N_3, 51) \
    DEFINE_KEY(N_4, 52) \
    DEFINE_KEY(N_5, 53) \
    DEFINE_KEY(N_6, 54) \
    DEFINE_KEY(N_7, 55) \
    DEFINE_KEY(N_8, 56) \
    DEFINE_KEY(N_9, 57) \
    DEFINE_KEY(Semicolon, 59) \
    DEFINE_KEY(Equal, 61) \
    DEFINE_KEY(A, 65) \
    DEFINE_KEY(B, 66) \
    DEFINE_KEY(C, 67) \
    DEFINE_KEY(D, 68) \
    DEFINE_KEY(E, 69) \
    DEFINE_KEY(F, 70) \
    DEFINE_KEY(G, 71) \
    DEFINE_KEY(H, 72) \
    DEFINE_KEY(I, 73) \
    DEFINE_KEY(J, 74) \
    DEFINE_KEY(K, 75) \
    DEFINE_KEY(L, 76) \
    DEFINE_KEY(M, 77) \
    DEFINE_KEY(N, 78) \
    DEFINE_KEY(O, 79) \
    DEFINE_KEY(P, 80) \
    DEFINE_KEY(Q, 81) \
    DEFINE_KEY(R, 82) \
    DEFINE_KEY(S, 83) \
    DEFINE_KEY(T, 84) \
    DEFINE_KEY(U, 85) \
    DEFINE_KEY(V, 86) \
    DEFINE_KEY(W, 87) \
    DEFINE_KEY(X, 88) \
    DEFINE_KEY(Y, 89) \
    DEFINE_KEY(Z, 90) \
    DEFINE_KEY(Bracket_Left, 91) \
    DEFINE_KEY(Backslash, 92) \
    DEFINE_KEY(Bracket_Right, 93) \
    DEFINE_KEY(Escape, 256) \
    DEFINE_KEY(Enter, 257) \
    DEFINE_KEY(Tab, 258) \
    DEFINE_KEY(Backspace, 259) \
    DEFINE_KEY(Insert, 260) \
    DEFINE_KEY(Delete, 261) \
    DEFINE_KEY(Right, 262) \
    DEFINE_KEY(Left, 263) \
    DEFINE_KEY(Down, 264) \
    DEFINE_KEY(Up, 265) \
    DEFINE_KEY(PageUp, 266) \
    DEFINE_KEY(PageDown, 267) \
    DEFINE_KEY(Home, 268) \
    DEFINE_KEY(End, 269) \
    DEFINE_KEY(CapsLock, 280) \
    DEFINE_KEY(ScrollLock, 281) \
    DEFINE_KEY(NumLock, 282) \
    DEFINE_KEY(PrintScreen, 283) \
    DEFINE_KEY(PauseBreak, 284) \
    DEFINE_KEY(F1, 290) \
    DEFINE_KEY(F2, 291) \
    DEFINE_KEY(F3, 292) \
    DEFINE_KEY(F4, 293) \
    DEFINE_KEY(F5, 294) \
    DEFINE_KEY(F6, 295) \
    DEFINE_KEY(F7, 296) \
    DEFINE_KEY(F8, 297) \
    DEFINE_KEY(F9, 298) \
    DEFINE_KEY(F10, 299) \
    DEFINE_KEY(F11, 300) \
    DEFINE_KEY(F12, 301) \
    DEFINE_KEY(F13, 302) \
    DEFINE_KEY(F14, 303) \
    DEFINE_KEY(F15, 304) \
    DEFINE_KEY(F16, 305) \
    DEFINE_KEY(F17, 306) \
    DEFINE_KEY(F18, 307) \
    DEFINE_KEY(F19, 308) \
    DEFINE_KEY(F20, 309) \
    DEFINE_KEY(F21, 310) \
    DEFINE_KEY(F22, 311) \
    DEFINE_KEY(F23, 312) \
    DEFINE_KEY(F24, 313) \
    DEFINE_KEY(F25, 314)\
    DEFINE_KEY(Keypad_0, 320) \
    DEFINE_KEY(Keypad_1, 321) \
    DEFINE_KEY(Keypad_2, 322) \
    DEFINE_KEY(Keypad_3, 323) \
    DEFINE_KEY(Keypad_4, 324) \
    DEFINE_KEY(Keypad_5, 325) \
    DEFINE_KEY(Keypad_6, 326) \
    DEFINE_KEY(Keypad_7, 327) \
    DEFINE_KEY(Keypad_8, 328) \
    DEFINE_KEY(Keypad_9, 329) \
    DEFINE_KEY(Keypad_Decimal, 330) \
    DEFINE_KEY(Keypad_Divide, 331) \
    DEFINE_KEY(Keypad_Multiply, 332) \
    DEFINE_KEY(Keypad_Subtract, 333) \
    DEFINE_KEY(Keypad_Add, 334) \
    DEFINE_KEY(Keypad_Enter, 335) \
    DEFINE_KEY(Keypad_Equal, 336) \
    DEFINE_KEY(Shift_Left, 340) \
    DEFINE_KEY(Control_Left, 341) \
    DEFINE_KEY(Alt_Left, 342) \
    DEFINE_KEY(Super_Left, 343) \
    DEFINE_KEY(Shift_Right, 344) \
    DEFINE_KEY(Control_Right, 345) \
    DEFINE_KEY(Alt_Right, 346) \
    DEFINE_KEY(Super_Right, 347) \
    DEFINE_KEY(Menu, 348)

// NOTE: Copied from GLFW button definitions
//  https://www.glfw.org/docs/3.3/group__gamepad__buttons.html
#define BUTTON_DEFINITIONS \
    DEFINE_BTN(None, -1) \
    DEFINE_BTN(A, 0) \
    DEFINE_BTN(B, 1) \
    DEFINE_BTN(X, 2) \
    DEFINE_BTN(Y, 3) \
    DEFINE_BTN(Cross, 0) \
    DEFINE_BTN(Circle, 1) \
    DEFINE_BTN(Square, 2) \
    DEFINE_BTN(Triangle, 3) \
    DEFINE_BTN(Bumper_Left, 4) \
    DEFINE_BTN(Bumper_Right, 5) \
    DEFINE_BTN(Back, 6) \
    DEFINE_BTN(Start, 7) \
    DEFINE_BTN(Guide, 8) \
    DEFINE_BTN(Thumb_Left, 9) \
    DEFINE_BTN(Thumb_Right, 10) \
    DEFINE_BTN(DPad_Up, 11) \
    DEFINE_BTN(DPad_Right, 12) \
    DEFINE_BTN(DPad_Down, 13) \
    DEFINE_BTN(DPad_Left, 14)

// NOTE: Copied from GLFW axes definitions
//  https://www.glfw.org/docs/3.3/group__gamepad__axes.html
#define AXES_DEFINITIONS \
    DEFINE_AXIS(None, -1) \
    DEFINE_AXIS(LeftX, 0) \
    DEFINE_AXIS(LeftY, 1) \
    DEFINE_AXIS(RightX, 2) \
    DEFINE_AXIS(RightY, 3) \
    DEFINE_AXIS(LeftTrigger, 4) \
    DEFINE_AXIS(RightTrigger, 5)

// NOTE: Copied from GLFW mouse button definitions
//  https://www.glfw.org/docs/3.3/group__buttons.html
#define MOUSE_BUTTON_DEFINITIONS \
    DEFINE_MOUSE_BTN(Left, 0) \
    DEFINE_MOUSE_BTN(Right, 1) \
    DEFINE_MOUSE_BTN(Middle, 2) \
    DEFINE_MOUSE_BTN(Btn1, 0) \
    DEFINE_MOUSE_BTN(Btn2, 1) \
    DEFINE_MOUSE_BTN(Btn3, 2) \
    DEFINE_MOUSE_BTN(Btn4, 3) \
    DEFINE_MOUSE_BTN(Btn5, 4) \
    DEFINE_MOUSE_BTN(Btn6, 5) \
    DEFINE_MOUSE_BTN(Btn7, 6) \
    DEFINE_MOUSE_BTN(Btn8, 7)

/* Keyboard Keys */
enum class Key
{
#define DEFINE_KEY(name, value) name = value,
    KEY_DEFINITIONS
#undef DEFINE_KEY
};

/* Game Controller Buttons */
enum class Button
{
#define DEFINE_BTN(name, value) name = value,
    BUTTON_DEFINITIONS
#undef DEFINE_BTN
};

/* Game Controller Axes */
enum class Axis
{
#define DEFINE_AXIS(name, value) name = value,
    AXES_DEFINITIONS
#undef DEFINE_AXIS
};

/* Mouse Buttons */
enum class MouseButton
{
#define DEFINE_MOUSE_BTN(name, value) name = value,
    MOUSE_BUTTON_DEFINITIONS
#undef DEFINE_MOUSE_BTN
};

#endif //MAGICK_GLFW_INPUT_DEFS_H
