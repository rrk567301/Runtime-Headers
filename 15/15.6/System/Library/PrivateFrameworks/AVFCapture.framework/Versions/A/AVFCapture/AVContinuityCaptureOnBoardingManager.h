@class NSArray;

@interface AVContinuityCaptureOnBoardingManager : NSObject {
    NSArray *_activeClientPIDsForOnboarding;
    id /* block */ _completionHandler;
}

+ (void)initialize;
+ (void)_removeRemindLaterActiveForAllClients;
+ (id)getAVFFaceTimeBundleIdentifier;
+ (char)getAppObservingSystemPreferredCameraStatusForBundlePath:(id)a0 bundleID:(id)a1;
+ (char)onBoardingCurrentlyInProgress;
+ (char)onBoardingUIDefaultsPreferenceIsAlreadySet;
+ (char)onBoardingUIFeatureFlagEnabled;
+ (char)remindLaterActiveForPID:(int)a0;
+ (void)removeRemindLaterActiveForPID:(int)a0;
+ (void)resetPIDsListForRemindLaterActiveTracking;

- (void)dealloc;
- (void)handleOnBoardingUIButtonClick:(id)a0;
- (id)initWithCompletionHandler:(id /* block */)a0 activeClientPIDs:(id)a1;
- (void)showContinuityCaptureOnBoardingUIIfNeeded:(char)a0 deviceSupportsAllVideoEffectsFeatures:(char)a1 forceOpenDialog:(char)a2;

@end
