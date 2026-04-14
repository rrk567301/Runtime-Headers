@class NSURL, NSMutableDictionary;

@interface MCMMigrationStatus : NSObject

@property (retain, nonatomic) NSMutableDictionary *migrationInfo;
@property (retain, nonatomic) NSURL *migrationFileURL;

+ (id)currentBuildVersion;

- (id)init;
- (void).cxx_destruct;
- (id)_iso8601DateFormatter;
- (void)_migrateFromManyMarkerFilesToOneWithLibraryPath:(id)a0;
- (id)_readMigrationStatusFromDisk;
- (void)_readStatusFromMarkerFileWithName:(id)a0 andSetAsType:(id)a1 libraryPath:(id)a2;
- (void)_removeMarkerFileWithName:(id)a0 libraryPath:(id)a1;
- (BOOL)_writeMigrationStatusToDisk;
- (BOOL)hasMigrationOccurredForType:(id)a0;
- (id)initForMobileUserMigration;
- (id)initForSystemMigration;
- (BOOL)isBuildUpgrade;
- (void)setMigrationCompleteForType:(id)a0;
- (void)writeCurrentBuildInfoToDisk;

@end
