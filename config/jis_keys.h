#pragma once

#include <dt-bindings/zmk/keys.h>

// ────────────────────────────────────────
// OSがJIS配列設定のときにUS配列キーボードから
// 正しい文字を入力するためのキーコード変換表
// ────────────────────────────────────────

// 単独キー
#define JIS_AT          LS(N2)        // @
#define JIS_CARET       LS(N6)        // ^
#define JIS_AMPERSAND   LS(N6)        // & → JISでは ^ と同じ位置にズレあり注意
#define JIS_ASTERISK    LS(SQT)       // *  (JISの ' キーをShift)
#define JIS_LPAR        LS(N8)        // (
#define JIS_RPAR        LS(N9)        // )
#define JIS_MINUS       MINUS         // - (同じ)
#define JIS_UNDERSCORE  LS(INT_RO)    // _
#define JIS_EQUAL       LS(MINUS)     // =  (JISの - をShift)
#define JIS_PLUS        LS(SEMI)      // +  (JISの ; をShift)
#define JIS_LBKT        RBKT          // [  (JISの ] キー)
#define JIS_RBKT        NUHS          // ]
#define JIS_LBRC        LS(RBKT)      // {
#define JIS_RBRC        LS(NUHS)      // }
#define JIS_SEMI        SEMI          // ;  (同じ)
#define JIS_COLON       SQT           // :  (JISの ' キー)
#define JIS_SQT         LS(N7)        // '
#define JIS_DQT         LS(N2)        // " → JISではShift+2
#define JIS_GRAVE       LS(LBKT)      // `  (JISの [ をShift)
#define JIS_TILDE       LS(LBKT)      // ~  ※環境によって異なる場合あり
#define JIS_PIPE        LS(INT_YEN)   // |
#define JIS_BACKSLASH   INT_YEN       // \  (JISの ¥ キー)
#define JIS_LT          LS(COMMA)     // 
#define JIS_GT          LS(DOT)       // >
#define JIS_QUESTION    LS(SLASH)     // ?
#define JIS_EXCL        LS(N1)        // !
#define JIS_HASH        LS(N3)        // #
#define JIS_DOLLAR      LS(N4)        // $
#define JIS_PERCENT     LS(N5)        // %
