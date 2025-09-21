@class NSError, NSMutableSet, NSString;
@protocol CoreDAVTaskManager, CoreDAVAccountInfoProvider, CoreDAVTaskGroupDelegate;

@interface CoreDAVTaskGroup : NSObject <CoreDAVSubmittable> {
    char _isCancelling;
    char _isTearingDown;
    char _isFinished;
}

@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;
@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) id context;
@property (weak, nonatomic) id<CoreDAVTaskManager> taskManager;
@property (weak, nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider;
@property (readonly, nonatomic) NSMutableSet *outstandingTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelTaskGroup;
- (void)bailWithError:(id)a0;
- (void)finishCoreDAVTaskGroupWithError:(id)a0 delegateCallbackBlock:(id /* block */)a1;
- (id)initWithAccountInfoProvider:(id)a0 taskManager:(id)a1;
- (void)startTaskGroup;
- (void)taskGroupWillCancelWithError:(id)a0;
- (void)finishEarlyWithError:(id)a0;
- (void)_tearDownAllTasks;
- (void)finishCoreDAVTaskGroupWithError:(id)a0;
- (void)submitWithTaskManager:(id)a0;
- (void)syncAway;

@end
