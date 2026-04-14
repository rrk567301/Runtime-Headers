@class NSString, NSMutableDictionary, MapsSuggestionsLimitedDictionary, GEOLocationShifter, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue, MapsSuggestionsRoutineConnector, MapsSuggestionsNetworkRequester;

@interface MapsSuggestionsRoutine : NSObject <MapsSuggestionsObject> {
    id<MapsSuggestionsRoutineConnector> _connector;
    id<MapsSuggestionsNetworkRequester> _networkRequester;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    MapsSuggestionsObservers *_parkedCarObservers;
    NSMutableDictionary *_loiLocationsForHome;
    NSMutableDictionary *_loiLocationsForWork;
    NSMutableDictionary *_loiLocationsForSchool;
    NSMutableDictionary *_loiVisits;
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

- (void).cxx_destruct;
- (id).cxx_construct;
- (char)fetchLocationsSinceDate:(id)a0 handler:(id /* block */)a1;
- (id)initFromResourceDepot:(id)a0;
- (BOOL)canProduceEntriesOfType:(long long)a0;
- (id)initWithRoutineConnector:(id)a0 networkRequester:(id)a1;
- (char)fetchEntriesForLocation:(id)a0 period:(id)a1 handler:(id /* block */)a2;
- (char)fetchSuggestedShortcutsForType:(long long)a0 minVisits:(unsigned long long)a1 maxAge:(double)a2 handler:(id /* block */)a3;
- (char)readMeCardWithMinVisits:(unsigned long long)a0 maxAge:(double)a1 handler:(id /* block */)a2;
- (void)updateFixedLOIs;
- (unsigned long long)countHomeLOIs;
- (unsigned long long)countWorkLOIs;
- (unsigned long long)countSchoolLOIs;
- (char)fetchLastVisitAtLocation:(id)a0 handler:(id /* block */)a1;
- (void)addParkedCarObserver:(id)a0;
- (void)removeParkedCarObserver:(id)a0;
- (void)removeParkedCarsAllowingFeature:(BOOL)a0 handler:(id /* block */)a1;
- (char)touristBitForLocation:(id)a0 handler:(id /* block */)a1;
- (void)forgetLocationOfInterest:(id)a0 handler:(id /* block */)a1;
- (char)predictedExitTimeFromLocation:(id)a0 date:(id)a1 handler:(id /* block */)a2;

@end
