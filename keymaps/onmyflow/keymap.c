#include QMK_KEYBOARD_H

enum unicode_names {
		OE,
		COE,
		AE,
		CAE,
		UE,
		CUE,
		SS,
		CSS
};

const uint32_t PROGMEM unicode_map[] = {
		[OE]  = 0xF6,
		[COE]  = 0xD6,
		[AE] = 0xE4,
		[CAE] = 0xC4,
		[UE]  = 0xFC,
		[CUE]  = 0xDC,
		[SS]  = 0xDF,
		[CSS]  = 0x1E9E
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_60_ansi(
		KC_GESC,		KC_1,			KC_2,					KC_3,			KC_4,			KC_5,			KC_6,			KC_7,			KC_8,			KC_9,				KC_0,					KC_MINS,			KC_EQL,			KC_BSPC,
		KC_TAB,			KC_Q,			KC_W,					KC_E,			KC_R,			KC_T,			KC_Y,			KC_U,			KC_I,			KC_O,				KC_P,					KC_LBRC,			KC_RBRC,		KC_BSLS,
		MO(1),			KC_A,			KC_S,					KC_D,			KC_F,			KC_G,			KC_H,			KC_J,			KC_K,			KC_L,				KC_SCLN,			KC_QUOT,									KC_ENT,
		KC_LSFT,							KC_Z,					KC_X,			KC_C,			KC_V,			KC_B,			KC_N,			KC_M,			KC_COMM,		KC_DOT,				KC_SLSH,									KC_RSFT,
		KC_LCTL,		KC_LGUI,	LM(1,MOD_LALT), 														KC_SPC, 																	KC_RALT,			KC_RGUI,			MO(2),			KC_RCTL
	),

	[1] = LAYOUT_60_ansi(
		KC_GRV, 		KC_F1,		KC_F2,				KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,			KC_F10,				KC_F11,				KC_F12,			KC_DEL,
		_______,		_______,	_______, 			______, 	_______, 	_______, 	_______, 	_______, 	KC_UP, 		_______, 		_______, 			XP(UE, CUE), 	_______, 		_______,
		_______, 		_______, 	XP(SS, CSS),	_______,	_______, 	_______, 	KC_VOLU, 	KC_LEFT, 	KC_DOWN,	KC_RGHT,		XP(OE, COE),	XP(AE, CAE),							_______,
		_______,							_______,			KC_CUT,		KC_COPY,	KC_PSTE,	_______,	KC_VOLD,	KC_MUTE,	KC_MPRV,		KC_MNXT,			_______, 									_______,
		_______, 		_______, 	_______, 																		KC_MPLY, 																	_______, 			_______,			KC_APP,			_______
	),

	[2] = LAYOUT_60_ansi(
		KC_PWR, 		KC_F13, 	KC_F14, 			KC_F15, 	KC_F16, 	KC_F17, 	KC_F18, 	KC_F19, 	KC_F20, 	KC_F21, 		KC_F22, 			KC_F23, 			KC_F24, 		EEP_RST,
		_______, 		RGB_TOG, 	RGB_HUD, 			RGB_HUI, 	RGB_SPD, 	RGB_SPI, 	_______, 	_______, 	_______, 	_______, 		_______, 			_______, 			_______, 		RESET,
		KC_CAPS, 		RGB_MOD, 	RGB_SAD, 			RGB_SAI, 	_______, 	_______, 	KC_VOLU, 	_______, 	_______, 	_______, 		_______, 			_______, 									_______,
		_______, 							RGB_RMOD, 		RGB_VAD, 	RGB_VAI, 	_______, 	_______, 	KC_VOLD, 	KC_MUTE, 	KC_MPRV, 		KC_MNXT, 			KC_SLEP, 									_______,
		_______, 		_______, 	_______, 																		KC_MPLY, 																	_______, 			_______, 			_______, 		_______
	)
};

