@protocol CKFetchUserQuotaOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long quotaAvailable;
@property (retain, nonatomic) id<CKFetchUserQuotaOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;

- (int)operationType;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (void)main;

@end
