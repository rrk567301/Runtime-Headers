@class NSSet, EKEventStore, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, CUIKEventLoaderDelegate, OS_dispatch_group;

@interface CUIKEventLoader : NSObject {
    EKEventStore *_store;
    NSObject<OS_dispatch_queue> *_occurrencesLock;
    NSSet *_loadedOccurrences;
    NSSet *_loadedProposedTimeOccurrences;
    NSMutableSet *_occurrencesAwaitingRefresh;
    NSMutableSet *_occurrencesAwaitingDeletion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _selectedCalendarsLock;
    NSSet *_selectedCalendars;
    char _selectedCalendarsWereSet;
    unsigned int _daysOfPadding;
    unsigned int _maxDaysToCache;
    unsigned long long _componentForExpandingRequests;
    unsigned long long _componentForExpandingPadding;
    double _preferredReloadStart;
    double _preferredReloadEnd;
    NSObject<OS_dispatch_group> *_loadGroup;
    NSObject<OS_dispatch_queue> *_loadQueue;
    int _cancelSeed;
    double _loadedStart;
    double _loadedEnd;
    char _loadedOccurrencesAreStale;
    double _currentlyLoadingStart;
    double _currentlyLoadingEnd;
    double _lastRequestedStart;
    double _lastRequestedEnd;
    int _currentGeneration;
}

@property (weak, nonatomic) id<CUIKEventLoaderDelegate> delegate;
@property (nonatomic) char allowEventLocationPrediction;

- (void).cxx_destruct;
- (void)setPadding:(unsigned int)a0;
- (void)timeZoneChanged;
- (id)initWithEventStore:(id)a0;
- (void)loadIfNeeded;
- (void)_eventStoreChanged:(id)a0;
- (void)dateChanged;
- (void)_reload;
- (void)setCacheLimit:(unsigned int)a0;
- (void)_enqueueLoadForRangeStart:(double)a0 end:(double)a1;
- (void)_getLoadStart:(double *)a0 end:(double *)a1 fromLoadedStart:(double)a2 loadedEnd:(double)a3 currentlyLoadingStart:(double)a4 currentlyLoadingEnd:(double)a5;
- (void)_getStart:(double)a0 end:(double)a1 expandedToComponents:(unsigned long long)a2 withResultStart:(double *)a3 resultEnd:(double *)a4;
- (void)_getStart:(double)a0 end:(double)a1 paddedByDays:(int)a2 inTimeZone:(id)a3 resultStart:(double *)a4 resultEnd:(double *)a5;
- (void)_loadIfNeededBetweenStart:(double)a0 end:(double)a1 loadPaddingNow:(char)a2;
- (void)_pruneLoadedOccurrences;
- (void)_waitForBackgroundLoad;
- (void)_waitIfSimulatingSlowerLoads;
- (void)addOccurrenceAwaitingDeletion:(id)a0;
- (void)addOccurrenceAwaitingRefresh:(id)a0;
- (void)cancelAllLoads;
- (char)firstLoadBegan;
- (void)handleAsynchronousFetchResults:(id)a0 cancelSeed:(int)a1 start:(double)a2 end:(double)a3 filterAll:(char)a4 emptyLoad:(char)a5;
- (char)isLoadedOrLoading:(id)a0 endDate:(id)a1;
- (id)occurrencesForStartDate:(id)a0 endDate:(id)a1 preSorted:(char)a2 waitForLoad:(char)a3 isComplete:(char *)a4;
- (void)setComponentForExpandingPadding:(unsigned long long)a0;
- (void)setComponentForExpandingRequests:(unsigned long long)a0;
- (void)setPreferredReloadStartDate:(id)a0 endDate:(id)a1;
- (char)setSelectedCalendars:(id)a0;

@end
