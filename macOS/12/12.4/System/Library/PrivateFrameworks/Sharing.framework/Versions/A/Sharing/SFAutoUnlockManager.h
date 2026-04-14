@class NSString, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue, SFAutoUnlockManagerDelegate;

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol>

@property (class, readonly, nonatomic) NSUserDefaults *userDefaults;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id<SFAutoUnlockManagerDelegate> delegate;
@property (readonly, nonatomic) double spinnerDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)mockedPhoneAutoUnlockNoPairedWatch;
+ (BOOL)mockedPhoneAutoUnlockWiFiOff;
+ (BOOL)autoUnlockSupported;
+ (BOOL)mockedPhoneAutoUnlockNoWatch;
+ (long long)mockedPhoneAutoUnlockSimulateErrorCode;
+ (BOOL)mockedPhoneAutoUnlockEnabled;
+ (BOOL)mockedPhoneAutoUnlockWatchLocked;
+ (BOOL)mockedPhoneAutoUnlockFaceIDDisabled;
+ (BOOL)mockedPhoneAutoUnlockWatchHasWeakPasscode;
+ (BOOL)mockedPhoneAutoUnlockWatchWristDetectionDisabled;
+ (BOOL)mockedPhoneAutoUnlockInBioLockout;
+ (BOOL)mockedPhoneAutoUnlockNoMask;
+ (BOOL)mockedPhoneAutoUnlockNeverUnlocked;
+ (BOOL)mockedPhoneAutoUnlockAWDLUnavailable;
+ (BOOL)mockedPhoneAutoUnlockWatchWiFiOff;
+ (BOOL)mockedPhoneAutoUnlockWatchAWDLUnavailable;
+ (BOOL)mockedPhoneAutoUnlockWatchOffWrist;
+ (BOOL)mockedPhoneAutoUnlockWatchSleepModeOn;
+ (BOOL)mockedPhoneAutoUnlockWatchNoMotion;
+ (float)mockedPhoneAutoUnlockSimulateLatency;
+ (BOOL)mockedPhoneAutoUnlockSimulateDevicesOutOfRange;
+ (BOOL)mockedPhoneAutoUnlockSimulatePhoneMissedFinalConfirmationToUnlock;
+ (BOOL)mockedPhoneAutoUnlockSimulateMagnetBreak;
+ (float)mockedPhoneAutoUnlockSimulateManualReLock;
+ (BOOL)mockedAutoUnlockEnabled;
+ (BOOL)autoUnlockEnabled;
+ (BOOL)autoUnlockEnabled:(unsigned int)a0;
+ (BOOL)mockedBluetoothAndWiFiEnabled;
+ (BOOL)bluetoothAndWiFiEnabled;
+ (void)mockedEnableBluetoothAndWiFi;
+ (void)enableBluetoothAndWiFi;
+ (BOOL)mockedPhoneAutoUnlockMaskUnlikely;

- (id)init;
- (void).cxx_destruct;
- (void)keyDeviceLocked:(id)a0;
- (void)enabledDevice:(id)a0;
- (void)failedToEnableDevice:(id)a0 error:(id)a1;
- (void)beganAttemptWithDevice:(id)a0;
- (void)completedUnlockWithDevice:(id)a0;
- (void)failedUnlockWithError:(id)a0;
- (void)repairCloudPairing;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(id /* block */)a0;
- (void)cancelEnablingAutoUnlockForDevice:(id)a0;
- (void)disableAutoUnlockForDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)prewarmAutoUnlock;
- (void)donateDeviceUnlockedWithMask:(BOOL)a0;
- (void)completeAutoUnlockWithNotification:(BOOL)a0;
- (void)cancelAutoUnlock;
- (void)requestRelock;
- (void)autoUnlockStateWithCompletionHandler:(id /* block */)a0;
- (void)authPromptInfoWithCompletionHandler:(id /* block */)a0;
- (void)mockedEligibleAutoUnlockDevicesWithCompletionHandler:(id /* block */)a0;
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)a0 device:(id)a1;
- (void)mockedEnableAutoUnlockWithDevice:(id)a0;
- (void)mockedDisableAutoUnlockForDevice:(id /* block */)a0;
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)a0;
- (void)deviceRequestedRelock:(id)a0;
- (void)mockedAttemptAutoUnlock;
- (void)mockedCancelUnlock;
- (void)enableAutoUnlockWithDevice:(id)a0 passcode:(id)a1;
- (void)declinedToEnablePhoneAutoUnlock;
- (void)clearPhoneAutoUnlockBehaviorChangeNotification;
- (void)attemptAutoUnlock;
- (void)attemptAutoUnlockWithoutNotifyingWatch;
- (void)attemptAutoUnlockForSiri;

@end
