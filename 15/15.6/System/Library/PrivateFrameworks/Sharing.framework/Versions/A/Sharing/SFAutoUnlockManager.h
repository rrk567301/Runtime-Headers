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

+ (char)autoUnlockEnabled;
+ (char)autoUnlockEnabled:(unsigned int)a0;
+ (char)autoUnlockSupported;
+ (char)bluetoothAndWiFiEnabled;
+ (void)enableBluetoothAndWiFi;
+ (char)mockedAutoUnlockEnabled;
+ (char)mockedBluetoothAndWiFiEnabled;
+ (void)mockedEnableBluetoothAndWiFi;
+ (char)mockedPhoneAutoUnlockAWDLUnavailable;
+ (char)mockedPhoneAutoUnlockEnabled;
+ (char)mockedPhoneAutoUnlockFaceIDDisabled;
+ (char)mockedPhoneAutoUnlockInBioLockout;
+ (char)mockedPhoneAutoUnlockMaskUnlikely;
+ (char)mockedPhoneAutoUnlockNeverUnlocked;
+ (char)mockedPhoneAutoUnlockNoMask;
+ (char)mockedPhoneAutoUnlockNoPairedWatch;
+ (char)mockedPhoneAutoUnlockNoWatch;
+ (char)mockedPhoneAutoUnlockSimulateDevicesOutOfRange;
+ (long long)mockedPhoneAutoUnlockSimulateErrorCode;
+ (float)mockedPhoneAutoUnlockSimulateLatency;
+ (char)mockedPhoneAutoUnlockSimulateMagnetBreak;
+ (float)mockedPhoneAutoUnlockSimulateManualReLock;
+ (char)mockedPhoneAutoUnlockSimulatePhoneMissedFinalConfirmationToUnlock;
+ (char)mockedPhoneAutoUnlockWatchAWDLUnavailable;
+ (char)mockedPhoneAutoUnlockWatchHasWeakPasscode;
+ (char)mockedPhoneAutoUnlockWatchLocked;
+ (char)mockedPhoneAutoUnlockWatchNoMotion;
+ (char)mockedPhoneAutoUnlockWatchOffWrist;
+ (char)mockedPhoneAutoUnlockWatchSleepModeOn;
+ (char)mockedPhoneAutoUnlockWatchWiFiOff;
+ (char)mockedPhoneAutoUnlockWatchWristDetectionDisabled;
+ (char)mockedPhoneAutoUnlockWiFiOff;

- (id)init;
- (void).cxx_destruct;
- (void)declinedToEnablePhoneAutoUnlock;
- (void)attemptAutoUnlock;
- (void)attemptAutoUnlockForSiri;
- (void)attemptAutoUnlockWithoutNotifyingWatch;
- (void)authPromptInfoWithCompletionHandler:(id /* block */)a0;
- (void)autoUnlockStateWithCompletionHandler:(id /* block */)a0;
- (void)beganAttemptWithDevice:(id)a0;
- (void)cancelAutoUnlock;
- (void)cancelEnablingAutoUnlockForDevice:(id)a0;
- (void)clearPhoneAutoUnlockBehaviorChangeNotification;
- (void)completeAutoUnlockWithNotification:(char)a0;
- (void)completedUnlockWithDevice:(id)a0;
- (void)deviceRequestedRelock:(id)a0;
- (void)disableAutoUnlockForDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)donateDeviceUnlockedWithMask:(char)a0;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(id /* block */)a0;
- (void)enableAutoUnlockWithDevice:(id)a0 passcode:(id)a1;
- (void)enabledDevice:(id)a0;
- (void)failedToEnableDevice:(id)a0 error:(id)a1;
- (void)failedUnlockWithError:(id)a0;
- (void)keyDeviceLocked:(id)a0;
- (void)mockedAttemptAutoUnlock;
- (void)mockedCancelUnlock;
- (void)mockedDisableAutoUnlockForDevice:(id /* block */)a0;
- (void)mockedEligibleAutoUnlockDevicesWithCompletionHandler:(id /* block */)a0;
- (void)mockedEnableAutoUnlockWithDevice:(id)a0;
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)a0;
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)a0 device:(id)a1;
- (void)prewarmAutoUnlock;
- (void)repairCloudPairing;
- (void)requestRelock;

@end
