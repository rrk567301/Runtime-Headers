@class NSURL, NSMutableDictionary;

@interface MCMMigrationStatus : NSObject

@property (retain, nonatomic) NSMutableDictionary *migrationInfo;
@property (retain, nonatomic) NSURL *migrationFileURL;

+ (id)currentBuildVersion;

- (void)writeCurrentBuildInfoToDisk;
- (void)setMigrationCompleteForType:(id)a0;
- (void)_consolidateForUserDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)a0;
- (id)initForMobileUserMigration;
- (BOOL)isBuildUpgrade;
- (id)_readMigrationStatusFromDisk;
- (id)init;
- (void)_consolidateSystemDaemonMigrationStatusWithLibraryURL:(id)a0;
- (void)_readStatusFromMarkerFileWithName:(id)a0 andSetAsType:(id)a1 libraryURL:(id)a2;
- (void)_removeMarkerFileWithName:(id)a0 libraryURL:(id)a1;
- (BOOL)hasMigrationOccurredForType:(id)a0;
- (BOOL)_writeMigrationStatusToDisk;
- (void)_consolidateUnifiedDaemonMigrationStatusWithLibraryURL:(id)a0;
- (id)_iso8601DateFormatter;
- (id)_readMigrationStatusFromDiskAtURL:(id)a0;
- (void)_consolidateUserDaemonMigrationStatusWithLibraryURL:(id)a0;
- (id)initForSystemMigration;
- (void)_consolidateForUnifiedDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)a0;
- (void).cxx_destruct;

@end
