@class NSManagedObjectContext, RTPersistenceManager, RTLocationShifter, NSString, RTEventManager, NSDictionary, RTEventLocationIdentifier, RTDefaultsManager, RTLearnedLocationManager, RTInvocationDispatcher, RTMetricManager;

@interface RTEventModelProvider : RTService <RTPurgable> {
    RTEventLocationIdentifier *_reusableLookupIdentifier;
}

@property (nonatomic) BOOL locationsOfInterestsAvailable;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTEventManager *eventManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) RTPersistenceManager *persistenceManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (retain, nonatomic) RTLocationShifter *locationShifter;
@property (nonatomic) double highProbabilityItemMinProbability;
@property (nonatomic) double relativeHighProbabilityItemMinDifference;
@property (nonatomic) int highProbabilityItemMinNumOfEvents;
@property (retain, nonatomic) NSDictionary *locationOfInterestHistograms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)periodicPurgePolicy;

- (id)init;
- (void).cxx_destruct;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)onLearnedLocationManagerNotification:(id)a0;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)onDailyMetricNotification:(id)a0;
- (id)initWithDefaultsManager:(id)a0 eventManager:(id)a1 learnedLocationManager:(id)a2 managedObjectContext:(id)a3 metricManager:(id)a4 persistenceManager:(id)a5;
- (void)_updateRegisteredDefaults:(id /* block */)a0;
- (void)updateValueForKey:(id)a0 expectedClass:(Class)a1 handler:(id /* block */)a2;
- (double)getOverlapTimeForIntervalStart1:(id)a0 intervalEnd1:(id)a1 intervalStart2:(id)a2 intervalEnd2:(id)a3;
- (id)getLOIHistogramForEvents:(id)a0 andLocationsOfInterest:(id)a1;
- (void)fetchLOIHistogramForEventLocation:(id)a0 withHandler:(id /* block */)a1;
- (void)_fetchLOIHistogramForEventLocation:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchAllLOIHistogramsWithHandler:(id /* block */)a0;
- (id)getObjectWithName:(id)a0 source:(unsigned long long)a1 calendarIdentifier:(id)a2 fromDictionary:(id)a3;
- (void)addEvent:(id)a0 toIdentifierDict:(id)a1 useCalendarIdentifier:(BOOL)a2;
- (BOOL)highProbabilityHistogramItem:(id)a0;
- (BOOL)relativeHighProbabilityHistogramItem:(id)a0 toItem:(id)a1;
- (id)getAllLOIHistogramsForEvents:(id)a0 andLocationsOfInterest:(id)a1;
- (id)_fetchCalendarEvents;
- (void)_buildLocationOfInterestHistogramWithHandler:(id /* block */)a0;
- (void)refreshAllLOIHistogramsWithHandler:(id /* block */)a0;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchLocationsOfInterestAssociatedToTitle:(id)a0 location:(id)a1 calendarIdentifier:(id)a2 withHandler:(id /* block */)a3;
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)a0 location:(id)a1 calendarIdentifier:(id)a2 withHandler:(id /* block */)a3;
- (id)_predictedLocationsOfInterestAssociatedToTitle:(id)a0 location:(id)a1 calendarIdentifier:(id)a2;
- (void)onManagedObjectContextCreated:(id)a0;
- (BOOL)deleteEventModel;
- (BOOL)_persistEventModel;
- (void)_restoreEventModelWithHandler:(id /* block */)a0;
- (id)_getLocationOfInterestWithIdentifier:(id)a0 fromArray:(id)a1;
- (void)_finishRestoreEventModelWithIdentifiers:(id)a0 histoItems:(id)a1 locationsOfInterest:(id)a2 handler:(id /* block */)a3;
- (void)restoreEventModelIfAppropriate;
- (void)persistEventModel;
- (void)restoreEventModelWithHandler:(id /* block */)a0;
- (void)userInteractionWithPredictedLocationOfInterest:(id)a0 interaction:(unsigned long long)a1 feedback:(id)a2 mapItem:(id)a3 handler:(id /* block */)a4;
- (BOOL)_persistUserInteractionWithPredictedLocationOfInterest:(id)a0 interaction:(unsigned long long)a1 feedback:(id)a2;
- (BOOL)_deleteUserInteractionsBeforeDate:(id)a0;
- (unsigned long long)_locationStateOfEvent:(id)a0;
- (id)_geoLocationOfEvent:(id)a0;
- (BOOL)_hasSuggestedLocationForEvent:(id)a0;
- (id)_suggestedLocationForEvent:(id)a0;
- (void)_submitMetricScoreBoardOnDate:(id)a0;
- (void)_submitMetricScoreBoardOnDate:(id)a0 submissionHandler:(id /* block */)a1;
- (void)_submitMetricScoreBoardFromStartDate:(id)a0 endDate:(id)a1 submissionHandler:(id /* block */)a2;
- (id)lastDateOfLOIVisits:(id)a0;
- (unsigned long long)lengthOfEvent:(id)a0;
- (unsigned long long)timeOfDayOfEvent:(id)a0;
- (id)_createMetricFromEventCounter:(id)a0 categories:(id)a1;
- (id)categoryForLocationState:(unsigned long long)a0 ttlTrigggerd:(BOOL)a1;
- (id)keywordForCategory:(id)a0 visited:(unsigned long long)a1;
- (id)appendFieldToCategoryString:(id)a0 field:(id)a1 value:(long long)a2;
- (unsigned long long)verifyPresenceOfUserWithEventLocation:(id)a0 deviceLOIs:(id)a1;

@end
