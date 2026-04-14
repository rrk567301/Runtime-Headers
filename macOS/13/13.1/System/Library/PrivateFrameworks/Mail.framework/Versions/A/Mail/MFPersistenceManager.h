@class NSString, NSURL;

@interface MFPersistenceManager : NSObject

@property (class, readonly, copy, nonatomic) NSString *mailDataSupportDirectory;
@property (class, readonly, nonatomic) NSURL *mailDataSupportDirectoryURL;

+ (void)resetPersistenceLayout;
+ (id)migrationDirectoryNameForDestinationPersistenceLayoutVersion:(long long)a0;
+ (id)legacyDefaultMailDirectory;
+ (id)autoDownloadDirectoryPath;
+ (id)adjustPath:(id)a0 toVersion:(long long)a1;
+ (id)adjustPath:(id)a0 toMigrationDestinationVersion:(long long)a1;
+ (id)_adjustPath:(id)a0 toVersion:(long long)a1 usingMigrationVersion:(BOOL)a2;

@end
