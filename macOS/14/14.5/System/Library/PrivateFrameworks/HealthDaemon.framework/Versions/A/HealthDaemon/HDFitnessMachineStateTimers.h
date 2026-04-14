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
- (void)beginMfaTimeout;
- (BOOL)isMfaTimerValid;
- (void)beginWaitForMachineStartTimeout;
- (void)cancelAllTimers;
- (BOOL)isWaitForMachineStartTimerValid;
- (void)beginDisconnectTimeout;
- (void)beginFieldDetectTimeout;
- (void)beginMachineIdentityVerificationTimeout;
- (void)beginPauseTimeout;
- (void)beginRetryConnectionTimeout;
- (void)beginTagReadTimeout;
- (void)beginUserAcceptanceTimeout;
- (void)cancelDisconnectTimeout;
- (void)cancelFieldDetectTimeout;
- (void)cancelMachineIdentityVerificationTimeout;
- (void)cancelMfaTimeout;
- (void)cancelPauseTimeout;
- (void)cancelRetryConnectionTimeout;
- (void)cancelTagReadTimeout;
- (void)cancelUserAcceptanceTimeout;
- (void)cancelWaitForMachineStartTimeout;
- (BOOL)isDisconnectTimerValid;
- (BOOL)isFieldDetectTimerValid;
- (BOOL)isMachineIdentityVerificationTimerValid;
- (BOOL)isPauseTimerValid;
- (BOOL)isRetryConnectionTimerValid;
- (BOOL)isTagReadTimerValid;
- (BOOL)isUserAcceptanceTimerValid;

@end
