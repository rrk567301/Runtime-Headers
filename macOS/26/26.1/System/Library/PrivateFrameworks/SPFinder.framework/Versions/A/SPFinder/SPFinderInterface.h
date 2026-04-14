@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject

@property (retain, nonatomic) SPAdvertisementCache *advertisementCache;

- (id)beaconPayloadCache;
- (id)stateManager;
- (id)finderStateManager;
- (void).cxx_destruct;

@end
