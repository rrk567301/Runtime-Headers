@interface CalWellKnownPaths : NSObject

+ (void)initialize;
+ (id)mailInvitationDropPath;
+ (id)calendarsFolderPath;
+ (id)sandboxCalendarsFolderPath;
+ (id)temporaryFilesPath;
+ (BOOL)checkOrCreatePath:(id)a0;
+ (void)resetPaths;
+ (id)realHomeDirectoryPath;
+ (id)calendarFileHandlerPath;
+ (id)calendarCachePath;
+ (id)eventsPendingChangesPath;
+ (id)calendarSyncChangesPath;
+ (id)calendarClientIdConflictsPath;

@end
