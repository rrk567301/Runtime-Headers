@class NSSet, NSDateInterval, NSMutableSet, PLLocationOfInterestCache;

@interface PLRoutineService : NSObject

@property (retain, nonatomic) NSDateInterval *fetchDateInterval;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers;
@property (retain, nonatomic) PLLocationOfInterestCache *visitsCache;
@property (readonly, nonatomic) NSSet *allLocationsOfInterest;
@property (readonly, nonatomic) NSSet *homeLocations;
@property (readonly, nonatomic) NSSet *workLocations;
@property (readonly, nonatomic) BOOL routineIsAvailable;

- (void)_pinPendingVisits;
- (BOOL)hasLocationsOfInterestInformation;
- (void)fetchLocationsOfInterestIfNeeded;
- (void)_invalidateLocationsOfInterest;
- (void)postProcessLocationsOfInterest;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (id)initWithFetchDateInterval:(id)a0;
- (void).cxx_destruct;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)a0;
- (void)invalidateLocationsOfInterest;
- (id)locationOfInterestAtLocation:(id)a0;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)a0 routineManager:(id)a1;
- (id)locationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (void)_buildLocationsOfInterestCache;
- (id)lastLocationOfInterestVisit;
- (id)locationsOfInterestOfType:(long long)a0;

@end
