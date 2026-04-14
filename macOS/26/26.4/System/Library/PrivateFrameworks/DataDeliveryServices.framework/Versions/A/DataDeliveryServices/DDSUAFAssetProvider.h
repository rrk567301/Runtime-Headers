@class UAFAssetSetManager, NSString;

@interface DDSUAFAssetProvider : NSObject <DDSUAFAssetProvider>

@property (readonly, nonatomic) UAFAssetSetManager *assetSetManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetSetManager:(id)a0;
- (void)subscribe:(id)a0 subscriptions:(id)a1 completion:(id /* block */)a2;
- (id)subscriptionsForSubscriber:(id)a0;
- (void)unsubscribe:(id)a0 subscriptionNames:(id)a1 completion:(id /* block */)a2;

@end
