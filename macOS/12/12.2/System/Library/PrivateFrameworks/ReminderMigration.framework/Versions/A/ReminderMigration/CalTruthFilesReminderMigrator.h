@class NSString;
@protocol CalReminderKitProvider, CalReminderMigrationDefaultsProvider;

@interface CalTruthFilesReminderMigrator : NSObject <CalReminderMigrator>

@property (readonly, nonatomic) id<CalReminderKitProvider> reminderKitProvider;
@property (readonly, nonatomic) id<CalReminderMigrationDefaultsProvider> defaultsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_calendarDirectoryForHomeDirectory:(id)a0;
+ (id)_subdirectoriesInDirectory:(id)a0 withContext:(id)a1 error:(id *)a2;
+ (BOOL)_shouldMigrateDirectoryAsAccount:(id)a0 withContext:(id)a1 reportErrors:(BOOL)a2 accountType:(long long *)a3 identifier:(id *)a4;
+ (BOOL)_attemptMigrationForAccountInDirectory:(id)a0 withContext:(id)a1;
+ (BOOL)_cleanupTopLevelDirectory:(id)a0 withContext:(id)a1;
+ (void)_removeRemindersDataAfterSuccessfulMigrationWithContext:(id)a0;
+ (long long)_accountTypeForExtension:(id)a0;
+ (BOOL)_cleanupCalendarDirectory:(id)a0 withContext:(id)a1;
+ (BOOL)_cleanupAccountDirectory:(id)a0 withContext:(id)a1;
+ (id)_plistForDirectory:(id)a0;
+ (id)_plistDictionaryForPlistURL:(id)a0 withContext:(id)a1;
+ (id)_icsFilesForCalendarDirectory:(id)a0 withContext:(id)a1 error:(id *)a2;
+ (BOOL)_fileURLIsReminderICS:(id)a0;
+ (id)_attemptAccountMigrationForDirectory:(id)a0 withContext:(id)a1 shouldMigrateData:(BOOL *)a2;
+ (void)_migrateReminderListsInAccountDirectory:(id)a0 withContext:(id)a1 accountChangeItem:(id)a2 shouldMigrateData:(BOOL)a3;
+ (BOOL)_attemptLocalReminderListMigrationForDirectory:(id)a0 withContext:(id)a1;
+ (id)_plistDictionaryForDirectory:(id)a0 withContext:(id)a1;
+ (void)_attemptReminderListMigrationForDirectory:(id)a0 withContext:(id)a1 accountChangeItem:(id)a2 shouldMigrateData:(BOOL)a3;
+ (BOOL)_shouldImportDirectoryAsReminderList:(id)a0 withContext:(id)a1 plistDictionary:(id *)a2;
+ (void)_visitDirectoryForImportAsReminderList:(id)a0 withPlistDictionary:(id)a1 context:(id)a2 accountChangeItem:(id)a3 shouldMigrateData:(BOOL)a4;
+ (void)_importDirectoryAsReminderList:(id)a0 withPlistDictionary:(id)a1 context:(id)a2 accountChangeItem:(id)a3;
+ (void)_attemptImportOfICSFiles:(id)a0 withContext:(id)a1 listChangeItem:(id)a2;
+ (void)_updatePlistsAfterSuccessfulMigrationWithContext:(id)a0;
+ (void)_deleteItemsAfterSuccessfulMigrationWithContext:(id)a0;
+ (void)_disableRemindersDataClassInAccountPlist:(id)a0 withContext:(id)a1;
+ (void)_disableRemindersEntityTypeInCalendarPlist:(id)a0 withContext:(id)a1;
+ (void)_updatePlist:(id)a0 withContext:(id)a1 updateBlock:(id /* block */)a2;
+ (void)_deleteItems:(id)a0 withContext:(id)a1;
+ (void)_savePlistDictionary:(id)a0 toURL:(id)a1 withContext:(id)a2;
+ (id)_eventsDirectoryForCalendarDirectory:(id)a0;

- (void).cxx_destruct;
- (id)initWithReminderKitProvider:(id)a0 defaultsProvider:(id)a1;
- (BOOL)attemptMigrationWithHomeDirectory:(id)a0;
- (id)_calendarDirectoryForHomeDirectory:(id)a0;
- (BOOL)_attemptMigrateRemindersDataWithCalendarDirectory:(id)a0;
- (void)_performPreMigrationTasksInCalendarDirectory:(id)a0 withContext:(id)a1;
- (BOOL)_performMigrationInCalendarDirectory:(id)a0 withContext:(id)a1;
- (BOOL)_performPostMigrationTasksInCalendarDirectory:(id)a0 withContext:(id)a1;

@end
