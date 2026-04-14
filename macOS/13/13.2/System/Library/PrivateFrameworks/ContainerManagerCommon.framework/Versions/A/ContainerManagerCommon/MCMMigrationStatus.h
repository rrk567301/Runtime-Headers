@class NSURL, NSMutableDictionary;

@interface MCMMigrationStatus : NSObject

@property (retain, nonatomic) NSMutableDictionary *migrationInfo;
@property (retain, nonatomic) NSURL *migrationFileURL;

+ (id)currentBuildVersion;

- (id)init;
- (void).cxx_destruct;
- (id)initForSystemMigration;
- (id)initForMobileUserMigration;
- (void)_readStatusFromMarkerFileWithName:(id)a0 andSetAsType:(id)a1 libraryPath:(id)a2;
- (void)_removeMarkerFileWithName:(id)a0 libraryPath:(id)a1;
- (void)_migrateFromManyMarkerFilesToOneWithLibraryPath:(id)a0;
- (id)_readMigrationStatusFromDisk;
- (BOOL)_writeMigrationStatusToDisk;
- (BOOL)hasMigrationOccurredForType:(id)a0;
- (void)setMigrationCompleteForType:(id)a0;
- (void)writeCurrentBuildInfoToDisk;
- (BOOL)isBuildUpgrade;
- (id)_iso8601DateFormatter;

@end
