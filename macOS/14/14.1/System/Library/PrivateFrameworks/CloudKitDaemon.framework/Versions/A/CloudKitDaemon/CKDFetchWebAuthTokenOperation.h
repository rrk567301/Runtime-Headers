@class NSString;
@protocol CKFetchWebAuthTokenOperationCallbacks;

@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation

@property (copy, nonatomic) NSString *webAuthToken;
@property (copy, nonatomic) NSString *APIToken;
@property (retain, nonatomic) id<CKFetchWebAuthTokenOperationCallbacks> clientOperationCallbackProxy;

- (void).cxx_destruct;
- (void)main;
- (id)activityCreate;
- (int)operationType;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;

@end
