@class NSDate, NSString, NSArray, GEOLocationShifter, NSMutableDictionary, NSObject, MapsSuggestionsObservers, MapsSuggestionsLimitedDictionary;
@protocol MapsSuggestionsRoutineConnector, MapsSuggestionsNetworkRequester, OS_dispatch_queue, MapsSuggestionsShortcutMatcher;

@interface MapsSuggestionsRoutine : NSObject <MapsSuggestionsObject> {
    id<MapsSuggestionsRoutineConnector> _connector;
    id<MapsSuggestionsNetworkRequester> _networkRequester;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    MapsSuggestionsObservers *_parkedCarObservers;
    NSMutableDictionary *_loiLocationsForHome;
    NSMutableDictionary *_loiLocationsForWork;
    NSMutableDictionary *_loiLocationsForSchool;
    NSMutableDictionary *_loiVisits;
    NSMutableDictionary *_identifierToDatesMapping;
    NSDate *_cacheTimeStamp;
    NSDate *_visitQueryTimeStamp;
    double _requeryInterval;
    NSArray *_allVisitsForRatingsRequest;
    NSObject<MapsSuggestionsShortcutMatcher> *_shortcutMatcher;
    MapsSuggestionsLimitedDictionary *_mapItemCache;
    MapsSuggestionsLimitedDictionary *_mapItemCacheOrigin;
    GEOLocationShifter *_locationShifter;
    BOOL _areFrequentLocationsAvailable;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loisFromPredictedContextResult:(id)a0 usingNetworkRequester:(id)a1 currentLocation:(id)a2 predictionDuration:(double)a3 considerGymPredictions:(BOOL)a4 considerSchoolPredictions:(BOOL)a5 considerUnknownTypePredictions:(BOOL)a6 callbackQueue:(id)a7 completionHandler:(id /* block */)a8;
+ (void)_q_loisFromPredictedContextResult:(id)a0 usingNetworkRequester:(id)a1 currentLocation:(id)a2 predictionDuration:(double)a3 considerGymPredictions:(BOOL)a4 considerSchoolPredictions:(BOOL)a5 considerUnknownTypePredictions:(BOOL)a6 callbackQueue:(id)a7 completionHandler:(id /* block */)a8;
+ (id)_filteredLocationContextsFromResult:(id)a0 usingDuration:(double)a1;
+ (id)contextOptionsForPLCs;

- (char)correctLabelForCurrentPlace:(id)a0 date:(id)a1 newLabel:(id)a2 handler:(id /* block */)a3;
- (char)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(id /* block */)a0;
- (char)fetchLocationOfInterestWithIdentifier:(id)a0 withHandler:(id /* block */)a1;
- (char)correctLabelForVisitWithIdentifier:(id)a0 entryDate:(id)a1 originalLabel:(id)a2 newLabel:(id)a3 handler:(id /* block */)a4;
- (char)fetchMostRecentVisitWithinDistance:(double)a0 ofMapItem:(id)a1 handler:(id /* block */)a2;
- (char)predictedExitTimeFromLocation:(id)a0 date:(id)a1 handler:(id /* block */)a2;
- (id)initWithRoutineConnector:(id)a0 networkRequester:(id)a1 mapsSync:(id)a2;
- (char)fetchEntriesForLocation:(id)a0 period:(id)a1 handler:(id /* block */)a2;
- (void)forgetLocationOfInterest:(id)a0 handler:(id /* block */)a1;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (char)fetchSuggestedLOIsForTypes:(id)a0 minVisits:(unsigned long long)a1 maxAge:(double)a2 maxResults:(unsigned long long)a3 handler:(id /* block */)a4;
- (char)fetchLOIsSinceDate:(id)a0 handler:(id /* block */)a1;
- (char)fetchLocationsSinceDate:(id)a0 handler:(id /* block */)a1;
- (unsigned long long)countSchoolLOIs;
- (char)touristBitForLocation:(id)a0 handler:(id /* block */)a1;
- (void)addParkedCarObserver:(id)a0;
- (void)removeParkedCarsAllowingFeature:(BOOL)a0 handler:(id /* block */)a1;
- (void)removeParkedCarObserver:(id)a0;
- (char)fetchSuggestedShortcutsForType:(long long)a0 minVisits:(unsigned long long)a1 maxAge:(double)a2 handler:(id /* block */)a3;
- (char)fetchLOIsOfType:(long long)a0 handler:(id /* block */)a1;
- (unsigned long long)countHomeLOIs;
- (unsigned long long)countWorkLOIs;
- (id)initFromResourceDepot:(id)a0;
- (id).cxx_construct;
- (void)updateFixedLOIs;
- (char)readMeCardWithMinVisits:(unsigned long long)a0 maxAge:(double)a1 handler:(id /* block */)a2;
- (char)fetchLastVisitAtMapItem:(id)a0 withinDistance:(double)a1 handler:(id /* block */)a2;
- (char)fetchLastVisitAtLocation:(id)a0 handler:(id /* block */)a1;
- (char)fetchAllSuggestedLOIsExcludingTypes:(id)a0 minVisits:(unsigned long long)a1 maxAge:(double)a2 maxResults:(unsigned long long)a3 handler:(id /* block */)a4;
- (void).cxx_destruct;

@end
