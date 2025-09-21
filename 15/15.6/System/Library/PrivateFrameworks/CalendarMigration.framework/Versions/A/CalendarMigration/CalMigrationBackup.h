@interface CalMigrationBackup : NSObject

+ (char)backupCalendarDirectory:(id)a0 intoArchiveNamed:(id)a1 error:(id *)a2;
+ (char)removeExistingBackupWithArchiveName:(id)a0 inCalendarDirectory:(id)a1 error:(id *)a2;
+ (char)shouldBackupCalendarDirectory:(id)a0 withPrivacySafePathProvider:(id)a1;

@end
