@class NSArray;
@protocol CKDOperationCallbackProxy, CKFetchRegisteredBundleIDsOperationCallbacks;

@interface CKDFetchRegisteredBundleIDsOperation : CKDOperation

@property (copy, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) id<CKFetchRegisteredBundleIDsOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;

- (id)activityCreate;
- (void)main;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void).cxx_destruct;
- (id)_unitTestBundleIDsByContainerID:(id)a0;

@end
