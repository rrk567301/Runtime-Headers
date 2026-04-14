@class HDFitnessMachineStateTimer, NSObject;
@protocol OS_dispatch_queue, HDFitnessMachineStateTimersDelegate;

@interface HDFitnessMachineStateTimers : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HDFitnessMachineStateTimer *_fieldDetectTimer;
    HDFitnessMachineStateTimer *_tagReadTimer;
    HDFitnessMachineStateTimer *_machineIdentityVerificationTimer;
    HDFitnessMachineStateTimer *_userAcceptanceTimer;
    HDFitnessMachineStateTimer *_waitForMachineStartTimer;
    HDFitnessMachineStateTimer *_pauseTimer;
    HDFitnessMachineStateTimer *_disconnectTimer;
    HDFitnessMachineStateTimer *_retryConnectionTimer;
    HDFitnessMachineStateTimer *_mfaTimer;
}

@property (weak, nonatomic) id<HDFitnessMachineStateTimersDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)cancelAllTimers;
- (void)beginFieldDetectTimeout;
- (void)cancelFieldDetectTimeout;
- (BOOL)isFieldDetectTimerValid;
- (void)beginTagReadTimeout;
- (void)cancelTagReadTimeout;
- (BOOL)isTagReadTimerValid;
- (void)beginMachineIdentityVerificationTimeout;
- (void)cancelMachineIdentityVerificationTimeout;
- (BOOL)isMachineIdentityVerificationTimerValid;
- (void)beginUserAcceptanceTimeout;
- (void)cancelUserAcceptanceTimeout;
- (BOOL)isUserAcceptanceTimerValid;
- (void)beginWaitForMachineStartTimeout;
- (void)cancelWaitForMachineStartTimeout;
- (BOOL)isWaitForMachineStartTimerValid;
- (void)beginPauseTimeout;
- (void)cancelPauseTimeout;
- (BOOL)isPauseTimerValid;
- (void)beginDisconnectTimeout;
- (void)cancelDisconnectTimeout;
- (BOOL)isDisconnectTimerValid;
- (void)beginRetryConnectionTimeout;
- (void)cancelRetryConnectionTimeout;
- (BOOL)isRetryConnectionTimerValid;
- (void)beginMfaTimeout;
- (void)cancelMfaTimeout;
- (BOOL)isMfaTimerValid;

@end
