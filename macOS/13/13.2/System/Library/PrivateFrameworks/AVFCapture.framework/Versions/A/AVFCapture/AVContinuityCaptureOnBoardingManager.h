@interface AVContinuityCaptureOnBoardingManager : NSObject {
    int _clientPID;
    id /* block */ _completionHandler;
}

+ (void)initialize;
+ (BOOL)onBoardingUIFeatureFlagEnabled;
+ (BOOL)onBoardingUIDefaultsPreferenceIsAlreadySet;
+ (id)getAVFFaceTimeBundleIdentifier;
+ (BOOL)getAppObservingSystemPreferredCameraStatusForBundlePath:(id)a0 bundleID:(id)a1;
+ (BOOL)onBoardingCurrentlyInProgress;
+ (BOOL)remindLaterActiveForPID:(int)a0;
+ (void)removeRemindLaterActiveForPID:(int)a0;
+ (void)_removeRemindLaterActiveForAllClients;

- (void)dealloc;
- (void)handleOnBoardingUIButtonClick:(id)a0;
- (id)initWithCompletionHandler:(id /* block */)a0 forClient:(int)a1;
- (void)showContinuityCaptureOnBoardingUIIfNeeded:(BOOL)a0 deviceSupportsAllVideoEffectsFeatures:(BOOL)a1 forceOpenDialog:(BOOL)a2;

@end
