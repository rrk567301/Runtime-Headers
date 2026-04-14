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
- (id)locationOfInterestAtLocation:(id)a0;
- (BOOL)hasLocationsOfInterestInformation;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)a0;
- (id)locationsOfInterestOfType:(long long)a0;
- (id)initWithFetchDateInterval:(id)a0;
- (void)_invalidateLocationsOfInterest;
- (void).cxx_destruct;
- (void)_buildLocationsOfInterestCache;
- (void)fetchLocationsOfInterestIfNeeded;
- (id)lastLocationOfInterestVisit;
- (void)invalidateLocationsOfInterest;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (void)postProcessLocationsOfInterest;
- (id)locationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)a0 routineManager:(id)a1;

@end
