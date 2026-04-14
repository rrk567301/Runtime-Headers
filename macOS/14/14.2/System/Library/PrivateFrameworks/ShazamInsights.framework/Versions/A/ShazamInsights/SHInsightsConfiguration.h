@class SHBagContract;

@interface SHInsightsConfiguration : NSObject

@property (readonly) SHBagContract *bagContract;
@property (readonly) double tracksCachedDataMaxAge;
@property (readonly) BOOL tracksEnabled;
@property (readonly) double artistsCachedDataMaxAge;
@property (readonly) BOOL artistsEnabled;
@property (readonly) long long minGeoChartsGeohashLength;
@property (readonly) long long maxGeoChartsGeohashLength;

+ (id)bagContract;
+ (void)fetchSharedInstanceWithCompletion:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBagContract:(id)a0;
- (id)artistsClusterEndpoint;
- (id)geoChartsEndpointForDate:(id)a0 geoHash:(id)a1;
- (id)tokenizedURLForBagPathKey:(id)a0;
- (id)tracksClusterEndpointForStorefront:(id)a0;

@end
