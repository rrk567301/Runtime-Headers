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

+ (BOOL)autoUnlockEnabled;
+ (void)enableBluetoothAndWiFi;
+ (BOOL)mockedPhoneAutoUnlockNeverUnlocked;
+ (BOOL)mockedPhoneAutoUnlockSimulateDevicesOutOfRange;
+ (float)mockedPhoneAutoUnlockSimulateLatency;
+ (BOOL)bluetoothAndWiFiEnabled;
+ (BOOL)mockedPhoneAutoUnlockEnabled;
+ (BOOL)mockedPhoneAutoUnlockWatchAWDLUnavailable;
+ (BOOL)mockedPhoneAutoUnlockNoPairedWatch;
+ (BOOL)mockedPhoneAutoUnlockMaskUnlikely;
+ (BOOL)mockedPhoneAutoUnlockNoWatch;
+ (BOOL)mockedPhoneAutoUnlockWatchWristDetectionDisabled;
+ (BOOL)autoUnlockSupported;
+ (void)mockedEnableBluetoothAndWiFi;
+ (BOOL)mockedPhoneAutoUnlockWiFiOff;
+ (BOOL)mockedPhoneAutoUnlockAWDLUnavailable;
+ (BOOL)mockedPhoneAutoUnlockInBioLockout;
+ (BOOL)mockedPhoneAutoUnlockWatchOffWrist;
+ (BOOL)mockedPhoneAutoUnlockFaceIDDisabled;
+ (float)mockedPhoneAutoUnlockSimulateManualReLock;
+ (BOOL)mockedPhoneAutoUnlockNoMask;
+ (BOOL)mockedPhoneAutoUnlockWatchSleepModeOn;
+ (BOOL)mockedPhoneAutoUnlockWatchHasWeakPasscode;
+ (BOOL)mockedBluetoothAndWiFiEnabled;
+ (BOOL)mockedPhoneAutoUnlockSimulatePhoneMissedFinalConfirmationToUnlock;
+ (BOOL)mockedAutoUnlockEnabled;
+ (BOOL)mockedPhoneAutoUnlockWatchWiFiOff;
+ (BOOL)mockedPhoneAutoUnlockSimulateMagnetBreak;
+ (long long)mockedPhoneAutoUnlockSimulateErrorCode;
+ (BOOL)mockedPhoneAutoUnlockWatchLocked;
+ (BOOL)mockedPhoneAutoUnlockWatchNoMotion;
+ (BOOL)autoUnlockEnabled:(unsigned int)a0;

- (void)failedToEnableDevice:(id)a0 error:(id)a1;
- (void)beganAttemptWithDevice:(id)a0;
- (id)init;
- (void)failedUnlockWithError:(id)a0;
- (void).cxx_destruct;
- (void)enabledDevice:(id)a0;
- (void)completedUnlockWithDevice:(id)a0;
- (void)keyDeviceLocked:(id)a0;
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
