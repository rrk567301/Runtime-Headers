@class CLSLocationOfInterestCache, NSMutableSet, NSDateInterval;

@interface CLSRoutineService : NSObject

@property (retain, nonatomic) NSDateInterval *fetchDateInterval;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers;
@property (readonly, nonatomic) CLSLocationOfInterestCache *visitsCache;
@property (nonatomic) BOOL routineIsAvailable;
@property (readonly) struct CLSRoutineServiceStatisticsStruct { BOOL routineAvailable; unsigned long long numberOfLocationsOfInterest; unsigned long long numberOfVisits; unsigned long long numberOfTransitions; unsigned long long numberOfTimeMatches; unsigned long long numberOfCloseByLocationMatches; unsigned long long numberOfRemoteLocationMatches; unsigned long long numberOfMatchRequests; double pinningVisitsRatio; } statistics;

- (void).cxx_destruct;
- (id)initWithFetchDateInterval:(id)a0;
- (id)locationsOfInterestOfType:(long long)a0;
- (id)locationOfInterestAtLocation:(id)a0;
- (void)invalidateLocationsOfInterest;
- (void)_pinPendingVisits;
- (void)_buildLocationsOfInterestCache;
- (unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)a0;
- (double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)a0;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)a0 routineManager:(id)a1;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)a0;
- (void)postProcessLocationsOfInterest;
- (BOOL)hasLocationsOfInterestInformation;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (id)locationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (long long)predominantTransportationModeForDateInterval:(id)a0 confidence:(double *)a1;
- (id)placemarksOfInterestOfType:(long long)a0;
- (id)_placemarksFromLocationsOfInterest:(id)a0;
- (id)_fetchLocationOfInterestTransitionsWithinDateInterval:(id)a0 routineManager:(id)a1;
- (id)locationOfInterestVisitsInDateInterval:(id)a0;

@end
