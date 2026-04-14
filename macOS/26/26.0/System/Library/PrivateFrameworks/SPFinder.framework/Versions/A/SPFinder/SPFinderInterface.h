@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject

@property (retain, nonatomic) SPAdvertisementCache *advertisementCache;

- (id)stateManager;
- (id)beaconPayloadCache;
- (void).cxx_destruct;
- (id)finderStateManager;

@end
