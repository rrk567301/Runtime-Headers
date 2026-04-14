@class NSURL, NSMutableDictionary;

@interface MCMMigrationStatus : NSObject

@property (retain, nonatomic) NSMutableDictionary *migrationInfo;
@property (retain, nonatomic) NSURL *migrationFileURL;

+ (id)currentBuildVersion;

- (void)setMigrationCompleteForType:(id)a0;
- (id)_iso8601DateFormatter;
- (void)_consolidateSystemDaemonMigrationStatusWithLibraryURL:(id)a0;
- (BOOL)_writeMigrationStatusToDisk;
- (void)_consolidateForUserDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)a0;
- (void)_consolidateUnifiedDaemonMigrationStatusWithLibraryURL:(id)a0;
- (void)writeCurrentBuildInfoToDisk;
- (id)initWithFileURL:(id)a0;
- (void)_removeMarkerFileWithName:(id)a0 libraryURL:(id)a1;
- (id)_readMigrationStatusFromDiskAtURL:(id)a0;
- (void)_consolidateForUnifiedDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasMigrationOccurredForType:(id)a0;
- (id)_readMigrationStatusFromDisk;
- (void)clearMigrationCompleteForType:(id)a0;
- (id)init;
- (void)_consolidateUserDaemonMigrationStatusWithLibraryURL:(id)a0;
- (void)_readStatusFromMarkerFileWithName:(id)a0 andSetAsType:(id)a1 libraryURL:(id)a2;
- (id)initForSystemMigration;
- (id)initForMobileUserMigration;
- (BOOL)isBuildUpgrade;

@end
