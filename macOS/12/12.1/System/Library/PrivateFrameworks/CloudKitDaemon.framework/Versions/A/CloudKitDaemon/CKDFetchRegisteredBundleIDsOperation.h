@class NSArray;
@protocol CKFetchRegisteredBundleIDsOperationCallbacks;

@interface CKDFetchRegisteredBundleIDsOperation : CKDOperation

@property (copy, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) id<CKFetchRegisteredBundleIDsOperationCallbacks> clientOperationCallbackProxy;

- (void).cxx_destruct;
- (int)operationType;
- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;

@end
