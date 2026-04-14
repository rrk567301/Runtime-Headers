@class GEOComposedRoute, NSArray, GEOComposedRouteLeg, NSMutableDictionary;

@interface MNDepartureUpdater : NSObject {
    NSArray *_conditions;
    NSMutableDictionary *_conditionScores;
}

@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) GEOComposedRouteLeg *arrivalLeg;
@property (readonly, nonatomic) unsigned long long arrivalWaypointLegIndex;

- (void).cxx_destruct;
- (id)initWithRoute:(id)a0 arrivalLegIndex:(unsigned long long)a1;
- (BOOL)allowDepartureForLocation:(id)a0;
- (void)_initConditions;
- (id)_defaultDepartureConditions;
- (id)_arrivalRegionsDepartureConditions;

@end
