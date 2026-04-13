@interface CalPersistentOperationProducer : CalPersistenceMonitor

+ (void)registerForContextNotifications;

- (void)managedObjectContextDidSave:(id)a0;
- (void)managedObjectContextWillSave:(id)a0;
- (BOOL)_processInsertedManagedObjects:(id)a0;
- (BOOL)_processUpdatedManagedObjects:(id)a0;
- (BOOL)_processDeletedManagedObjects:(id)a0;
- (BOOL)_processInsertedCalendar:(id)a0;
- (BOOL)_processInsertedCalendarItem:(id)a0;
- (BOOL)_processInsertedRecurrenceException:(id)a0;
- (BOOL)_processInsertedAttachment:(id)a0;
- (BOOL)_processInsertedAttendees:(id)a0;
- (void)_archivePersistentOperations:(id)a0 inManagedObjectContext:(id)a1;
- (id)_sessionIDForAttachment:(id)a0;
- (id)_changedValuesForItem:(id)a0;
- (id)_sessionIDForCalendar:(id)a0;
- (id)_sessionIDForItem:(id)a0;
- (BOOL)_shouldTryToProcessCalendarItem:(id)a0;
- (BOOL)_markInvitationSent:(id)a0;
- (id)_sessionIDForRecurrenceException:(id)a0;
- (id)_changedValuesForDetachedEvent:(id)a0 comparedToMasterEvent:(id)a1;
- (void)_markResponseSent:(long long)a0 forEvent:(id)a1;
- (BOOL)_processUpdatedCalendarItem:(id)a0;
- (BOOL)_processUpdatedCalendar:(id)a0;
- (BOOL)_processUpdatedAttachment:(id)a0;
- (BOOL)_processUpdatedDefaultAlarmSet:(id)a0;
- (BOOL)_processUpdatedAttendee:(id)a0;
- (BOOL)_processDeletedAttachment:(id)a0;
- (id)_sessionIDForDefaultAlarmSet:(id)a0;
- (id)_changedValuesForDefaultAlarmSet:(id)a0;
- (id)_changedValuesForCalendar:(id)a0;
- (BOOL)_processDeletedCalendarItem:(id)a0;
- (BOOL)_processDeletedAttendees:(id)a0;
- (BOOL)_processDeletedCalendar:(id)a0;
- (id)_additionalRelevantChangesFromMaster:(id)a0;
- (id)_archivableChangedValuesForObject:(id)a0 visitedObjects:(id)a1;
- (id)_changedValuesForObject:(id)a0;
- (BOOL)_hasChangesRequiringReschedule:(id)a0;

@end
