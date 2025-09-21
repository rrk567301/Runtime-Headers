@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue, VGChargingNetworkAvailabilityProviderDelegate;

@interface VGChargingNetworkAvailabilityProvider : NSObject <GEOResourceManifestTileGroupObserver> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<VGChargingNetworkAvailabilityProviderDelegate> _delegate;
    NSArray *_suggestedNetworks;
    NSArray *_otherNetworks;
}

@property (readonly, nonatomic) NSArray *suggestedNetworks;
@property (readonly, nonatomic) NSArray *otherNetworks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_reloadNetworks;
- (void)countryCodeDidChange:(id)a0;

@end
