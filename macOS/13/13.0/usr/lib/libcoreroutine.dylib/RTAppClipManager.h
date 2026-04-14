@class RTDistanceCalculator;

@interface RTAppClipManager : RTService

@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDistanceCalculator:(id)a0;
- (id)_selectClosestLocationsFromLocations:(id)a0 toLocation:(id)a1 limit:(unsigned long long)a2;
- (void)_fetchNearbyAppClipLocationsFromLocation:(id)a0 radius:(double)a1 limit:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)fetchNearbyAppClipLocationsFromLocation:(id)a0 radius:(double)a1 limit:(unsigned long long)a2 handler:(id /* block */)a3;

@end
