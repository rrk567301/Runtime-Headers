@class NSCountedSet;
@protocol MOLiveUpdateControllerDelegate;

@interface MOLiveUpdateController : NSObject {
    NSCountedSet *_inFlightUserActions;
    struct _MOLiveUpdatePendingSession { double delay; double time; unsigned long long repeat; } _pendingSession;
    struct _MOLiveUpdatePendingSession { double delay; double time; unsigned long long repeat; } _pendingUserActions;
    unsigned long long _currentUserActionsRepeat;
    struct { unsigned char delegateShouldPerformAdditionalUpdateWithDelay : 1; unsigned char delegateDidNotPerformAnyActions : 1; unsigned char delegateShouldReplyToUserActionsForLiveUpdateController : 1; unsigned char delegateProvidesRetryDelay : 1; } _flags;
}

@property (readonly, weak) id<MOLiveUpdateControllerDelegate> delegate;

+ (void)notifyUserActionsInProgress;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (char)hasPendingUpdates;
- (void)_performUpdateAfterDelay:(double)a0 retry:(char)a1;
- (void)_attemptUpdate;
- (void)_didExecuteUserActionsNotification:(id)a0;
- (char)_hasUserUpdatesInProgress;
- (char)_requestUserActionUpdate;
- (double)_retryDelayForFailingAction:(SEL)a0;
- (void)_setUserActionsModeForDelay:(double)a0;
- (void)beginUserAction:(id)a0;
- (void)cancelAllUpdates;
- (void)endUserAction:(id)a0;
- (char)hasUserActionInProgress;
- (void)performUpdateAfterDelay:(double)a0;
- (void)performUpdateNow;

@end
