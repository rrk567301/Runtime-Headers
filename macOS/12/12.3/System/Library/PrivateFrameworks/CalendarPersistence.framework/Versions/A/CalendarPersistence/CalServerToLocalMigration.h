@interface CalServerToLocalMigration : NSObject

+ (id)toServerMigrationLogHandle;
+ (id)_limitingQueue;
+ (id)_asyncWorkQueue;
+ (void)_processMigrationGroups;
+ (id)_serverToLocalMigrationGroupsInContext:(id)a0;
+ (id)_existingMatchUIDsInLocalCalendarsForItems:(id)a0 inContext:(id)a1;
+ (id)toLocalMigrationLogHandle;
+ (void)_removeAttendeesFromEvent:(id)a0;
+ (void)_processMigrationGroupsInContext:(id)a0;
+ (void)_haltNetworkingForPrincipal:(id)a0;
+ (id)_eventsWithAttachmentsInPrincipal:(id)a0;
+ (id)_mastersOrPhantomEventsFromEvents:(id)a0;
+ (void)_moveAttachmentsForEvent:(id)a0 fromCalendar:(id)a1 toCalendar:(id)a2;
+ (void)_removeAttendeesFromMaster:(id)a0;
+ (void)_moveEventSeriesFromMaster:(id)a0 toCalendar:(id)a1;
+ (id)migrationLogHandle;
+ (void)processMigrationGroups;
+ (id)_localCalendarCreationQueue;
+ (void)moveCalendarsIntoMigrationGroup:(id)a0 fromPrincipal:(id)a1 includeEvents:(BOOL)a2 includeReminders:(BOOL)a3;
+ (void)migrateToLocalPreAccountDeletionForPrincipal:(id)a0 includeEvents:(BOOL)a1 includeReminders:(BOOL)a2 inContext:(id)a3;

@end
