@class NSSet, NSMutableDictionary, NSString, DDSMAAutoAssetManager, NSObject, NSMutableSet;
@protocol DDSAssetObserving, DDSAssetProviding, OS_dispatch_queue, DDSTrialManager;

@interface DDSAssetCenter : NSObject <DDSManagingDelegate, DDSTrialManagerDelegate, DDSAssetObservingDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_delegates;
}

@property (readonly, nonatomic) id<DDSAssetProviding> provider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<DDSAssetObserving> assetObserver;
@property (readonly, nonatomic) id<DDSTrialManager> trialManager;
@property (readonly, nonatomic) DDSMAAutoAssetManager *autoAssetManager;
@property (readonly) NSSet *delegates;
@property (readonly) NSMutableDictionary *managerInterfaceByAssetType;
@property (readonly, copy) NSSet *managerInterfaces;
@property (readonly, copy) id /* block */ createXPCInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addAssertionForAssetsWithQuery:(id)a0 policy:(id)a1 assertionID:(id)a2 clientID:(id)a3;
- (void)setCompatabilityVersion:(long long)a0 forAssetType:(id)a1;
- (void)start;
- (id)allContentItemsMatchingQuery:(id)a0 error:(id *)a1;
- (void)triggerDumpWithReply:(id /* block */)a0;
- (void)fetchAssetUpdateStatusForQuery:(id)a0 callback:(id /* block */)a1;
- (void)removeAssertionWithIdentifier:(id)a0;
- (void)removeAssertionWithIdentifier:(id)a0 assetType:(id)a1;
- (id)managerInterfaceForAssetType:(id)a0;
- (void)triggerUpdate;
- (void)serverDidUpdateAssetsWithType:(id)a0;
- (void)setXPCServiceName:(id)a0 forAssetType:(id)a1;
- (void)updateAssetForQuery:(id)a0 callback:(id /* block */)a1;
- (void)setUpTrialForQuery:(id)a0;
- (void)fetchTrialAssetForQuery:(id)a0 callback:(id /* block */)a1;
- (id)assertionIDsForClientID:(id)a0 assetType:(id)a1;
- (id)assertionIDsForClientID:(id)a0;
- (id)contentItemsFromAssets:(id)a0 matchingFilter:(id)a1;
- (void)setAssetTypesForDelegates:(id)a0;
- (void)unregisterDelegate:(id)a0;
- (void).cxx_destruct;
- (id)assetsForQuery:(id)a0 error:(id *)a1;
- (id)initWithQueue:(id)a0 provider:(id)a1 trialManager:(id)a2 autoAssetManager:(id)a3 createXPCInterface:(id /* block */)a4;
- (void)registerDelegate:(id)a0;
- (void)trialDidReceiveAsset:(id)a0 forQuery:(id)a1;
- (id)init;
- (void)trialDidStopForQuery:(id)a0;

@end
