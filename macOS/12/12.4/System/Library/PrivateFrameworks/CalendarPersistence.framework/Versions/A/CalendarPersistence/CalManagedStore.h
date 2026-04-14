@interface CalManagedStore : NSObject

+ (id)masterForTruthFile:(id)a0 occurrenceDate:(id *)a1 inContext:(id)a2;
+ (id)managedCalendarItemsMatchingSearchElement:(id)a0 calendars:(id)a1 inManagedObjectContext:(id)a2;
+ (id)entitiesFromManagedCalendarItems:(id)a0;
+ (BOOL)restorePersistentStoreInPSC:(id)a0 inBatches:(BOOL)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (void)_unquarantineFileIfNecessary:(id)a0;
+ (id)contextWithPSC:(id)a0;
+ (void)_deleteCalendarAtPath:(id)a0;
+ (id)restorePublicationWithDictionary:(id)a0 inManagedObjectContext:(id)a1;
+ (id)restoreSubscriptionInfoWithDictionary:(id)a0 inManagedObjectContext:(id)a1;
+ (id)restoreDefaultAlarmSetAtPath:(id)a0 inManagedObjectContext:(id)a1;
+ (id)_batchedPaths:(id)a0 batchSize:(unsigned int)a1;
+ (void)_throwContextSaveExceptionWithError:(id)a0;
+ (void)_notifyOnImportTotalCalendars:(long long)a0 completedCalendars:(long long)a1 partialCalendarTotalItems:(long long)a2 completedItems:(long long)a3;
+ (id)restoreCalendarAtPath:(id)a0 calendarKeysForDupeDeletion:(id)a1 inGroup:(id)a2 inManagedObjectContext:(id)a3 inBatches:(BOOL)a4;
+ (id)restoreCalendarAtPath:(id)a0 calendarKeysForDupeDeletion:(id)a1 inGroup:(id)a2 progress:(unsigned long long *)a3 total:(unsigned long long)a4 inManagedObjectContext:(id)a5 inBatches:(BOOL)a6;
+ (BOOL)restorePersistentStoreInPSC:(id)a0 inBatches:(BOOL)a1 error:(id *)a2;
+ (id)restoreCalDAVPrincipalAtPath:(id)a0 accounts:(id)a1 progress:(unsigned long long *)a2 total:(unsigned long long)a3 inManagedObjectContext:(id)a4 inBatches:(BOOL)a5;
+ (id)restoreExchangePrincipalAtPath:(id)a0 accounts:(id)a1 progress:(unsigned long long *)a2 total:(unsigned long long)a3 inManagedObjectContext:(id)a4;
+ (id)restoreIMAPAtPath:(id)a0 progress:(unsigned long long *)a1 total:(unsigned long long)a2 inManagedObjectContext:(id)a3;
+ (id)calendarChangesFile;
+ (unsigned long long)_enabledWeightForAccount:(id)a0;
+ (BOOL)hasTruthFiles;
+ (BOOL)restorePersistentStoreInPSC:(id)a0 error:(id *)a1;
+ (id)_predicateHelperForStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 exceptUID:(id)a3 forReminders:(BOOL)a4 useTravelTime:(BOOL)a5;
+ (id)_nonRecurringPredicateFloating:(BOOL)a0 useTravelTime:(BOOL)a1 forReminders:(BOOL)a2;
+ (id)_recurringPredicateFloating:(BOOL)a0 useTravelTime:(BOOL)a1 forReminders:(BOOL)a2;
+ (id)predicateForStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 exceptUID:(id)a3 useTravelTime:(BOOL)a4;
+ (id)fetchEntitiesWithPrefetchedAlarmsForEntityName:(id)a0 withPredicate:(id)a1 inCalendars:(id)a2 inManagedObjectContext:(id)a3;
+ (id)predicateForImportantDate:(id)a0 endDate:(id)a1 calendars:(id)a2 exceptUID:(id)a3;
+ (id)predicateForDefaultAlarmSetsWithRelativeTriggersLargerThan:(long long)a0;
+ (id)eventsBetweenStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 exceptUID:(id)a3 excludeDetached:(BOOL)a4 includeTravelTime:(BOOL)a5 inManagedObjectContext:(id)a6;
+ (id)tasksWithDueDateBetweenStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 inManagedObjectContext:(id)a3;
+ (id)predicateForAlarmsWithAbsoluteTriggerInRange:(id)a0 endDate:(id)a1 orRelativeTriggerLargerThan:(long long)a2 includingLocationBased:(BOOL)a3;
+ (id)fetchEntitiesWithPrefetchedAlarmsForEntityName:(id)a0 inCalendars:(id)a1 inManagedObjectContext:(id)a2;
+ (id)eventsWithAlarmsBetweenStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 includeLocationBased:(BOOL)a3 inManagedObjectContext:(id)a4;
+ (id)tasksWithAlarmsBetweenStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 includeLocationBased:(BOOL)a3 inManagedObjectContext:(id)a4;
+ (id)alarmsWithTriggersBetweenStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 includeLocationBased:(BOOL)a3 inManagedObjectContext:(id)a4;
+ (id)masterForTruthFile:(id)a0 occurrenceCALDate:(id *)a1 inContext:(id)a2;
+ (id)_masterForICSFile:(id)a0 occurrenceCALDate:(id *)a1 inContext:(id)a2 checkCalendarPath:(BOOL)a3;
+ (id)masterForICSFile:(id)a0 occurrenceCALDate:(id *)a1 inContext:(id)a2;

@end
