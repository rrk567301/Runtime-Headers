@interface ULBackupAndRestore : NSObject

@property (nonatomic) struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *db;
@property (nonatomic) void *eventLogger;

- (char)_exportRecordingEventsForLoiGroupIds:(struct vector<boost::uuids::uuid, std::allocator<boost::uuids::uuid>> { struct uuid *x0; struct uuid *x1; struct __compressed_pair<boost::uuids::uuid *, std::allocator<boost::uuids::uuid>> { struct uuid *x0; } x2; })a0 toDatabase:(struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *)a1 withCancelFunc:(struct function<bool ()> { struct __value_func<bool ()> { struct type { unsigned char x0[32]; } x0; void *x1; } x0; })a2;
- (char)_clearTempBackupDirectory:(id)a0;
- (char)_createBackupDbPathWithAttributes:(id)a0;
- (char)_createTempBackupDirectoryIfNotExists:(id)a0;
- (void)_deleteTempDb:(struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *)a0;
- (char)_didReceiveCancel:(struct function<bool ()> { struct __value_func<bool ()> { struct type { unsigned char x0[32]; } x0; void *x1; } x0; })a0;
- (char)_exportToDatabase:(struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *)a0 withCancelFunc:(struct function<bool ()> { struct __value_func<bool ()> { struct type { unsigned char x0[32]; } x0; void *x1; } x0; })a1;
- (char)_exportiCloudBackupTransactionWithCancelFunc:(struct function<bool ()> { struct __value_func<bool ()> { struct type { unsigned char x0[32]; } x0; void *x1; } x0; })a0;
- (unsigned long long)_getFileSize:(id)a0;
- (id)_getTempBackupDatabaseDirectoryClearCurrent:(char)a0 createNew:(char)a1;
- (char)_importFromDatabase:(struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *)a0;
- (char)_importiCloudBackupTransaction;
- (char)_setClassBAttributeToFile:(id)a0;
- (char)_setExcludeFromBackupAttribute:(id)a0 withValue:(char)a1;
- (void)deleteBackupFiles;
- (char)exportiCloudBackupWithCancelFunc:(struct function<bool ()> { struct __value_func<bool ()> { struct type { unsigned char x0[32]; } x0; void *x1; } x0; })a0;
- (id)getBackupDatabasePath;
- (char)importiCloudBackup;
- (id)initWithDatabase:(struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *)a0 andEventLogger:(void *)a1;

@end
