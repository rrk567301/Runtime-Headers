@class NSObject;
@protocol ENOnboardingManagerDelegate;

@interface ENOnboardingManager : NSObject {
    int _screenLockNotifyToken;
    int _cameraIrisFrontNotifyToken;
    int _cameraIrisBackNotifyToken;
    int _cameraIrisBackTeleNotifyToken;
}

@property (nonatomic) char isCaptureSessionRunning;
@property (weak, nonatomic) NSObject<ENOnboardingManagerDelegate> *delegate;
@property (readonly, nonatomic, getter=isIdealTimeForBuddy) char idealTimeForBuddy;
@property (readonly, nonatomic, getter=isDeviceUnlocked) char deviceUnlocked;
@property (nonatomic) char pendingBuddyOnboarding;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_observeCameraIrisNotifications;
- (void)_cameraIrisStateChangedWithToken:(int)a0;
- (void)_deviceLockStateChangedWithToken:(int)a0;
- (char)_isInLostMode;
- (void)setShouldObserveDeviceUnlocks:(char)a0;

@end
