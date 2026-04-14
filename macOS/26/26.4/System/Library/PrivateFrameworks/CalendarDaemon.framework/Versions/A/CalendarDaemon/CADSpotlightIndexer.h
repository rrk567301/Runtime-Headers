@class CADSpotlightDefaults, CalCancellationTokenSource, CADPooledDatabaseConfiguration, NSMutableDictionary, NSDate, NSObject, CalAccumulatingQueue;
@protocol CalSpotlightEntityAnnotator, CADDatabaseConnectionProvider, OS_dispatch_queue, CADSpotlightIndexProvider;

@interface CADSpotlightIndexer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _donationLock;
    CalAccumulatingQueue *_incrementalUpdateQueue;
    id<CADSpotlightIndexProvider> _spotlightIndexProvider;
    CADSpotlightDefaults *_spotlightDefaults;
    id<CalSpotlightEntityAnnotator> _spotlightEntityAnnotator;
    CalCancellationTokenSource *_cancellationTokenSource;
    id<CADDatabaseConnectionProvider> _dbConnectionProvider;
    CADPooledDatabaseConfiguration *_poolConfig;
    NSMutableDictionary *_personaIDCache;
    NSDate *_retryReindexDate;
    _Atomic BOOL _resumed;
    NSDate *_now;
}

@property (class, readonly, nonatomic) int calDBChangeFetchBatchSize;

@property (retain, nonatomic) NSDate *now;

+ (id)expectedClientState;
+ (struct __CFSet { } *)_entityTypesThatAffectSpotlightIndexing;
+ (void)_executeWithNumRetriesOnFailure:(long long)a0 block:(id /* block */)a1;
+ (id)_spotlightDomainIDForItem:(void *)a0 bundleID:(id)a1 personaID:(id)a2;
+ (id)_spotlightDomainIDWithBundleID:(id)a0 personaID:(id)a1 storeID:(id)a2 calendarID:(id)a3 eventID:(id)a4 forIndexedEntityType:(int)a5;
+ (id)_typeLabelsForReindexingEvents:(BOOL)a0 calendars:(BOOL)a1;
+ (id)spotlightDomainIDForItem:(void *)a0 inDatabaseWithPersonaID:(id)a1;
+ (id)spotlightDomainIDForItemInMainDatabase:(void *)a0;
+ (id)spotlightUniqueIDForCalendar:(void *)a0;
+ (id)spotlightUniqueIDForEvent:(void *)a0 occurrenceDate:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)provideDataForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)provideFileURLForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)reindexAllItemsForBundleID:(id)a0 protectionClass:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)reindexItemsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 acknowledgementHandler:(id /* block */)a3;
- (void)protectedDataAvailable;
- (int)_nextDatabaseIDAfterDatabaseID:(int)a0;
- (void)_resetDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned long long x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a0;
- (void)_addCommonCalendarAttributesToSet:(id)a0 forCalendar:(void *)a1;
- (id)_advanceReindexingWithState:(id)a0;
- (void)_checkForAndReportPastSpotlightMigrationErrorsAndReindexIfNeeded;
- (void)_commonReindexPreambleWithState:(id)a0;
- (BOOL)_continueReindexWithState:(id)a0;
- (long long)_countTotalSpotlightDonationItems;
- (BOOL)_deleteAllSearchableItemsAndSetClientStateForBundleID:(id)a0 eventIndex:(id)a1;
- (BOOL)_deleteEverythingFromSpotlightForFullReindex;
- (BOOL)_deleteFromIndex:(id)a0 index:(id)a1;
- (void)_enumerateDatabasesWithBlockingCalls:(id /* block */)a0;
- (void)_enumerateDatabasesWithoutBlockingCalls:(id /* block */)a0;
- (BOOL)_fullCalendarsReindexWithDeleteFirst:(BOOL)a0;
- (void)_fullReindexOfEvents:(BOOL)a0 calendars:(BOOL)a1 withReason:(unsigned long long)a2;
- (void)_fullReindexWithReason:(unsigned long long)a0;
- (id)_incrementalReindexEventsWithState:(id)a0;
- (void)_incrementalUpdate;
- (id)_loadCurrentReindexState;
- (id)_personaID:(int)a0;
- (BOOL)_pushBatchedUpdatesForEventsWithUUIDs:(id)a0 calendarsWithUUIDs:(id)a1 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned long long x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a2 personaID:(id)a3 deleteBeforeInserting:(BOOL)a4;
- (BOOL)_pushUpdatesForEventsWithUUIDs:(id)a0 calendarsWithUUIDs:(id)a1 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned long long x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a2 personaID:(id)a3 deleteBeforeInserting:(BOOL)a4;
- (BOOL)_pushUpdatesForEventsWithUUIDs:(id)a0 calendarsWithUUIDs:(id)a1 inBatchesOf:(unsigned long long)a2 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned long long x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a3 personaID:(id)a4 deleteBeforeInserting:(BOOL)a5;
- (void)_reportDonationCountWithAllKnownItems:(long long)a0 itemsNeedingDonation:(long long)a1;
- (void)_reportDonationProgressForChange;
- (void)_resumeQueue;
- (void)_saveIndexState:(id)a0;
- (id)_spotlightItemAttributesForCalendar:(void *)a0;
- (id)_spotlightItemAttributesForEvent:(void *)a0;
- (id)_spotlightRecurrenceId:(void *)a0;
- (unsigned long long)_startPendingReindexIfAllowed;
- (id)_textRepresentationForEvent:(void *)a0;
- (void)_updateRetryReindexDate;
- (BOOL)_upsertCalendar:(void *)a0 withDomainID:(id)a1 context:(id)a2;
- (BOOL)_upsertEvent:(void *)a0 withDomainID:(id)a1 context:(id)a2;
- (BOOL)_upsertToIndex:(struct __CFArray { } *)a0 inDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned long long x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a1 personaID:(id)a2 deleteBeforeInserting:(BOOL)a3;
- (BOOL)_upsertToIndex:(struct __CFArray { } *)a0 inDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned long long x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a1 personaID:(id)a2 deleteBeforeInserting:(BOOL)a3 index:(id)a4;
- (void)_upsertsAndDeletesFromChanges:(id)a0 inDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned long long x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a1 personaID:(id)a2 outUpserts:(id *)a3 outDeletes:(id *)a4;
- (void)addToDomainIdsToDelete:(id)a0 forChangeDict:(id)a1 entityType:(int)a2 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned long long x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a3 personaID:(id)a4 donateCalendars:(BOOL)a5;
- (void)addToEntitiesToIndex:(struct __CFSet { } *)a0 forChangeDict:(id)a1 entityType:(int)a2 modifiedObjectID:(id)a3 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; unsigned long long x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a4 donateCalendars:(BOOL)a5;
- (void)cancelOngoingWorkAndShutdown;
- (void)indexUnconsumedChanges;
- (id)initWithDatabaseConfiguration:(id)a0 spotlightIndexProvider:(id)a1 spotlightDefaults:(id)a2 spotlightEntityAnnotator:(id)a3;
- (id)initWithSpotlightEntityAnnotator:(id)a0;
- (void)waitUntilIdle;

@end
