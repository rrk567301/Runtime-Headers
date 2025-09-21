@class NSTimeZone, NSSet, NSMutableDictionary, NSMutableSet, CUIKOccurrenceSet;
@protocol EKPredicateMonitor, CUIKEventLoaderDelegate;

@interface CUIKEventLoader : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _occurrencesLock;
    CUIKOccurrenceSet *_loadedOccurrences;
    NSMutableSet *_occurrencesAwaitingRefresh;
    NSMutableSet *_newOccurrencesAwaitingRefresh;
    NSMutableSet *_occurrencesAwaitingDeletion;
    NSSet *_selectedCalendars;
    unsigned long long _calendarGeneration;
    unsigned long long _loadingCalendarGeneration;
    unsigned int _daysOfPadding;
    unsigned int _maxDaysToCache;
    unsigned long long _componentForExpandingPadding;
    double _preferredReloadStart;
    double _preferredReloadEnd;
    double _lastRequestedStart;
    double _lastRequestedEnd;
    double _loadedStart;
    double _loadedEnd;
    double _loadingStart;
    double _loadingEnd;
    id<EKPredicateMonitor> _predicateMonitor;
    unsigned long long _loadedGeneration;
    unsigned long long _loadingGeneration;
    unsigned long long _predicateMonitorGeneration;
    NSMutableDictionary *_waitersByGeneration;
    unsigned long long _notifiedGeneration;
    int _resultsReceived;
    double _paddingLoadDelay;
    NSTimeZone *_timeZone;
}

@property (weak, nonatomic) id<CUIKEventLoaderDelegate> delegate;
@property (nonatomic) BOOL allowEventLocationPrediction;

- (void)setPadding:(unsigned int)a0;
- (void)setTimeZone:(id)a0;
- (void)reload;
- (id)init;
- (void)_reload;
- (void).cxx_destruct;
- (void)loadIfNeeded;
- (void)dateChanged;
- (void)_loadIfNeeded;
- (void)setCacheLimit:(unsigned int)a0;
- (void)_getStart:(double)a0 end:(double)a1 expandedToComponents:(unsigned long long)a2 withResultStart:(double *)a3 resultEnd:(double *)a4;
- (void)_getStart:(double)a0 end:(double)a1 paddedByDays:(int)a2 inTimeZone:(id)a3 resultStart:(double *)a4 resultEnd:(double *)a5;
- (id)_groupForGeneration:(unsigned long long)a0;
- (unsigned long long)_loadIfNeededBetweenStart:(double)a0 end:(double)a1 loadPaddingNow:(BOOL)a2;
- (unsigned long long)_setMonitoredRange:(double)a0 end:(double)a1;
- (void)_updateLoadedGeneration:(unsigned long long)a0 start:(double)a1 end:(double)a2;
- (void)addOccurrenceAwaitingDeletion:(id)a0;
- (void)addOccurrenceAwaitingRefresh:(id)a0;
- (BOOL)firstLoadBegan;
- (BOOL)isLoadedOrLoading:(id)a0 endDate:(id)a1;
- (id)occurrencesForStartDate:(id)a0 endDate:(id)a1 preSorted:(BOOL)a2 waitForLoad:(BOOL)a3 isComplete:(BOOL *)a4;
- (void)receivedNewAndUpdatedEvents:(id)a0 removedEvents:(id)a1 error:(id)a2 wasFirstResult:(BOOL)a3 forGeneration:(unsigned long long)a4 start:(double)a5 end:(double)a6 disabled:(BOOL)a7;
- (void)removeOccurrenceAwaitingRefresh:(id)a0;
- (void)setComponentForExpandingPadding:(unsigned long long)a0;
- (void)setPaddingLoadDelay:(double)a0;
- (void)setPreferredReloadStartDate:(id)a0 endDate:(id)a1;
- (BOOL)setSelectedCalendars:(id)a0;
- (void)waitForBackgroundLoad:(unsigned long long)a0;

@end
