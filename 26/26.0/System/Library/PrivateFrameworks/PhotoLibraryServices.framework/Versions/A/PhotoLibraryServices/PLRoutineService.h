@class NSSet, NSDateInterval, NSMutableSet, PLLocationOfInterestCache;

@interface PLRoutineService : NSObject

@property (retain, nonatomic) NSDateInterval *fetchDateInterval;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers;
@property (retain, nonatomic) PLLocationOfInterestCache *visitsCache;
@property (readonly, nonatomic) NSSet *allLocationsOfInterest;
@property (readonly, nonatomic) NSSet *homeLocations;
@property (readonly, nonatomic) NSSet *workLocations;
@property (readonly, nonatomic) BOOL routineIsAvailable;

- (void)fetchLocationsOfInterestIfNeeded;
- (id)locationOfInterestAtLocation:(id)a0;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)a0;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)a0 routineManager:(id)a1;
- (void)_invalidateLocationsOfInterest;
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
- (id)initWithFetchDateInterval:(id)a0;

@end
