@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriVibrationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _ringVibrationState;
    long long _silentVibrationState;
}

+ (id)sharedManager;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)_fetchRingVibrationValue;
- (void)_fetchSilentVibrationValue;
- (BOOL)_ringVibrationValue;
- (BOOL)_silentVibrationValue;
- (void)handleRingVibrationValueChange;
- (void)handleSilentVibrationValueChange;
- (BOOL)vibratesForDeviceRingerSwitchState:(long long)a0;

@end
