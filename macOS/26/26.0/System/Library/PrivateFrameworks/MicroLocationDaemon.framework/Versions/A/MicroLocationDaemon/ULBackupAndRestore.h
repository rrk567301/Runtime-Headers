@interface ULBackupAndRestore : NSObject

@property (nonatomic) struct ULDatabaseStoreInterface { void /* function */ **x0; } *dbStore;
@property (nonatomic) struct ULDatabaseManagementInterface { void /* function */ **x0; } *dbManagement;

- (BOOL)_clearTempBackupDirectory:(id)a0;
- (BOOL)_createBackupDbPathWithAttributes:(id)a0;
- (BOOL)_createTempBackupDirectoryIfNotExists:(id)a0;
- (void)_deleteTempDb:(id)a0;
- (BOOL)_didReceiveCancel:(struct function<bool ()> { struct __value_func<bool ()> { union type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (BOOL)_exportiCloudBackupTransactionWithCancelFunc:(struct function<bool ()> { struct __value_func<bool ()> { union type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (unsigned long long)_getFileSize:(id)a0;
- (id)_getTempBackupDatabaseDirectoryClearCurrent:(BOOL)a0 createNew:(BOOL)a1;
- (BOOL)_importiCloudBackupTransaction;
- (BOOL)_setClassBAttributeToFile:(id)a0;
- (BOOL)_setExcludeFromBackupAttribute:(id)a0 withValue:(BOOL)a1;
- (void)deleteBackupFiles;
- (BOOL)exportiCloudBackupWithCancelFunc:(struct function<bool ()> { struct __value_func<bool ()> { union type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (id)getBackupDatabasePath;
- (BOOL)importiCloudBackup;
- (id)initWithDbStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a0 andDbManagement:(struct ULDatabaseManagementInterface { void /* function */ **x0; } *)a1;

@end
