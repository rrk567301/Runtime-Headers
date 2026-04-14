@class NSSet;

@interface CalMigrationUtilities : NSObject

@property (class, readonly, nonatomic) NSSet *extensionsForLegacyDirectoriesToDelete;
@property (class, readonly, nonatomic) NSSet *legacyDirectoryNamesToDelete;
@property (class, readonly, nonatomic) NSSet *legacyFileNamesToDelete;

+ (id)validatedCalendarDirectoryForHomeDirectory:(id)a0;
+ (id)homeRelativePathForURL:(id)a0 inCalendarDirectory:(id)a1;
+ (id)subdirectoriesInDirectory:(id)a0 withPrivacySafePathProvider:(id)a1 error:(id *)a2;
+ (id)plistDictionaryForDirectory:(id)a0 withPrivacySafePathProvider:(id)a1;
+ (id)plistForDirectory:(id)a0;
+ (id)plistDictionaryForPlistURL:(id)a0 withPrivacySafePathProvider:(id)a1;
+ (id)_eventsDirectoryForCalendarDirectory:(id)a0;
+ (BOOL)calendarDirectory:(id)a0 hasAnyFilesWithExtension:(id)a1;
+ (id)filesWithExtension:(id)a0 inDirectory:(id)a1 withPrivacySavePathProvider:(id)a2 error:(id *)a3;
+ (id)icsFilesForDirectory:(id)a0 withPrivacySavePathProvider:(id)a1 error:(id *)a2;
+ (id)icsFilesForCalendarDirectory:(id)a0 withPrivacySavePathProvider:(id)a1 error:(id *)a2;
+ (id)calendarDirectoryForHomeDirectory:(id)a0;
+ (void)enumerateSelfAndDetachedEventsWithEvent:(const void *)a0 usingBlock:(id /* block */)a1;
+ (void)clearPreviousMigrationResultsWithDatabaseFileURL:(id)a0;

@end
