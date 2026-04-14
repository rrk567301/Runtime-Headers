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
- (BOOL)hasPendingUpdates;
- (void)_didExecuteUserActionsNotification:(id)a0;
- (BOOL)_requestUserActionUpdate;
- (void)_setUserActionsModeForDelay:(double)a0;
- (void)_attemptUpdate;
- (BOOL)_hasUserUpdatesInProgress;
- (double)_retryDelayForFailingAction:(SEL)a0;
- (void)_performUpdateAfterDelay:(double)a0 retry:(BOOL)a1;
- (BOOL)hasUserActionInProgress;
- (void)beginUserAction:(id)a0;
- (void)endUserAction:(id)a0;
- (void)performUpdateNow;
- (void)performUpdateAfterDelay:(double)a0;
- (void)cancelAllUpdates;

@end
