@class NSString;
@protocol CalReminderKitProvider, CalReminderMigrationDefaultsProvider;

@interface CalTruthFilesReminderMigrator : NSObject <CalMigrator>

@property (readonly, nonatomic) id<CalReminderKitProvider> reminderKitProvider;
@property (readonly, nonatomic) id<CalReminderMigrationDefaultsProvider> defaultsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_accountTypeForExtension:(id)a0;
+ (id)_attemptAccountMigrationForDirectory:(id)a0 withContext:(id)a1 shouldMigrateData:(char *)a2;
+ (void)_attemptImportOfICSFiles:(id)a0 withContext:(id)a1 listChangeItem:(id)a2;
+ (char)_attemptLocalReminderListMigrationForDirectory:(id)a0 withContext:(id)a1;
+ (char)_attemptMigrationForAccountInDirectory:(id)a0 withContext:(id)a1;
+ (void)_attemptReminderListMigrationForDirectory:(id)a0 withContext:(id)a1 accountChangeItem:(id)a2 shouldMigrateData:(char)a3;
+ (char)_cleanupAccountDirectory:(id)a0 withContext:(id)a1;
+ (char)_cleanupCalendarDirectory:(id)a0 withContext:(id)a1;
+ (char)_cleanupTopLevelDirectory:(id)a0 withContext:(id)a1;
+ (void)_deleteItems:(id)a0 withContext:(id)a1;
+ (void)_deleteItemsAfterSuccessfulMigrationWithContext:(id)a0;
+ (void)_disableRemindersDataClassInAccountPlist:(id)a0 withContext:(id)a1;
+ (void)_disableRemindersEntityTypeInCalendarPlist:(id)a0 withContext:(id)a1;
+ (char)_fileURLIsReminderICS:(id)a0;
+ (void)_importDirectoryAsReminderList:(id)a0 withPlistDictionary:(id)a1 context:(id)a2 accountChangeItem:(id)a3;
+ (void)_migrateReminderListsInAccountDirectory:(id)a0 withContext:(id)a1 accountChangeItem:(id)a2 shouldMigrateData:(char)a3;
+ (void)_removeRemindersDataAfterSuccessfulMigrationWithContext:(id)a0;
+ (void)_savePlistDictionary:(id)a0 toURL:(id)a1 withContext:(id)a2;
+ (char)_shouldImportDirectoryAsReminderList:(id)a0 withContext:(id)a1 plistDictionary:(id *)a2;
+ (char)_shouldMigrateDirectoryAsAccount:(id)a0 withContext:(id)a1 reportErrors:(char)a2 accountType:(long long *)a3 identifier:(id *)a4;
+ (void)_updatePlist:(id)a0 withContext:(id)a1 updateBlock:(id /* block */)a2;
+ (void)_updatePlistsAfterSuccessfulMigrationWithContext:(id)a0;
+ (void)_visitDirectoryForImportAsReminderList:(id)a0 withPlistDictionary:(id)a1 context:(id)a2 accountChangeItem:(id)a3 shouldMigrateData:(char)a4;

- (void).cxx_destruct;
- (char)_attemptMigrateRemindersDataWithCalendarDirectory:(id)a0;
- (char)_performMigrationInCalendarDirectory:(id)a0 withContext:(id)a1;
- (char)_performPostMigrationTasksInCalendarDirectory:(id)a0 withContext:(id)a1;
- (void)_performPreMigrationTasksInCalendarDirectory:(id)a0 withContext:(id)a1;
- (char)attemptMigrationWithHomeDirectory:(id)a0;
- (id)initWithReminderKitProvider:(id)a0 defaultsProvider:(id)a1;

@end
