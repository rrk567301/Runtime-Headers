@class NSObject;
@protocol ENOnboardingManagerDelegate;

@interface ENOnboardingManager : NSObject {
    int _screenLockNotifyToken;
    int _cameraIrisFrontNotifyToken;
    int _cameraIrisBackNotifyToken;
    int _cameraIrisBackTeleNotifyToken;
}

@property (nonatomic) BOOL isCaptureSessionRunning;
@property (weak, nonatomic) NSObject<ENOnboardingManagerDelegate> *delegate;
@property (readonly, nonatomic, getter=isIdealTimeForBuddy) BOOL idealTimeForBuddy;
@property (readonly, nonatomic, getter=isDeviceUnlocked) BOOL deviceUnlocked;
@property (nonatomic) BOOL pendingBuddyOnboarding;

- (void)_cameraIrisStateChangedWithToken:(int)a0;
- (BOOL)_isInLostMode;
- (void).cxx_destruct;
- (void)_observeCameraIrisNotifications;
- (void)_deviceLockStateChangedWithToken:(int)a0;
- (id)init;
- (void)setShouldObserveDeviceUnlocks:(BOOL)a0;
- (void)dealloc;

@end
