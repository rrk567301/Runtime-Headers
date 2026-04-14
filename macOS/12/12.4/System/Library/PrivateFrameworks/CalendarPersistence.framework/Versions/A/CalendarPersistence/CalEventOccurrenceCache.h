@class CalDateRange, NSSet, CalEventOccurrenceCacheData, NSManagedObjectContext;

@interface CalEventOccurrenceCache : NSObject {
    long long _directionOfRangeChange;
    CalEventOccurrenceCacheData *_cacheData;
}

@property (retain) NSManagedObjectContext *managedObjectContext;
@property (copy) CalDateRange *range;
@property (copy) CalDateRange *bufferRange;
@property BOOL foregroundResetCompleted;
@property BOOL isMainWindowCache;
@property unsigned long long generationCounter;
@property BOOL prefetchAttendees;
@property (retain) NSSet *calendarIDs;
@property BOOL bestGuessCalendarIDs;
@property (readonly) double duration;
@property (readonly) BOOL everFilledCache;

+ (void)initialize;
+ (unsigned long long)weeksNotPrunedBehindDirectionOfRangeChange;
+ (id)calendarsFromIDs:(id)a0 withContext:(id)a1;
+ (id)occurrencesBetweenStartDate:(id)a0 endDate:(id)a1 onCalendars:(id)a2 prefetchAttendees:(BOOL)a3 inManagedObjectContext:(id)a4 drainPool:(BOOL)a5;
+ (id)fetchForEventsBetweenStartDate:(id)a0 endDate:(id)a1 usingTimeZone:(id)a2 localUIDs:(id)a3 excludingLocalUIDs:(id)a4 inCalendars:(id)a5 managedObjectContext:(id)a6;
+ (id)eventsBetweenStartDate:(id)a0 endDate:(id)a1 usingTimeZone:(id)a2 localUIDs:(id)a3 excludingLocalUIDs:(id)a4 inCalendars:(id)a5 prefetchAttendees:(BOOL)a6 managedObjectContext:(id)a7;
+ (id)eventsBetweenStartDate:(id)a0 endDate:(id)a1 localUIDs:(id)a2 excludingLocalUIDs:(id)a3 inCalendars:(id)a4 prefetchAttendees:(BOOL)a5 managedObjectContext:(id)a6;
+ (id)occurrencesBetweenStartDate:(id)a0 endDate:(id)a1 onCalendars:(id)a2 prefetchAttendees:(BOOL)a3 inManagedObjectContext:(id)a4;
+ (id)occurrencesBetweenStartDate:(id)a0 endDate:(id)a1 onCalendars:(id)a2 prefetchAttendees:(BOOL)a3 inManagedObjectContext:(id)a4 sortWithSelector:(SEL)a5;
+ (void)setWeeksNotPrunedBehindDirectionOfRangeChange:(unsigned long long)a0;
+ (void)setLowWaterWeeksBuffer:(unsigned long long)a0;
+ (void)setHighWaterWeeksBuffer:(unsigned long long)a0;

- (id)description;
- (unsigned long long)count;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)reset;
- (void)managedObjectContextDidSave:(id)a0;
- (BOOL)setStartDate:(id)a0 endDate:(id)a1;
- (void)managedObjectContextDidChange:(id)a0;
- (void)managedObjectContextDidMergeChanges:(id)a0;
- (void)managedObjectContextDidAddChildContext:(id)a0;
- (void)managedObjectContextDidRemoveChildContext:(id)a0;
- (void)calendarStoreReset:(id)a0;
- (id)initWithRange:(id)a0 calendars:(id)a1 inManagedObjectContext:(id)a2;
- (id)occurrencesInRange:(id)a0 withCalendarIDs:(id)a1;
- (id)occurrenceForOccurrenceID:(id)a0;
- (unsigned long long)lowWaterWeeksBuffer;
- (unsigned long long)highWaterWeeksBuffer;
- (id)fullRange;
- (id)_lowWaterBufferForNewRange:(id)a0;
- (void)requestRange:(id)a0 fromReset:(BOOL)a1;
- (id)_highWaterBufferForNewRange:(id)a0;
- (BOOL)setStartDate:(id)a0 endDate:(id)a1 calendarIDs:(id)a2;
- (void)logForStartDate:(id)a0 message:(id)a1;
- (id)cacheSerialQueue;
- (BOOL)_stillWantsRange:(id)a0;
- (id)_guessMainWindowCalendarsInContext:(id)a0;
- (void)_notifySimpleRangeChange:(id)a0;
- (id)_setOfIdentifiersToReplaceForIdentifiers:(id)a0;
- (void)_replaceOccurrencesForLocalUIDs:(id)a0 inManagedObjectContext:(id)a1;
- (id)initWithStartDate:(id)a0 duration:(double)a1 calendars:(id)a2 inManagedObjectContext:(id)a3 isMainWindowCache:(BOOL)a4;
- (id)occurrencesForOccurrenceIDs:(id)a0;
- (id)occurrencesForDate:(id)a0;
- (id)datesWithOccurrences;
- (void)rebinForTimeZoneString:(id)a0;
- (void)resetWithBestGuessForMainWindowCalendars;

@end
