@class EKBackingStore, CalDefaultDictionary, NSMutableOrderedSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface EKEventOccurrenceCache : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *binnedDates;
@property (retain, nonatomic) CalDefaultDictionary *binnedEvents;
@property (retain, nonatomic) NSMutableArray *eventsWithProposedTimes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (weak, nonatomic) EKBackingStore *backingStore;

- (void).cxx_destruct;
- (id)allEvents;
- (id)_cachedRange;
- (id)initWithBackingStore:(id)a0;
- (id)copyForBackingStore:(id)a0;
- (void)rebinOccurrences:(id)a0;
- (void)unbinOccurrences:(id)a0;
- (void)clearAll;
- (void)pruneWithOccurrencesToKeep:(id)a0;
- (id)_allOccurrences;
- (void)binEvents:(id)a0;
- (id)countsForEventsInRange:(id)a0 withPredicate:(id)a1;
- (id)eventsInRange:(id)a0 withPredicate:(id)a1;
- (void)rebinAllEvents;
- (void)_binEvents:(id)a0;
- (void)_binEvent:(id)a0 timeZoneString:(id)a1;
- (void)_binDate:(id)a0;
- (id)_eventsOrCountsInRange:(id)a0 countsOnly:(BOOL)a1 withPredicate:(id)a2;
- (unsigned long long)_startIndexForRange:(id)a0;
- (void)_rebinOccurrences:(id)a0;
- (id)_nonNilEventOccurrences:(id)a0;
- (id)_groupOccurrencesByUID:(id)a0;
- (void)_rebinOccurrence:(id)a0;
- (void)_unbinOccurrences:(id)a0;
- (void)_unbinOccurrencesHelperWithOccurrenceTestBlock:(id /* block */)a0;
- (unsigned long long)_insertIndexForDate:(id)a0;
- (id)eventsInRange:(id)a0;
- (id)countsForEventsInRange:(id)a0;
- (void)unbinOccurrencesWithObjectIDs:(id)a0;
- (id)_binnedOccurrences;

@end
