@class CLSLocationCache, NSDateInterval, NSMutableSet, CLSLocationOfInterestCache;

@interface CLSRoutineService : NSObject {
    NSDateInterval *_fetchDateInterval;
    CLSLocationOfInterestCache *_visitsCache;
    NSMutableSet *_pendingPinningVisitIdentifiers;
    CLSLocationCache *_locationCache;
}

@property (nonatomic) BOOL routineIsAvailable;
@property (readonly) struct CLSRoutineServiceStatisticsStruct { BOOL routineAvailable; unsigned long long numberOfLocationsOfInterest; unsigned long long numberOfVisits; unsigned long long numberOfTransitions; unsigned long long numberOfTimeMatches; unsigned long long numberOfCloseByLocationMatches; unsigned long long numberOfRemoteLocationMatches; unsigned long long numberOfMatchRequests; double pinningVisitsRatio; } statistics;

- (unsigned long long)fetchFinerGranularityBusinessItemNumberForVisitIdentifier:(id)a0;
- (id)locationOfInterestAtLocation:(id)a0;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)a0;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)a0 routineManager:(id)a1;
- (id)visitsCache;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (void)invalidateLocationsOfInterest;
- (BOOL)hasLocationsOfInterestInformation;
- (void)postProcessLocationsOfInterest;
- (id)locationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (void)_buildLocationsOfInterestCache;
- (void)_pinPendingVisits;
- (id)locationsOfInterestOfType:(long long)a0;
- (id)lastLocationOfInterestVisit;
- (void).cxx_destruct;
- (unsigned long long)_fetchFinerGranularityMapItemForVisitIdentifier:(id)a0 routineManager:(id)a1;
- (unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)a0;
- (double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)a0;
- (id)_fetchLocationOfInterestTransitionsWithinDateInterval:(id)a0 routineManager:(id)a1;
- (id)_placemarksFromLocationsOfInterest:(id)a0;
- (void)cacheLocationOfInterest:(id)a0;
- (id)initWithFetchDateInterval:(id)a0 locationCache:(id)a1;
- (id)locationOfInterestVisitsInDateInterval:(id)a0;
- (id)placemarksOfInterestOfType:(long long)a0;
- (long long)predominantTransportationModeForDateInterval:(id)a0 confidence:(double *)a1;

@end
