@class NSObject, BrightnessSystemClient;
@protocol OS_os_log;

@interface KeyboardBrightnessClient : NSObject {
    BrightnessSystemClient *bsc;
    NSObject<OS_os_log> *_logHandle;
}

- (void)dealloc;
- (id)init;
- (char)isBacklightSaturatedOnKeyboard:(unsigned long long)a0;
- (char)suspendIdleDimming:(char)a0 forKeyboard:(unsigned long long)a1;
- (float)backlightLevelForKeyboard:(unsigned long long)a0;
- (float)brightnessForKeyboard:(unsigned long long)a0;
- (id)copyKeyboardBacklightIDs;
- (char)enableAutoBrightness:(char)a0 forKeyboard:(unsigned long long)a1;
- (double)idleDimTimeForKeyboard:(unsigned long long)a0;
- (char)isAmbientFeatureAvailableOnKeyboard:(unsigned long long)a0;
- (char)isAutoBrightnessEnabledForKeyboard:(unsigned long long)a0;
- (char)isBacklightDimmedOnKeyboard:(unsigned long long)a0;
- (char)isBacklightSuppressedOnKeyboard:(unsigned long long)a0;
- (char)isIdleDimmingSuspendedOnKeyboard:(unsigned long long)a0;
- (char)isKeyboardBuiltIn:(unsigned long long)a0;
- (void)registerNotificationForKeys:(id)a0 keyboardID:(unsigned long long)a1 block:(id /* block */)a2;
- (char)setBrightness:(float)a0 fadeSpeed:(int)a1 commit:(BOOL)a2 forKeyboard:(unsigned long long)a3;
- (char)setBrightness:(float)a0 forKeyboard:(unsigned long long)a1;
- (char)setIdleDimTime:(double)a0 forKeyboard:(unsigned long long)a1;
- (void)unregisterKeyboardNotificationBlock;

@end
