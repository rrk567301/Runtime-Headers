@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriVibrationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _ringVibrationState;
    long long _silentVibrationState;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_fetchRingVibrationValue;
- (void)_fetchSilentVibrationValue;
- (char)_ringVibrationValue;
- (char)_silentVibrationValue;
- (void)handleRingVibrationValueChange;
- (void)handleSilentVibrationValueChange;
- (char)vibratesForDeviceRingerSwitchState:(long long)a0;

@end
