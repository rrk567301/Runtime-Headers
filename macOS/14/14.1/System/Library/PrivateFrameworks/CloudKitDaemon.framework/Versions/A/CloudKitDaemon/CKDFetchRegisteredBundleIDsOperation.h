@class NSArray;
@protocol CKFetchRegisteredBundleIDsOperationCallbacks;

@interface CKDFetchRegisteredBundleIDsOperation : CKDOperation

@property (copy, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) id<CKFetchRegisteredBundleIDsOperationCallbacks> clientOperationCallbackProxy;

- (void).cxx_destruct;
- (void)main;
- (id)activityCreate;
- (int)operationType;
- (id)_unitTestBundleIDsByContainerID:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;

@end
