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

+ (BOOL)mockedPhoneAutoUnlockSimulateDevicesOutOfRange;
+ (float)mockedPhoneAutoUnlockSimulateManualReLock;
+ (BOOL)mockedPhoneAutoUnlockNoMask;
+ (BOOL)autoUnlockEnabled;
+ (BOOL)mockedPhoneAutoUnlockWatchOffWrist;
+ (BOOL)mockedPhoneAutoUnlockWatchWristDetectionDisabled;
+ (BOOL)mockedPhoneAutoUnlockFaceIDDisabled;
+ (void)enableBluetoothAndWiFi;
+ (BOOL)mockedBluetoothAndWiFiEnabled;
+ (BOOL)mockedPhoneAutoUnlockEnabled;
+ (BOOL)mockedPhoneAutoUnlockInBioLockout;
+ (BOOL)mockedPhoneAutoUnlockWatchLocked;
+ (void)mockedEnableBluetoothAndWiFi;
+ (long long)mockedPhoneAutoUnlockSimulateErrorCode;
+ (BOOL)bluetoothAndWiFiEnabled;
+ (BOOL)mockedAutoUnlockEnabled;
+ (BOOL)mockedPhoneAutoUnlockNoWatch;
+ (BOOL)mockedPhoneAutoUnlockMaskUnlikely;
+ (BOOL)mockedPhoneAutoUnlockNeverUnlocked;
+ (BOOL)mockedPhoneAutoUnlockWatchWiFiOff;
+ (BOOL)mockedPhoneAutoUnlockWatchNoMotion;
+ (BOOL)mockedPhoneAutoUnlockWatchAWDLUnavailable;
+ (BOOL)mockedPhoneAutoUnlockWatchHasWeakPasscode;
+ (BOOL)mockedPhoneAutoUnlockAWDLUnavailable;
+ (BOOL)mockedPhoneAutoUnlockSimulateMagnetBreak;
+ (BOOL)mockedPhoneAutoUnlockWatchSleepModeOn;
+ (BOOL)autoUnlockEnabled:(unsigned int)a0;
+ (BOOL)mockedPhoneAutoUnlockNoPairedWatch;
+ (BOOL)mockedPhoneAutoUnlockWiFiOff;
+ (float)mockedPhoneAutoUnlockSimulateLatency;
+ (BOOL)mockedPhoneAutoUnlockSimulatePhoneMissedFinalConfirmationToUnlock;
+ (BOOL)autoUnlockSupported;

- (void)failedUnlockWithError:(id)a0;
- (void).cxx_destruct;
- (void)completedUnlockWithDevice:(id)a0;
- (id)init;
- (void)beganAttemptWithDevice:(id)a0;
- (void)keyDeviceLocked:(id)a0;
- (void)failedToEnableDevice:(id)a0 error:(id)a1;
- (void)enabledDevice:(id)a0;
- (void)declinedToEnablePhoneAutoUnlock;
- (void)attemptAutoUnlock;
- (void)attemptAutoUnlockForSiri;
- (void)attemptAutoUnlockWithoutNotifyingWatch;
- (void)authPromptInfoWithCompletionHandler:(id /* block */)a0;
- (void)autoUnlockStateWithCompletionHandler:(id /* block */)a0;
- (void)cancelAutoUnlock;
- (void)cancelEnablingAutoUnlockForDevice:(id)a0;
- (void)clearPhoneAutoUnlockBehaviorChangeNotification;
- (void)completeAutoUnlockWithNotification:(BOOL)a0;
- (void)deviceRequestedRelock:(id)a0;
- (void)disableAutoUnlockForDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)donateDeviceUnlockedWithMask:(BOOL)a0;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(id /* block */)a0;
- (void)enableAutoUnlockWithDevice:(id)a0 passcode:(id)a1;
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
