@class NSSet, NSDateInterval, NSMutableSet, PLLocationOfInterestCache;

@interface PLRoutineService : NSObject

@property (retain, nonatomic) NSDateInterval *fetchDateInterval;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers;
@property (retain, nonatomic) PLLocationOfInterestCache *visitsCache;
@property (readonly, nonatomic) NSSet *allLocationsOfInterest;
@property (readonly, nonatomic) NSSet *homeLocations;
@property (readonly, nonatomic) NSSet *workLocations;
@property (readonly, nonatomic) BOOL routineIsAvailable;

- (id)locationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (void)invalidateLocationsOfInterest;
- (id)initWithFetchDateInterval:(id)a0;
- (void)postProcessLocationsOfInterest;
- (BOOL)hasLocationsOfInterestInformation;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (void)_buildLocationsOfInterestCache;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (void)_invalidateLocationsOfInterest;
- (void).cxx_destruct;
- (id)lastLocationOfInterestVisit;
- (void)_pinPendingVisits;
- (id)locationOfInterestAtLocation:(id)a0;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)a0;
- (id)locationsOfInterestOfType:(long long)a0;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)a0 routineManager:(id)a1;
- (void)fetchLocationsOfInterestIfNeeded;

@end
