@class NSCache, GEOMapFeatureAccess, NSMutableDictionary;

@interface GEOPathMatcherRoadLookup : NSObject {
    GEOMapFeatureAccess *_mapFeatureAccess;
    NSCache *_roadsCache;
    NSMutableDictionary *_roadsByMuid;
    unsigned long long _cacheMissCount;
    unsigned long long _mapFeatureRoadsCount;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)findRoadWithMuid:(long long)a0 nearCoordinate:(struct { double x0; double x1; })a1;
- (id)roadForKey:(struct GEOPathMatcherRoadKey { unsigned long long x0; long long x1; double x2; double x3; })a0;
- (struct GEOPathMatcherRoadKey { unsigned long long x0; long long x1; double x2; double x3; })flippedRoad:(struct GEOPathMatcherRoadKey { unsigned long long x0; long long x1; double x2; double x3; })a0;
- (id)findRoadsNearCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1;
- (struct GEOPathMatcherRoadKey { unsigned long long x0; long long x1; double x2; double x3; })keyForRoad:(id)a0;
- (id)findOutgoingRoadsFrom:(struct GEOPathMatcherRoadKey { unsigned long long x0; long long x1; double x2; double x3; })a0;

@end
