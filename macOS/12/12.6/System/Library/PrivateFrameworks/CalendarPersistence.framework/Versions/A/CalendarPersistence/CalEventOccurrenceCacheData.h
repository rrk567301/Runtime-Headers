@class NSString, CalDateRange, NSMutableSet, NSMutableOrderedSet, NSMutableDictionary, CalDefaultDictionary;

@interface CalEventOccurrenceCacheData : NSObject {
    NSMutableDictionary *_occurrenceForOccurrenceIDs;
    CalDefaultDictionary *_occurrencesForDates;
    CalDefaultDictionary *_datesForManagedObjectIDs;
    CalDefaultDictionary *_occurrencesForManagedObjectIDs;
    NSMutableDictionary *_detachedObjectIDToMasterObjectID;
}

@property (retain, nonatomic) CalDateRange *range;
@property (retain, nonatomic) NSString *timeZoneString;
@property (retain, nonatomic) NSMutableSet *calendarObjectIDs;
@property (retain, nonatomic) NSMutableOrderedSet *binnedDates;

- (id)description;
- (unsigned long long)count;
- (void).cxx_destruct;
- (unsigned long long)_insertIndexForDate:(id)a0;
- (id)allOccurrences;
- (id)occurrencesInRange:(id)a0 withCalendarIDs:(id)a1;
- (id)occurrenceForOccurrenceID:(id)a0;
- (id)occurrenceByOcurrenceID;
- (id)occurrencesForDateBin:(id)a0;
- (void)pruneOccurrencesOutsideNewRange:(id)a0;
- (id)initWithTimeZoneString:(id)a0 range:(id)a1 calendarObjectIDs:(id)a2;
- (void)addOccurrences:(id)a0;
- (void)rebinAllWithTimeZoneString:(id)a0;
- (id)occurrencesForManagedObjectID:(id)a0;
- (void)removeOccurrencesWithManagedObjectIDs:(id)a0;
- (void)unionNewCacheData:(id)a0;
- (BOOL)_masterAndMainObjectIDsDifferForOccurrence:(id)a0;
- (void)emptyCacheData;
- (void)_emptyBins;
- (unsigned long long)_addDateToBinnedDates:(id)a0 nextIndex:(unsigned long long)a1;
- (void)_updateOccurrencesDictionariesWithOccurrence:(id)a0;
- (void)_addDateToBinnedDates:(id)a0;
- (void)_binOccurrence:(id)a0;
- (BOOL)_validateIsCompletelyEmpty;

@end
