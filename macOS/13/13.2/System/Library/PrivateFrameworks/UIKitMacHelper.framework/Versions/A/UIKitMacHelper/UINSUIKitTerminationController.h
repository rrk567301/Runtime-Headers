@class NSTimer;
@protocol UINSUIKitTerminationControllerDelegate;

@interface UINSUIKitTerminationController : NSObject

@property (nonatomic) BOOL _isTerminatingUIApplication;
@property (nonatomic) BOOL _backgroundTasksDidTimeOut;
@property (retain, nonatomic) NSTimer *_finalWarningShotTimer;
@property (weak, nonatomic) id<UINSUIKitTerminationControllerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long backgroundTaskCount;

- (void).cxx_destruct;
- (void)uiKitWantsToExitProcessWithStatus:(int)a0;
- (void)allBackgroundTasksDidFinish;
- (void)ensureBackgroundTaskCountReachedZeroHandlerExists;
- (void)beginAppTerminationBackgroundTask;
- (void)endAppTerminationBackgroundTask;
- (void)letBackgroundTasksCompleteWithTimeout:(double)a0;
- (void)cancelBackgroundTaskTimeoutIfNecessary;
- (void)synchronouslyExpireBackgroundTasksIfNecessary;
- (void)beginUIAppTermination;
- (void)_cancelWarningShotTimerIfNecessary;
- (void)_warningShotTimerFired;

@end
