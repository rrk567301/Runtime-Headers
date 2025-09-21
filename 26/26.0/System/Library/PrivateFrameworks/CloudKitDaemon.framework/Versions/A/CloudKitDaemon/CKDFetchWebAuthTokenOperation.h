@class NSString;
@protocol CKFetchWebAuthTokenOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation

@property (copy, nonatomic) NSString *webAuthToken;
@property (copy, nonatomic) NSString *APIToken;
@property (retain, nonatomic) id<CKFetchWebAuthTokenOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;

- (id)activityCreate;
- (void)main;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void).cxx_destruct;

@end
