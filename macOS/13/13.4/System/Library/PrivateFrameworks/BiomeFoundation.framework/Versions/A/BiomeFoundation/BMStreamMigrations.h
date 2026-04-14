@interface BMStreamMigrations : NSObject

+ (id)pathToVersionFile;
+ (double)readCurrentDatabaseVersion;
+ (void)setDatabaseVersion:(double)a0;

- (void)migrate;
- (void)_moveStreamsWithPathMapping:(id)a0;
- (void)_removeStreamPaths:(id)a0;
- (void)migrateFromVersion:(double)a0;

@end
