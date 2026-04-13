@class NSSet, NSDateInterval, NSMutableSet, PLLocationOfInterestCache;

@interface PLRoutineService : NSObject

@property (retain, nonatomic) NSDateInterval *fetchDateInterval;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers;
@property (retain, nonatomic) PLLocationOfInterestCache *visitsCache;
@property (readonly, nonatomic) NSSet *allLocationsOfInterest;
@property (readonly, nonatomic) NSSet *homeLocations;
@property (readonly, nonatomic) NSSet *workLocations;
@property (readonly, nonatomic) BOOL routineIsAvailable;

- (void).cxx_destruct;
- (void)fetchLocationsOfInterestIfNeeded;
- (id)lastLocationOfInterestVisit;
- (id)initWithFetchDateInterval:(id)a0;
- (id)locationsOfInterestOfType:(long long)a0;
- (id)locationOfInterestAtLocation:(id)a0;
- (void)invalidateLocationsOfInterest;
- (void)postProcessLocationsOfInterest;
- (BOOL)hasLocationsOfInterestInformation;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (id)locationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)a0;
- (double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)a0;
- (void)_buildLocationsOfInterestCache;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)a0 routineManager:(id)a1;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)a0;
- (void)_pinPendingVisits;

@end
