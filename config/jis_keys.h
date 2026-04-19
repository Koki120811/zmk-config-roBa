#pragma once
#include <dt-bindings/zmk/keys.h>

// ────────────────────────────────────────
// OSがJIS配列設定のときにUS配列キーボードから
// 正しい文字を入力するためのキーコード変換表
//
// USキー → JIS通常 / JIS Shift の対応：
//   MINUS → -  / =
//   EQUAL → ^  / ~
//   LBKT  → @  / `
//   RBKT  → [  / {
//   NUHS  → ]  / }
//   SEMI  → ;  / +
//   SQT   → :  / *
//   INT1  → \  / _   (ろキー)
//   INT3  → ¥  / |   (¥キー)
// ────────────────────────────────────────

// 記号（単独）
#define JIS_MINUS       MINUS           // -
#define JIS_EQUAL       LS(MINUS)       // =
#define JIS_CARET       EQUAL           // ^
#define JIS_TILDE       LS(EQUAL)       // ~
#define JIS_AT          LBKT            // @
#define JIS_GRAVE       LS(LBKT)        // `
#define JIS_LBKT        RBKT            // [
#define JIS_LBRC        LS(RBKT)        // {
#define JIS_RBKT        NUHS            // ]
#define JIS_RBRC        LS(NUHS)        // }
#define JIS_SEMI        SEMI            // ;
#define JIS_PLUS        LS(SEMI)        // +
#define JIS_COLON       SQT             // :
#define JIS_ASTERISK    LS(SQT)         // *
#define JIS_BACKSLASH   INT1            // \ (ろキー)
#define JIS_UNDERSCORE  LS(INT1)        // _
#define JIS_YEN         INT3            // ¥
#define JIS_PIPE        LS(INT3)        // |
#define JIS_SLASH       SLASH           // /
#define JIS_QUESTION    LS(SLASH)       // ?

// 記号（Shift+数字）
#define JIS_EXCL        LS(N1)          // !
#define JIS_DQT         LS(N2)          // "
#define JIS_HASH        LS(N3)          // #
#define JIS_DOLLAR      LS(N4)          // $
#define JIS_PERCENT     LS(N5)          // %
#define JIS_AMPERSAND   LS(N6)          // &
#define JIS_SQT         LS(N7)          // '
#define JIS_LPAR        LS(N8)          // (
#define JIS_RPAR        LS(N9)          // )

// 比較演算子
#define JIS_LT          LS(COMMA)       // <
#define JIS_GT          LS(DOT)         // >
