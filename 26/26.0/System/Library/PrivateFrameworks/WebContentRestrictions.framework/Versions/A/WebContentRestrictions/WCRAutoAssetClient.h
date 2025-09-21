@class MAAutoAssetSelector, NSObject;
@protocol OS_dispatch_queue;

@interface WCRAutoAssetClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (copy, nonatomic) id /* block */ assetDidChangeHandler;
@property (retain) MAAutoAssetSelector *currentAssetSelector;

- (void).cxx_destruct;
- (void)_handleAssetChangedNotification;
- (void)_createInterestInAsset;
- (void)_endLocalAssetLocks;
- (void)_lockLocalAsset:(id /* block */)a0;
- (void)_registerForNotificationsForAssetType:(id)a0 andAssetSpecifier:(id)a1;
- (void)createInterestInAsset;
- (void)registerForAssetChangedNotificationsWithBlock:(id /* block */)a0;
- (void)startUsingLocalAsset:(id /* block */)a0;
- (void)stopUsingLocalAsset;

@end
