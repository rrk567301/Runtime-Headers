@class NSURL, NSMutableDictionary;

@interface MCMMigrationStatus : NSObject

@property (retain, nonatomic) NSMutableDictionary *migrationInfo;
@property (retain, nonatomic) NSURL *migrationFileURL;

+ (id)currentBuildVersion;

- (void)_removeMarkerFileWithName:(id)a0 libraryURL:(id)a1;
- (id)_iso8601DateFormatter;
- (void)_consolidateUnifiedDaemonMigrationStatusWithLibraryURL:(id)a0;
- (id)initForSystemMigration;
- (id)initWithFileURL:(id)a0;
- (void)clearMigrationCompleteForType:(id)a0;
- (BOOL)hasMigrationOccurredForType:(id)a0;
- (void)_consolidateForUnifiedDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)a0;
- (void)writeCurrentBuildInfoToDisk;
- (void).cxx_destruct;
- (id)_readMigrationStatusFromDiskAtURL:(id)a0;
- (BOOL)_writeMigrationStatusToDisk;
- (BOOL)isBuildUpgrade;
- (void)setMigrationCompleteForType:(id)a0;
- (id)initForMobileUserMigration;
- (void)_consolidateUserDaemonMigrationStatusWithLibraryURL:(id)a0;
- (void)_consolidateSystemDaemonMigrationStatusWithLibraryURL:(id)a0;
- (id)init;
- (void)_readStatusFromMarkerFileWithName:(id)a0 andSetAsType:(id)a1 libraryURL:(id)a2;
- (id)_readMigrationStatusFromDisk;
- (void)_consolidateForUserDaemonFromManyMarkerFilesToOneWithLibraryURL:(id)a0;

@end
