@class NSDictionary, NSArray, SHAffinityGroup;

@interface SHRegionAffinityGroup : NSObject

@property (readonly) NSDictionary *geohashKeyedRegions;
@property (readonly) NSArray *regions;
@property (readonly) SHAffinityGroup *affinityGroup;

- (void).cxx_destruct;
- (id)regionsForGeohash:(id)a0;
- (id)initWithRegions:(id)a0 affinityGroup:(id)a1;

@end
