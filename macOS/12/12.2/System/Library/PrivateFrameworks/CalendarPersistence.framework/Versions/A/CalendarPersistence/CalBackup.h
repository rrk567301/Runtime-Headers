@interface CalBackup : NSObject

+ (BOOL)backupToPath:(id)a0 backupRemoteCalendars:(BOOL)a1 error:(id *)a2;
+ (BOOL)copyPath:(id)a0 toPath:(id)a1 error:(id *)a2 required:(BOOL)a3;
+ (BOOL)backupToPath:(id)a0 error:(id *)a1;
+ (id)defaultBackupFileName;
+ (id)_principalInfoDictionaryAtPath:(id)a0;
+ (BOOL)trashPath:(id)a0 error:(id *)a1 required:(BOOL)a2;
+ (BOOL)movePath:(id)a0 toPath:(id)a1 error:(id *)a2 required:(BOOL)a3;
+ (BOOL)restoreToBackupAtPath:(id)a0;
+ (id)defaultLocalCalendarAttachmentsBackupPath;
+ (BOOL)backupLocalCalendarAttachmentsToPath:(id)a0;
+ (id)backupFileExtension;
+ (id)defaultBackupFileNameWithExtension;

@end
