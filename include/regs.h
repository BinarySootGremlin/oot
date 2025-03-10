#ifndef REGS_H
#define REGS_H

#define REG_GROUPS 29 // number of REG groups, i.e. REG, SREG, OREG, etc.
#define REG_PAGES 6
#define REGS_PER_PAGE 16
#define REGS_PER_GROUP (REG_PAGES * REGS_PER_PAGE)

#define BASE_REG(n, r) gRegEditor->data[(n) * REGS_PER_GROUP + (r)]

#define  REG(r) BASE_REG(0, (r))
#define SREG(r) BASE_REG(1, (r))
#define OREG(r) BASE_REG(2, (r))
#define PREG(r) BASE_REG(3, (r))
#define QREG(r) BASE_REG(4, (r))
#define MREG(r) BASE_REG(5, (r))
#define YREG(r) BASE_REG(6, (r))
#define DREG(r) BASE_REG(7, (r))
#define UREG(r) BASE_REG(8, (r))
#define IREG(r) BASE_REG(9, (r))
#define ZREG(r) BASE_REG(10, (r))
#define CREG(r) BASE_REG(11, (r))
#define NREG(r) BASE_REG(12, (r))
#define KREG(r) BASE_REG(13, (r))
#define XREG(r) BASE_REG(14, (r))
#define cREG(r) BASE_REG(15, (r))
#define sREG(r) BASE_REG(16, (r))
#define iREG(r) BASE_REG(17, (r))
#define WREG(r) BASE_REG(18, (r))
#define AREG(r) BASE_REG(19, (r))
#define VREG(r) BASE_REG(20, (r))
#define HREG(r) BASE_REG(21, (r))
#define GREG(r) BASE_REG(22, (r))
#define mREG(r) BASE_REG(23, (r))
#define nREG(r) BASE_REG(24, (r))
#define BREG(r) BASE_REG(25, (r))
#define dREG(r) BASE_REG(26, (r))
#define kREG(r) BASE_REG(27, (r))
#define bREG(r) BASE_REG(28, (r))

#define R_ENV_AMBIENT_COLOR(i)                   REG(0 + (i))
#define R_ENV_LIGHT1_COLOR(i)                    REG(3 + (i))
#define R_ENV_LIGHT2_COLOR(i)                    REG(6 + (i))
#define R_ENV_DISABLE_DBG                        REG(9)
#define R_ENV_FOG_COLOR(i)                       REG(10 + (i))
#define R_ENV_Z_FAR                              REG(13)
#define R_ENV_FOG_NEAR                           REG(14)
#define R_ENV_TIME_SPEED_OLD                     REG(15) // Most likely used during development. Unused in the final game.
#define R_RUN_SPEED_LIMIT                        REG(45)
#define R_ENABLE_ARENA_DBG                       SREG(0)
#define R_ROOM_IMAGE_NODRAW_FLAGS                SREG(25)
#define R_ROOM_BG2D_FORCE_SCALEBG                SREG(26)
#define R_UPDATE_RATE                            SREG(30)
#define R_ENABLE_AUDIO_DBG                       SREG(36)
#define R_VI_MODE_EDIT_STATE                     SREG(48)
#define R_VI_MODE_EDIT_WIDTH                     SREG(49)
#define R_VI_MODE_EDIT_HEIGHT                    SREG(50)
#define R_VI_MODE_EDIT_ULY_ADJ                   SREG(51)
#define R_VI_MODE_EDIT_LRY_ADJ                   SREG(52)
#define R_VI_MODE_EDIT_ULX_ADJ                   SREG(53)
#define R_VI_MODE_EDIT_LRX_ADJ                   SREG(54)
#define R_FB_FILTER_TYPE                         SREG(80)
#define R_FB_FILTER_PRIM_COLOR(c)                SREG(81 + (c))
#define R_FB_FILTER_A                            SREG(84)
#define R_FB_FILTER_ENV_COLOR(c)                 SREG(85 + (c))
#define R_ENABLE_FB_FILTER                       SREG(88)
#define R_PAUSE_MENU_MODE                        SREG(94)
#define R_CAM_XZ_OFFSET_UPDATE_RATE              OREG(2)
#define R_CAM_Y_OFFSET_UPDATE_RATE               OREG(3)
#define R_CAM_FOV_UPDATE_RATE                    OREG(4)
#define R_CAM_MAX_PITCH                          OREG(5)
#define R_CAM_R_UPDATE_RATE_INV                  OREG(6)
#define R_CAM_PITCH_UPDATE_RATE_INV              OREG(7)
#define R_CAM_SLOPE_Y_ADJ_AMOUNT                 OREG(9)
#define R_CAM_PITCH_FLOOR_CHECK_NEAR_DIST_FAC    OREG(17)
#define R_CAM_PITCH_FLOOR_CHECK_FAR_DIST_FAC     OREG(18)
#define R_CAM_PITCH_FLOOR_CHECK_OFFSET_Y_FAC     OREG(19)
#define R_CAM_PITCH_FLOOR_CHECK_NEAR_WEIGHT      OREG(20)
#define R_CAM_DEFAULT_ANIM_TIME                  OREG(23)
#define R_CAM_UPDATE_RATE_STEP_SCALE_XZ          OREG(25) // also used as a step scale for other data
#define R_CAM_UPDATE_RATE_STEP_SCALE_Y           OREG(26) // also used as a step scale for other data
#define R_CAM_JUMP1_EYE_Y_STEP_SCALE             OREG(31)
#define R_CAM_MIN_PITCH_1                        OREG(34)
#define R_CAM_MIN_PITCH_2                        OREG(35)
#define R_CAM_BATTLE1_ROLL_TARGET_BASE           OREG(36)
#define R_CAM_BATTLE1_ROLL_STEP_SCALE            OREG(37)
#define R_CAM_BATTLE1_XYZ_OFFSET_UPDATE_RATE_TARGET OREG(40)
#define R_CAM_AT_LERP_STEP_SCALE_MIN             OREG(41)
#define R_CAM_AT_LERP_STEP_SCALE_FAC             OREG(42)
#define R_CAM_YOFFSET_NORM                       OREG(46)
#define R_CAM_DATA(type)                         PREG(0 + (type))
#define R_DBG_CAM_UPDATE                         PREG(80)
#define R_DBG_REG_UPDATE                         PREG(82)
#define R_RELOAD_CAM_PARAMS                      QREG(0)
#define R_SCENE_CAM_TYPE                         YREG(15)
#define R_TEXTBOX_TEXWIDTH                       YREG(16)
#define R_TEXTBOX_TEXHEIGHT                      YREG(17)
#define R_TEXTBOX_WIDTH                          YREG(22)
#define R_TEXTBOX_HEIGHT                         YREG(23)
#define R_TEXTBOX_ICON_XPOS                      YREG(71)
#define R_TEXTBOX_ICON_YPOS                      YREG(72)
#define R_TEXTBOX_ICON_SIZE                      YREG(75)
#define R_MESSAGE_DEBUGGER_SELECT                YREG(78)
#define R_MESSAGE_DEBUGGER_TEXTID                YREG(79)
#define R_C_UP_ICON_X                            YREG(88)
#define R_C_UP_ICON_Y                            YREG(89)
#define R_MAGIC_FILL_COLOR(i)                    ZREG(0 + (i))
#define R_C_BTN_COLOR(i)                         ZREG(39 + (i))
#define R_B_BTN_COLOR(i)                         ZREG(43 + (i))
#define R_START_LABEL_DD(i)                      ZREG(48 + (i))
#define R_START_LABEL_Y(i)                       ZREG(51 + (i))
#define R_START_LABEL_X(i)                       ZREG(54 + (i))
#define R_C_UP_BTN_X                             ZREG(62)
#define R_C_UP_BTN_Y                             ZREG(63)
#define R_START_BTN_X                            ZREG(68)
#define R_START_BTN_Y                            ZREG(69)
#define R_ITEM_BTN_X(i)                          ZREG(70 + (i))
#define R_ITEM_BTN_Y(i)                          ZREG(74 + (i))
#define R_ITEM_BTN_DD(i)                         ZREG(78 + (i))
#define R_ITEM_ICON_X(i)                         ZREG(82 + (i))
#define R_ITEM_ICON_Y(i)                         ZREG(86 + (i))
#define R_ITEM_ICON_DD(i)                        ZREG(90 + (i))
#define R_TRANS_DBG_ENABLED                      CREG(11)
#define R_TRANS_DBG_TYPE                         CREG(12)
#define R_ENV_WIND_DIR(i)                        CREG(16 + (i))
#define R_ENV_WIND_SPEED                         CREG(19)
#define R_PAUSE_STICK_REPEAT_DELAY               XREG(6)
#define R_PAUSE_STICK_REPEAT_DELAY_FIRST         XREG(8)
#define R_A_BTN_Y                                XREG(16)
#define R_A_BTN_X                                XREG(17)
#define R_A_ICON_Y                               XREG(19)
#define R_A_ICON_X                               XREG(20)
#define R_A_BTN_COLOR(i)                         XREG(22 + (i))
#define R_MAGIC_METER_Y_HIGHER                   XREG(48)
#define R_MAGIC_METER_X                          XREG(49)
#define R_MAGIC_METER_Y_LOWER                    XREG(50)
#define R_MAGIC_FILL_X                           XREG(51)
#define R_TEXT_INIT_XPOS                         XREG(54)
#define R_TEXT_INIT_YPOS                         XREG(55)
#define R_TEXT_LINE_SPACING                      XREG(56)
#define R_TEXT_CHAR_SCALE                        XREG(57)
#define R_TEXT_DROP_SHADOW_OFFSET                XREG(60)
#define R_TEXTBOX_BG_YPOS                        XREG(61)
#define R_TEXTBOX_END_XPOS                       XREG(64)
#define R_TEXTBOX_END_YPOS                       XREG(65)
#define R_TEXT_CHOICE_XPOS                       XREG(66)
#define R_TEXT_CHOICE_YPOS(choice)               XREG(67 + (choice))
#define R_TEXTBOX_X_TARGET                       XREG(72)
#define R_TEXTBOX_Y_TARGET                       XREG(73)
#define R_TEXTBOX_WIDTH_TARGET                   XREG(74)
#define R_TEXTBOX_HEIGHT_TARGET                  XREG(75)
#define R_TEXTBOX_TEXWIDTH_TARGET                XREG(76)
#define R_TEXTBOX_TEXHEIGHT_TARGET               XREG(77)
#define R_ENV_LIGHT1_DIR(i)                      cREG(3 + (i))
#define R_ENV_LIGHT2_DIR(i)                      cREG(6 + (i))
#define R_ROOM_CULL_DEBUG_MODE                   iREG(86)
#define R_ROOM_CULL_NUM_ENTRIES                  iREG(87)
#define R_ROOM_CULL_USED_ENTRIES                 iREG(88)
#define R_ROOM_CULL_DEBUG_TARGET                 iREG(89)
#define R_B_LABEL_DD                             WREG(0)
#define R_OW_MINIMAP_X                           WREG(29)
#define R_OW_MINIMAP_Y                           WREG(30)
#define R_MINIMAP_DISABLED                       WREG(31)
#define R_B_LABEL_X(i)                           WREG(40 + (i))
#define R_B_LABEL_Y(i)                           WREG(43 + (i))
#define R_DGN_MINIMAP_X                          WREG(68)
#define R_DGN_MINIMAP_Y                          WREG(69)
#define R_TEXTBOX_X                              VREG(0)
#define R_TEXTBOX_Y                              VREG(1)
#define R_TEXTBOX_CLEF_XPOS                      VREG(7)
#define R_TEXTBOX_CLEF_YPOS                      VREG(8)
#define R_MAP_INDEX                              VREG(11)
#define R_MAP_TEX_INDEX_BASE                     VREG(12)
#define R_MAP_TEX_INDEX                          VREG(13)
#define R_COMPASS_SCALE_X                        VREG(14)
#define R_COMPASS_SCALE_Y                        VREG(15)
#define R_COMPASS_OFFSET_X                       VREG(16)
#define R_COMPASS_OFFSET_Y                       VREG(17)
#define R_MINIMAP_COLOR(i)                       VREG(18 + (i))
#define R_OCARINA_BUTTONS_XPOS                   VREG(28)
#define R_OCARINA_BUTTONS_XPOS_OFFSET            VREG(29)
#define R_TEXT_ADJUST_COLOR_1_R                  VREG(33)
#define R_TEXT_ADJUST_COLOR_1_G                  VREG(34)
#define R_TEXT_ADJUST_COLOR_1_B                  VREG(35)
#define R_TEXT_ADJUST_COLOR_2_R                  VREG(36)
#define R_TEXT_ADJUST_COLOR_2_G                  VREG(37)
#define R_TEXT_ADJUST_COLOR_2_B                  VREG(38)
#define R_OCARINA_BUTTONS_YPOS(note)             VREG(45 + (note))
#define R_OCARINA_BUTTONS_YPOS_OFFSET            VREG(51)
#define R_ITEM_AMMO_X(i)                         VREG(64 + (i))
#define R_ITEM_AMMO_Y(i)                         VREG(68 + (i))
#define R_ITEM_ICON_WIDTH(i)                     VREG(76 + (i))
#define R_ITEM_BTN_WIDTH(i)                      VREG(80 + (i))
#define R_GAME_OVER_RUMBLE_STRENGTH              VREG(90)
#define R_GAME_OVER_RUMBLE_DURATION              VREG(91)
#define R_GAME_OVER_RUMBLE_DECREASE_RATE         VREG(92)
#define R_DISABLE_INPUT_DISPLAY                  HREG(47)
#define R_ENABLE_PLAY_LOGS                       HREG(63)
#define R_EN_GOROIWA_SPEED                       mREG(12)
#define R_NAVI_MSG_REGION_ALPHA                  nREG(87)

#endif
