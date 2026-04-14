@class NSMutableArray;
@protocol CKDOperationCallbackProxy, CKLeaveSharesOperationCallbacks;

@interface CKDLeaveSharesOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *shareIDsToLeave;
@property (retain, nonatomic) id<CKLeaveSharesOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ leaveCompletionBlock;

+ (id)nameForState:(unsigned long long)a0;

- (int)operationType;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (void)main;
- (BOOL)makeStateTransition;
- (void).cxx_destruct;
- (void)_handleShareIDLeft:(id)a0 responseCode:(id)a1;
- (BOOL)_leaveShares;
- (void)_performCallbackForRecordID:(id)a0 error:(id)a1;

@end
