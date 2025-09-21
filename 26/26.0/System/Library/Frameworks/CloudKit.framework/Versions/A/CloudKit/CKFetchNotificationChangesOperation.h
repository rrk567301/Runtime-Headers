@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperation : CKOperation

@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (readonly, nonatomic) BOOL moreComing;
@property (copy, nonatomic) id /* block */ notificationChangedBlock;
@property (copy, nonatomic) id /* block */ fetchNotificationChangesCompletionBlock;

- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)initWithPreviousServerChangeToken:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;

@end
