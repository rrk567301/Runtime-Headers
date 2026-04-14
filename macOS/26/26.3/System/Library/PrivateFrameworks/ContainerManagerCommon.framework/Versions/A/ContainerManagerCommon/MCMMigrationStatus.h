@class NSURL, NSMutableDictionary;

@interface MCMMigrationStatus : NSObject

@property (retain, nonatomic) NSMutableDictionary *migrationInfo;
@property (retain, nonatomic) NSURL *migrationFileURL;

+ (id)currentBuildVersion;

- (id)initWithFileURL:(id)a0;
- (void)setMigrationCompleteForType:(id)a0;
- (void)_removeMarkerFileWithName:(id)a0 libraryURL:(id)a1;
- (id)initForMobileUserMigration;
- (id)init;
- (BOOL)_writeMigrationStatusToDisk;
- (void)clearMigrationCompleteForType:(id)a0;
- (void)_consolidateSystemDaemonMigrationStatusWithLibraryURL:(id)a0;
- (id)initForSystemMigration;
- (BOOL)hasMigrationOccurredForType:(id)a0;
- (void).cxx_destruct;
- (BOOL)isBuildUpgrade;
- (id)_iso8601DateFormatter;
- (id)_readMigrationStatusFromDiskAtURL:(id)a0;
- (id)_readMigrationStatusFromDisk;
- (void)writeCurrentBuildInfoToDisk;
- (void)_consolidateUserDaemonMigrationStatusWithLibraryURL:(id)a0;
- (void)_readStatusFromMarkerFileWithName:(id)a0 andSetAsType:(id)a1 libraryURL:(id)a2;
- (void)_consolidateForUserDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)a0;
- (void)_consolidateUnifiedDaemonMigrationStatusWithLibraryURL:(id)a0;
- (void)_consolidateForUnifiedDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)a0;

@end
