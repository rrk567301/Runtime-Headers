@class NSMutableArray, NSMutableDictionary;
@protocol CKMapShareURLsToInstalledBundleIDsOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDMapShareURLsToInstalledBundleIDsOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *shareURLs;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasByURL;
@property (retain, nonatomic) id<CKMapShareURLsToInstalledBundleIDsOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ bundleIDsFetchedBlock;

+ (id)nameForState:(unsigned long long)a0;

- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (int)operationType;
- (void).cxx_destruct;
- (void)_fetchRegisteredBundleIDs;
- (void)_fetchShareMetadata;
- (void)_performCallbackForURL:(id)a0 withAppBundleIDs:(id)a1 daemonBundleIDs:(id)a2 error:(id)a3;

@end
