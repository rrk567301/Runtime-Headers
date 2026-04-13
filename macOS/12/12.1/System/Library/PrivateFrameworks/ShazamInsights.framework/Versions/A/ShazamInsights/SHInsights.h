@class NSDictionary;

@interface SHInsights : NSObject

@property (retain) NSDictionary *insightsDictionary;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (long long)maxGeoChartsGeohashLength;
- (id)targetingEndpointForStorefront:(id)a0;
- (long long)minGeoChartsGeohashLength;
- (id)geoChartsEndpointForDate:(id)a0 geoHash:(id)a1;

@end
