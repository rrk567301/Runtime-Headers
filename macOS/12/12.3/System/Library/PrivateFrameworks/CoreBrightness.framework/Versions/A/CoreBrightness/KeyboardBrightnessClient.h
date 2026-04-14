@class NSObject, BrightnessSystemClient;
@protocol OS_os_log;

@interface KeyboardBrightnessClient : NSObject {
    BrightnessSystemClient *bsc;
    NSObject<OS_os_log> *_logHandle;
}

- (void)dealloc;
- (id)init;
- (BOOL)setBrightness:(float)a0 fadeSpeed:(int)a1 commit:(BOOL)a2 forKeyboard:(unsigned long long)a3;
- (id)copyKeyboardBacklightIDs;
- (BOOL)isKeyboardBuiltIn:(unsigned long long)a0;
- (void)unregisterKeyboardNotificationBlock;
- (BOOL)isBacklightSuppressedOnKeyboard:(unsigned long long)a0;
- (BOOL)isBacklightSaturatedOnKeyboard:(unsigned long long)a0;
- (BOOL)isBacklightDimmedOnKeyboard:(unsigned long long)a0;
- (float)brightnessForKeyboard:(unsigned long long)a0;
- (BOOL)setBrightness:(float)a0 forKeyboard:(unsigned long long)a1;
- (BOOL)enableAutoBrightness:(BOOL)a0 forKeyboard:(unsigned long long)a1;
- (BOOL)isAmbientFeatureAvailableOnKeyboard:(unsigned long long)a0;
- (double)idleDimTimeForKeyboard:(unsigned long long)a0;
- (BOOL)setIdleDimTime:(double)a0 forKeyboard:(unsigned long long)a1;
- (BOOL)suspendIdleDimming:(BOOL)a0 forKeyboard:(unsigned long long)a1;
- (BOOL)isIdleDimmingSuspendedOnKeyboard:(unsigned long long)a0;
- (BOOL)isAutoBrightnessEnabledForKeyboard:(unsigned long long)a0;
- (void)registerNotificationForKeys:(id)a0 keyboardID:(unsigned long long)a1 block:(id /* block */)a2;

@end
