@class NSSet, NSString, NSMutableSet, NSObject;
@protocol DDSManaging, DDSAssetObserving, DDSAssetProviding, OS_dispatch_queue, DDSTrialManager;

@interface DDSAssetCenter : NSObject <DDSManagingDelegate, DDSTrialManagerDelegate, DDSAssetObservingDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_delegates;
}

@property (readonly, nonatomic) id<DDSAssetProviding> provider;
@property (readonly, nonatomic) id<DDSManaging> managerInterface;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<DDSAssetObserving> assetObserver;
@property (readonly, nonatomic) id<DDSTrialManager> trialManager;
@property (readonly) NSSet *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)assetsForQuery:(id)a0 error:(id *)a1;
- (void)addAssertionForAssetsWithQuery:(id)a0 policy:(id)a1 assertionID:(id)a2 clientID:(id)a3;
- (void)removeAssertionWithIdentifier:(id)a0;
- (void)triggerUpdate;
- (void)registerDelegate:(id)a0;
- (id)allContentItemsMatchingQuery:(id)a0 error:(id *)a1;
- (id)assertionIDsForClientID:(id)a0;
- (id)contentItemsFromAssets:(id)a0 matchingFilter:(id)a1;
- (void)fetchTrialAssetForQuery:(id)a0 callback:(id /* block */)a1;
- (id)initWithQueue:(id)a0 provider:(id)a1 managerInterface:(id)a2 trialManager:(id)a3;
- (void)serverDidUpdateAssetsWithType:(id)a0;
- (void)setUpTrialForQuery:(id)a0;
- (void)trialDidReceiveAsset:(id)a0 forQuery:(id)a1;
- (void)trialDidStopForQuery:(id)a0;
- (void)triggerDump;
- (void)unregisterDelegate:(id)a0;

@end
