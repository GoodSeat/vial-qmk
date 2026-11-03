/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H
#include "vial.h"

#define KEYMAP_INTROSPECTION_ENABLE

const uint16_t PROGMEM keymaps[1][MATRIX_ROWS][MATRIX_COLS] = {{{
    KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H, KC_I, KC_J, KC_K, KC_L, KC_M, KC_N, KC_O, KC_P, KC_R, KC_S, KC_T
}}};

const uint16_t PROGMEM encoder_map[1][NUM_ENCODERS][NUM_DIRECTIONS] = {{{KC_MS_U, KC_MS_D}}};

#ifdef KEYMAP_INTROSPECTION_ENABLE
const char* get_keycode_str(uint16_t keycode) {
    static char keycode_str[16];

    switch (keycode) {
    case KC_NO:          sprintf(keycode_str, "KC_NO"); break;
    case KC_TRANSPARENT: sprintf(keycode_str, "KC_TRNS"); break;

    case KC_A: sprintf(keycode_str, "KC_A"); break;
    case KC_B: sprintf(keycode_str, "KC_B"); break;
    case KC_C: sprintf(keycode_str, "KC_C"); break;
    case KC_D: sprintf(keycode_str, "KC_D"); break;
    case KC_E: sprintf(keycode_str, "KC_E"); break;
    case KC_F: sprintf(keycode_str, "KC_F"); break;
    case KC_G: sprintf(keycode_str, "KC_G"); break;
    case KC_H: sprintf(keycode_str, "KC_H"); break;
    case KC_I: sprintf(keycode_str, "KC_I"); break;
    case KC_J: sprintf(keycode_str, "KC_J"); break;
    case KC_K: sprintf(keycode_str, "KC_K"); break;
    case KC_L: sprintf(keycode_str, "KC_L"); break;
    case KC_M: sprintf(keycode_str, "KC_M"); break;
    case KC_N: sprintf(keycode_str, "KC_N"); break;
    case KC_O: sprintf(keycode_str, "KC_O"); break;
    case KC_P: sprintf(keycode_str, "KC_P"); break;
    case KC_Q: sprintf(keycode_str, "KC_Q"); break;
    case KC_R: sprintf(keycode_str, "KC_R"); break;
    case KC_S: sprintf(keycode_str, "KC_S"); break;
    case KC_T: sprintf(keycode_str, "KC_T"); break;
    case KC_U: sprintf(keycode_str, "KC_U"); break;
    case KC_V: sprintf(keycode_str, "KC_V"); break;
    case KC_W: sprintf(keycode_str, "KC_W"); break;
    case KC_X: sprintf(keycode_str, "KC_X"); break;
    case KC_Y: sprintf(keycode_str, "KC_Y"); break;
    case KC_Z: sprintf(keycode_str, "KC_Z"); break;
    case KC_1: sprintf(keycode_str, "KC_1"); break;
    case KC_2: sprintf(keycode_str, "KC_2"); break;
    case KC_3: sprintf(keycode_str, "KC_3"); break;
    case KC_4: sprintf(keycode_str, "KC_4"); break;
    case KC_5: sprintf(keycode_str, "KC_5"); break;
    case KC_6: sprintf(keycode_str, "KC_6"); break;
    case KC_7: sprintf(keycode_str, "KC_7"); break;
    case KC_8: sprintf(keycode_str, "KC_8"); break;
    case KC_9: sprintf(keycode_str, "KC_9"); break;
    case KC_0: sprintf(keycode_str, "KC_0"); break;

    case KC_ENTER:          sprintf(keycode_str, "KC_ENTER"); break;
    case KC_ESCAPE:         sprintf(keycode_str, "KC_ESC"); break;
    case KC_BACKSPACE:      sprintf(keycode_str, "KC_BCSP"); break;
    case KC_TAB:            sprintf(keycode_str, "KC_TAB"); break;
    case KC_SPACE:          sprintf(keycode_str, "KC_SPACE"); break;
    case KC_MINUS:          sprintf(keycode_str, "KC_MINUS"); break;
    case KC_EQUAL:          sprintf(keycode_str, "KC_EQUAL"); break;
    case KC_LEFT_BRACKET:   sprintf(keycode_str, "KC_LEFT_BRACKET"); break;
    case KC_RIGHT_BRACKET:  sprintf(keycode_str, "KC_RIGHT_BRACKET"); break;
    case KC_BACKSLASH:      sprintf(keycode_str, "KC_BACKSLASH"); break;
    case KC_NONUS_HASH:     sprintf(keycode_str, "KC_NONUS_HASH"); break;
    case KC_SEMICOLON:      sprintf(keycode_str, "KC_SEMICOLON"); break;
    case KC_QUOTE:          sprintf(keycode_str, "KC_QUOTE"); break;
    case KC_GRAVE:          sprintf(keycode_str, "KC_GRAVE"); break;
    case KC_COMMA:          sprintf(keycode_str, "KC_COMMA"); break;
    case KC_DOT:            sprintf(keycode_str, "KC_DOT"); break;
    case KC_SLASH:          sprintf(keycode_str, "KC_SLASH"); break;
    case KC_F1:             sprintf(keycode_str, "KC_F1"); break;
    case KC_F2:             sprintf(keycode_str, "KC_F2"); break;
    case KC_F3:             sprintf(keycode_str, "KC_F3"); break;
    case KC_F4:             sprintf(keycode_str, "KC_F4"); break;
    case KC_F5:             sprintf(keycode_str, "KC_F5"); break;
    case KC_F6:             sprintf(keycode_str, "KC_F6"); break;
    case KC_F7:             sprintf(keycode_str, "KC_F7"); break;
    case KC_F8:             sprintf(keycode_str, "KC_F8"); break;
    case KC_F9:             sprintf(keycode_str, "KC_F9"); break;
    case KC_F10:            sprintf(keycode_str, "KC_F10"); break;
    case KC_F11:            sprintf(keycode_str, "KC_F11"); break;
    case KC_F12:            sprintf(keycode_str, "KC_F12"); break;
    case KC_HOME:           sprintf(keycode_str, "KC_HOME"); break;
    case KC_END:            sprintf(keycode_str, "KC_END"); break;
    case KC_DELETE:         sprintf(keycode_str, "KC_DELT"); break;
    case KC_PAGE_UP:        sprintf(keycode_str, "KC_PGUP"); break;
    case KC_PAGE_DOWN:      sprintf(keycode_str, "KC_PGDN"); break;
    case KC_RIGHT:          sprintf(keycode_str, "KC_RIGHT"); break;
    case KC_LEFT:           sprintf(keycode_str, "KC_LEFT"); break;
    case KC_DOWN:           sprintf(keycode_str, "KC_DOWN"); break;
    case KC_UP:             sprintf(keycode_str, "KC_UP"); break;

    case KC_LEFT_CTRL:      sprintf(keycode_str, "KC_LEFT_CTRL"); break;
    case KC_LEFT_SHIFT:     sprintf(keycode_str, "KC_LEFT_SHIFT"); break;
    case KC_LEFT_ALT:       sprintf(keycode_str, "KC_LEFT_ALT"); break;
    case KC_LEFT_GUI:       sprintf(keycode_str, "KC_LEFT_GUI"); break;
    case KC_RIGHT_CTRL:     sprintf(keycode_str, "KC_RIGHT_CTRL"); break;
    case KC_RIGHT_SHIFT:    sprintf(keycode_str, "KC_RIGHT_SHIFT"); break;
    case KC_RIGHT_ALT:      sprintf(keycode_str, "KC_RIGHT_ALT"); break;
    case KC_RIGHT_GUI:      sprintf(keycode_str, "KC_RIGHT_GUI"); break;

    default: sprintf(keycode_str, "KC_%u", keycode); break;
    }

    return keycode_str;
}
#endif // KEYMAP_INTROSPECTION_ENABLE

// =================================================================================
// rolling press to hold
// =================================================================================
#define TAP_REPEAT_TERM 300
static uint16_t keycode_last_tap = 0;
static uint16_t time_last_tap    = 0;
static uint16_t keycode_last_normal_press = 0;
static uint16_t time_last_normal_press    = 0;

#define ROLLING_TO_MOD_TIMEOUT 40 // wait time for pending rolling to mod.(ms)
#define ROLLING_TO_MOD_START  120 // time for activate checking rolling to mod.(ms)
#define COMBO_TERM_LOCAL       80 // time for combo.(ms)
#define PENDING_TAP_CAPACITY 6

static uint8_t pressed_key_count = 0;

// Tapを保留するための情報構造体
typedef struct {
    uint8_t  slot_id;                    // このスロットの識別番号
    bool     is_active;                  // このスロットが使用中か
    bool     is_pending;                 // tap-pressが保留中か
    bool     is_key_repeat;              // hold時、keyrepeatと判定すべきか
    uint16_t keycode;                    // 元のキーコード
    uint8_t  krow;                       // キーの行
    uint8_t  kcol;                       // キーの列
    uint16_t keycode_registerd;          // register時のキーコード
    uint16_t pressed_time;               // このキーが押された時刻
    uint16_t release_time;               // このキーが離された時刻
    deferred_token tapping_pending_token; // TAPPING_TERMの遅延トークン Mod-tapキー以外では常に0
    deferred_token rolling_pending_token; // ROLLING_TO_MOD_TIMEOUTの遅延トークン Mod-tapキー以外では常に0
} pending_tap_t;

static pending_tap_t pending_taps[PENDING_TAP_CAPACITY];
static uint16_t active_combos[PENDING_TAP_CAPACITY];

void keyboard_post_init_user(void) {
    for (uint8_t i = 0; i < PENDING_TAP_CAPACITY; i++) {
        pending_taps[i].slot_id               = i;
        pending_taps[i].is_active             = false;
        pending_taps[i].is_pending            = false;
        pending_taps[i].is_key_repeat         = false;
        pending_taps[i].keycode               = 0;
        pending_taps[i].krow                  = 0;
        pending_taps[i].kcol                  = 0;
        pending_taps[i].keycode_registerd     = 0;
        pending_taps[i].pressed_time          = 0;
        pending_taps[i].release_time          = 0;
        pending_taps[i].tapping_pending_token = 0;
        pending_taps[i].rolling_pending_token = 0;

        active_combos[i] = 0;
    }
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("### keyboard_post_init_user ### \r\n");
#endif // KEYMAP_INTROSPECTION_ENABLE
}

uint16_t to_current_layer_keycode_on_slot(uint8_t slot) {
    uint8_t l = get_highest_layer(layer_state);
    uint8_t r = pending_taps[slot].krow;
    uint8_t c = pending_taps[slot].kcol;
    keypos_t key;
    key.col = c;
    key.row = r;
    uint16_t k = keymap_key_to_keycode(l, key);
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("    currentLayer: %u  [%u][%u] -> %s\r\n", l, r, c, get_keycode_str(k));
#endif // KEYMAP_INTROSPECTION_ENABLE
    return k;
}


uint8_t add_pressed_key(uint16_t keycode, uint8_t row, uint8_t col, bool key_repeat) {
    for (uint8_t i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (!pending_taps[i].is_active) {
            pending_taps[i].is_active             = true;
            pending_taps[i].is_pending            = true;
            pending_taps[i].is_key_repeat         = key_repeat;
            pending_taps[i].keycode               = keycode;
            pending_taps[i].krow                  = row;
            pending_taps[i].kcol                  = col;
            pending_taps[i].keycode_registerd     = 0;
            pending_taps[i].pressed_time          = timer_read();
            pending_taps[i].release_time          = 0;
            pending_taps[i].tapping_pending_token = 0;
            pending_taps[i].rolling_pending_token = 0;
            return i;
        }
    }
    return PENDING_TAP_CAPACITY + 1;
}
uint16_t remove_pressed_key(uint8_t row, uint8_t col, bool *existYounger) {
    uint8_t i;
    uint16_t t;
    *existYounger = false;
    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (!pending_taps[i].is_active) continue;
        if (pending_taps[i].krow != row || pending_taps[i].kcol != col) continue;
        pending_taps[i].release_time = timer_read();
        t = pending_taps[i].pressed_time;
        break;
    }
    if (i >= PENDING_TAP_CAPACITY) return i + 1;

    for (uint8_t j = 0; j < PENDING_TAP_CAPACITY; j++) {
        if (!pending_taps[j].is_active || i == j) continue;
        if (pending_taps[j].pressed_time > t) {
            *existYounger = true;
            break;
        }
    }
    return i;
}
bool exist_pending_key(void) {
    for (uint8_t i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (pending_taps[i].is_active && pending_taps[i].is_pending) return true;
    }
    return false;
}

// =================================================================================

uint16_t tap_hold_get_tap_keycode(uint16_t keycode) {
    if (keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) {
        return QK_MOD_TAP_GET_TAP_KEYCODE(keycode);
    }
    if (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX) {
        return QK_LAYER_TAP_GET_TAP_KEYCODE(keycode);
    }
    return keycode;
}
uint16_t tap_hold_get_hold_keycode(uint16_t keycode) {
    if (keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) {
        switch(QK_MOD_TAP_GET_MODS(keycode)) {
            case MOD_LCTL: return KC_LCTL;
            case MOD_LSFT: return KC_LSFT;
            case MOD_LALT: return KC_LALT;
            case MOD_LGUI: return KC_LGUI;
            case MOD_RCTL: return KC_RCTL;
            case MOD_RSFT: return KC_RSFT;
            case MOD_RALT: return KC_RALT;
            case MOD_RGUI: return KC_RGUI;
        }
    }
    return 0;
}
uint8_t tap_hold_get_hold_layer(uint16_t keycode) {
    if (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX) {
        return QK_LAYER_TAP_GET_LAYER(keycode);
    }
    return 0;
}

void tap_code_print(uint16_t keycode) {
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  tap_code_print: %s\r\n", get_keycode_str(keycode));
#endif // KEYMAP_INTROSPECTION_ENABLE
    tap_code(keycode);
}
void register_code_print(uint16_t keycode) {
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  register_code_print: %s\r\n", get_keycode_str(keycode));
#endif // KEYMAP_INTROSPECTION_ENABLE
    register_code(keycode);
}
void unregister_code_print(uint16_t keycode) {
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  unregister_code_print: %s\r\n", get_keycode_str(keycode));
#endif // KEYMAP_INTROSPECTION_ENABLE
    unregister_code(keycode);
}
void layer_on_print(int16_t layer) {
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  layer_on_print: 0x%04X\r\n", layer);
#endif // KEYMAP_INTROSPECTION_ENABLE
    layer_on(layer);
}
void layer_off_print(int16_t layer) {
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  layer_off_print: 0x%04X\r\n", layer);
#endif // KEYMAP_INTROSPECTION_ENABLE
    layer_off(layer);
}

void register_keycode_of_hold_on_slot(uint8_t slot) {
    uint16_t mod_key  = tap_hold_get_hold_keycode(pending_taps[slot].keycode);
    uint8_t  layer_no = tap_hold_get_hold_layer  (pending_taps[slot].keycode);
    if      (mod_key  != 0) register_code_print(mod_key );
    else if (layer_no != 0) layer_on_print     (layer_no);
}
void unregister_keycode_of_hold_on_slot(uint8_t slot) {
    uint16_t mod_key  = tap_hold_get_hold_keycode(pending_taps[slot].keycode);
    uint8_t  layer_no = tap_hold_get_hold_layer  (pending_taps[slot].keycode);
    if      (mod_key  != 0) unregister_code_print(mod_key );
    else if (layer_no != 0) layer_off_print      (layer_no);
}

// =================================================================================
// Vialで設定されているコンボテーブルから該当する組み合わせを動的に検索する
uint16_t get_combo_for_keys(uint16_t k1, uint16_t k2) {
    uint16_t tap1 = tap_hold_get_tap_keycode(k1);
    uint16_t tap2 = tap_hold_get_tap_keycode(k2);

    // Vialに登録されているコンボを全件チェック
    for (uint8_t i = 0; i < VIAL_COMBO_ENTRIES; i++) {
        vial_combo_entry_t entry;

        // Vialからi番目のコンボエントリーを取得
        dynamic_keymap_get_combo(i, &entry);

        // 出力キーコードが未設定（KC_NO または 0）の場合はスキップ
        if (entry.output == KC_NO || entry.output == 0) continue;

        // 入力キーコード（1つ目と2つ目）を取得し、Tapキーコードに揃える
        uint16_t in0 = tap_hold_get_tap_keycode(entry.input[0]);
        uint16_t in1 = tap_hold_get_tap_keycode(entry.input[1]);

        // 3つ目の入力キーが KC_NO / 0 であることを確認（「2キー同時押しコンボ」のみを対象とするため）
        bool is_2key_combo = (entry.input[2] == KC_NO || entry.input[2] == 0);

        // 押された2つのキーと一致するか判定（順不同）
        bool match = ((in0 == tap1 && in1 == tap2) || (in0 == tap2 && in1 == tap1));

        if (is_2key_combo && match) {
            return entry.output; // 一致したコンボの出力キーコードを返す
        }
    }

    return 0; // コンボ未登録
}
// =================================================================================
void resolve_pending_normal_keys_if_no_mod_pending(void) {
    uint8_t i;
    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (!pending_taps[i].is_pending || !pending_taps[i].is_active) continue;
        if (pending_taps[i].tapping_pending_token != 0 || pending_taps[i].rolling_pending_token != 0) {
            return;
        }
    }

    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
        if (!pending_taps[i].is_active) continue;
        if (pending_taps[i].is_pending) {
            uint16_t k = to_current_layer_keycode_on_slot(i);
            register_code_print(k);
            pending_taps[i].is_pending = false;
            pending_taps[i].keycode_registerd = k;
        }
    }
}

uint32_t delayed_key_tap_callback(uint32_t trigger_time, void *cb_arg) {
    uint8_t slot = (uint16_t)(uintptr_t)cb_arg;
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  * delayed_key_tap_callback: %s\r\n", get_keycode_str(pending_taps[slot].keycode));
#endif // KEYMAP_INTROSPECTION_ENABLE

    pending_taps[slot].is_pending   = false;
    pending_taps[slot].tapping_pending_token = 0;
    pending_taps[slot].rolling_pending_token = 0;

    if (pending_taps[slot].is_key_repeat) {
        uint16_t k  = to_current_layer_keycode_on_slot(slot);
        uint16_t k2 = tap_hold_get_tap_keycode(k);
        register_code_print(k2);
        pending_taps[slot].keycode_registerd = k2;
    } else {
        register_keycode_of_hold_on_slot(slot);
    }

    resolve_pending_normal_keys_if_no_mod_pending();
    return 0; // always don't recall.
}

uint32_t delayed_key_rolling_callback(uint32_t trigger_time, void *cb_arg) {
    uint8_t slot = (uint16_t)(uintptr_t)cb_arg;
#ifdef KEYMAP_INTROSPECTION_ENABLE
    uprintf("  ** delayed_key_rolling_callback: %s\r\n", get_keycode_str(pending_taps[slot].keycode));
#endif // KEYMAP_INTROSPECTION_ENABLE

    pending_taps[slot].is_active   = false;
    pending_taps[slot].is_pending  = false;
    pending_taps[slot].rolling_pending_token = 0;
    tap_code_print(tap_hold_get_tap_keycode(pending_taps[slot].keycode));

    resolve_pending_normal_keys_if_no_mod_pending();
    return 0; // always don't recall.
}

// =================================================================================

bool pre_process_record_user(uint16_t keycode, keyrecord_t *record) {

    uint8_t i;
    if (!record->event.pressed) keycode_last_tap = 0;

    uint8_t row = record->event.key.row;
    uint8_t col = record->event.key.col;

#ifdef KEYMAP_INTROSPECTION_ENABLE // ----------------//
    if (pressed_key_count == 0) print("---\r\n");     //
#endif // KEYMAP_INTROSPECTION_ENABLE ----------------//
    if      (record->event.pressed) pressed_key_count++;
    else if (pressed_key_count > 0) pressed_key_count--;

#ifdef KEYMAP_INTROSPECTION_ENABLE // -----------------------------------------------------------------------//
    if (record->event.pressed) uprintf("Key Press  : %s[%u][%u]\r\n", get_keycode_str(keycode), row, col);   //
    else                       uprintf("Key Release: %s[%u][%u]\r\n", get_keycode_str(keycode), row, col);   //
#endif // KEYMAP_INTROSPECTION_ENABLE -----------------------------------------------------------------------//

    bool is_mod_tap_key = (tap_hold_get_tap_keycode(keycode) != keycode);
    if (!is_mod_tap_key && record->event.pressed && !exist_pending_key()) {
      keycode_last_normal_press = keycode;      // comboの判定のために取っておく
      time_last_normal_press    = timer_read();
      return true;
    }

    if (record->event.pressed && timer_elapsed(time_last_normal_press) <= COMBO_TERM_LOCAL) { // コンボと思われる場合は本家の処理に任せる
        uint16_t combo_code = get_combo_for_keys(keycode_last_normal_press, keycode);
        if (combo_code != 0) {
#ifdef KEYMAP_INTROSPECTION_ENABLE // --------//
            xprintf(" COMBO detected.\r\n");  //
#endif // KEYMAP_INTROSPECTION_ENABLE --------//
            return true; // コンボ検出
        }
    }

    // key repeat by double tap.
    bool is_key_repeat = false;
    if (record->event.pressed && is_mod_tap_key && timer_elapsed(time_last_tap) < TAP_REPEAT_TERM) {
        if (tap_hold_get_tap_keycode(keycode) == keycode_last_tap) {
            is_key_repeat = true;
#ifdef KEYMAP_INTROSPECTION_ENABLE // -------------------//
            print(" key repeat by double tap.\r\n");     //
#endif // KEYMAP_INTROSPECTION_ENABLE -------------------//
        }
    }
    keycode_last_tap = 0;

    uint8_t slot = 0;
    bool existYounger = false;
    if (record->event.pressed) {
        slot = add_pressed_key(keycode, row, col, is_key_repeat);
    } else {
        slot = remove_pressed_key(row, col, &existYounger);
    }
    if (!is_mod_tap_key && slot >= PENDING_TAP_CAPACITY) return true; // スロットに未登録のキー

#ifdef KEYMAP_INTROSPECTION_ENABLE // -----------------------------------------//
    xprintf(" <pressed_key_count: %u> slot:%u\r\n", pressed_key_count, slot);  //
#endif // KEYMAP_INTROSPECTION_ENABLE -----------------------------------------//

    if (slot >= PENDING_TAP_CAPACITY) {
#ifdef KEYMAP_INTROSPECTION_ENABLE // ------------------------------------------------//
        if (record->event.pressed) {                                                  //
            xprintf(" ### ACTIVE SLOT COUNT OVER %u ###\r\n", PENDING_TAP_CAPACITY);  //
        } else {                                                                      //
            xprintf(" ### NOT FOUND CORRESPONDING SLOT ###\r\n");                     //
        }                                                                             //
#endif // KEYMAP_INTROSPECTION_ENABLE ------------------------------------------------//
        return true;
    }

    // ------------------------------------------------------------------------------------------------------------------
    if (record->event.pressed) {

        // === 【コンボ割り込み処理】 ===
        // 既に押下/保留中のキーの中に、今回のキーとコンボになるペアがあるかチェック
        for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
            if (i == slot || !pending_taps[i].is_active) continue;
            if (!pending_taps[i].is_pending) continue;

            uint16_t combo_code = get_combo_for_keys(pending_taps[i].keycode, keycode);
            if (combo_code != 0) { // コンボ検出
                // 先行キーの遅延タイマーをキャンセル
                if (pending_taps[i].tapping_pending_token != 0) {
                    cancel_deferred_exec(pending_taps[i].tapping_pending_token);
                    pending_taps[i].tapping_pending_token = 0;
                }
                if (pending_taps[i].rolling_pending_token != 0) {
                    cancel_deferred_exec(pending_taps[i].rolling_pending_token);
                    pending_taps[i].rolling_pending_token = 0;
                }

                // 両方のキーのスロットを無効化（離した時の二重誤動作を防止）
                pending_taps[i].is_active     = false;
                pending_taps[i].is_pending    = false;
                pending_taps[slot].is_active  = false;
                pending_taps[slot].is_pending = false;

                // コンボキーを出力
                tap_code_print(combo_code);
                keycode_last_tap = combo_code;
                time_last_tap    = timer_read();
#ifdef KEYMAP_INTROSPECTION_ENABLE // ---------------------------------------------------------------------//
                xprintf(" ### %u, %u -> COMBO %u ###\r\n", pending_taps[i].keycode, keycode, combo_code);  //
#endif // KEYMAP_INTROSPECTION_ENABLE ---------------------------------------------------------------------//
                return false; // 通常の Mod-Tap 処理や QMK 標準処理をすべてスキップ
            }
        }

        if (is_mod_tap_key) {
            if (is_key_repeat) {
                pending_taps[slot].tapping_pending_token = defer_exec(TAPPING_TERM * 3, delayed_key_tap_callback, (void*)(uintptr_t)pending_taps[slot].slot_id);
            } else {
                pending_taps[slot].tapping_pending_token = defer_exec(TAPPING_TERM, delayed_key_tap_callback, (void*)(uintptr_t)pending_taps[slot].slot_id);
            }
        }
        return false;
    } else {
        if (!is_mod_tap_key) pending_taps[slot].is_active = false;

        if (!pending_taps[slot].is_pending) { // 保留解決済キーのリリース時
            if (is_mod_tap_key) { // tapping term以上押されたmod-tapキーが離された時
                if (pressed_key_count < 2) {
                    for (i = 0; i < PENDING_TAP_CAPACITY; i++) {
                        if (i == slot || !pending_taps[i].is_active) continue;
                        if (pending_taps[i].tapping_pending_token != 0                           // mod-tapキーで、
                         && pending_taps[i].pressed_time > pending_taps[slot].pressed_time       // このキーより後に押され、
                         && timer_elapsed(pending_taps[i].pressed_time) > ROLLING_TO_MOD_TIMEOUT // ROLLING_TO_MOD_TIMEOUT以上共存したキーはtap扱いとする
                            ) {
                            cancel_deferred_exec(pending_taps[i].tapping_pending_token);
                            pending_taps[i].tapping_pending_token = 0;

                            uint16_t k  = to_current_layer_keycode_on_slot(i);
                            uint16_t k2 = tap_hold_get_tap_keycode(k);
                            register_code_print(k2);
                            pending_taps[i].is_pending = false;
                            pending_taps[i].keycode_registerd = k2;
                        }
                    }
                }

                if (pending_taps[slot].keycode_registerd == 0) unregister_keycode_of_hold_on_slot(slot);
            }

            pending_taps[slot].is_active = false;

            if (pending_taps[slot].keycode_registerd != 0) {
                unregister_code_print(pending_taps[slot].keycode_registerd);
#ifdef KEYMAP_INTROSPECTION_ENABLE // -----------------------------//
                print("    !is_pending -> return false;\r\n");     //
#endif // KEYMAP_INTROSPECTION_ENABLE -----------------------------//
                return false;
            } else {
#ifdef KEYMAP_INTROSPECTION_ENABLE // -----------------------------//
                print("    !is_pending -> return true;\r\n");      //
#endif // KEYMAP_INTROSPECTION_ENABLE -----------------------------//
                return !is_mod_tap_key;
            }
        } else { // 保留中キーのリリース時
            if (pending_taps[slot].tapping_pending_token != 0) {
                cancel_deferred_exec(pending_taps[slot].tapping_pending_token);
                pending_taps[slot].tapping_pending_token = 0;

                if (existYounger && timer_elapsed(pending_taps[slot].pressed_time) > ROLLING_TO_MOD_START) {
#ifdef KEYMAP_INTROSPECTION_ENABLE // ------------------------------------------//
                    print("     existYounger, start rolling pending.\r\n");     //
#endif // KEYMAP_INTROSPECTION_ENABLE ------------------------------------------//
                    pending_taps[slot].rolling_pending_token = defer_exec(ROLLING_TO_MOD_TIMEOUT, delayed_key_rolling_callback, (void*)(uintptr_t)pending_taps[slot].slot_id);
                    return false;
                }
            }

            pending_taps[slot].is_pending = false;
            pending_taps[slot].is_active  = false;

            // 自分よりpressの古いmod-tapキー、あるいはROLLING_TO_MOD_TIMEOUT以内に離された保留中のmod-tapキーがあれば、それをMod扱いとする
            for (i = 0; i < PENDING_TAP_CAPACITY; ++i) {
                if (!pending_taps[i].is_active || !pending_taps[i].is_pending) continue;
                if (pending_taps[i].tapping_pending_token == 0 && pending_taps[i].rolling_pending_token == 0) continue;
                if (pending_taps[i].rolling_pending_token != 0 && pending_taps[i].release_time < pending_taps[slot].pressed_time) {
                    uint16_t kp = tap_hold_get_tap_keycode(to_current_layer_keycode_on_slot(i));
#ifdef KEYMAP_INTROSPECTION_ENABLE // ----------------------------------------------------------//
                    xprintf("     tap before very short tap :%s\r\n", get_keycode_str(kp));     //
#endif // KEYMAP_INTROSPECTION_ENABLE ----------------------------------------------------------//
                    tap_code_print(kp);
                    pending_taps[i].is_active  = false;
                    pending_taps[i].is_pending = false;
                    cancel_deferred_exec(pending_taps[i].rolling_pending_token);
                    pending_taps[i].rolling_pending_token = 0;
                    continue;
                }
                if (pending_taps[i].pressed_time < pending_taps[slot].pressed_time || pending_taps[i].rolling_pending_token != 0) {
                    pending_taps[i].is_pending = false;
                    register_keycode_of_hold_on_slot(i);
                }
            }

            uint16_t sendKeycode = tap_hold_get_tap_keycode(to_current_layer_keycode_on_slot(slot));
            tap_code_print(sendKeycode);
            keycode_last_tap = sendKeycode;
            time_last_tap    = timer_read();

            // Mod扱いしたキーのリリースを再現
            for (i = 0; i < PENDING_TAP_CAPACITY; ++i) {
                if (!pending_taps[i].is_active) continue;
                if (pending_taps[i].tapping_pending_token == 0 && pending_taps[i].rolling_pending_token == 0) continue;

                if (pending_taps[i].rolling_pending_token != 0) {
                    pending_taps[i].is_active = false;
                    unregister_keycode_of_hold_on_slot(i);

                    cancel_deferred_exec(pending_taps[i].rolling_pending_token);
                    pending_taps[i].rolling_pending_token = 0;
                } else if (pending_taps[i].pressed_time < pending_taps[slot].pressed_time) {
                    cancel_deferred_exec(pending_taps[i].tapping_pending_token);
                    pending_taps[i].tapping_pending_token = 0;
                }
            }
        }
    }

    return false;

}
