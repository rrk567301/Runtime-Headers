@class NSString;

@interface APDatabasePath : NSObject

@property (readonly, nonatomic) NSString *databaseName;

+ (void)_clearCachedPaths;
+ (id)_databaseBundleDirectory;
+ (void)_setInstanceClass:(Class)a0;
+ (Class)instanceClass;
+ (id)lockForPath;
+ (id)pathForName:(id)a0;
+ (id)pathToNameDictionary;

- (id)databaseFilePath;
- (void).cxx_destruct;
- (id)databaseDirectory;
- (id)initWithDatabaseName:(id)a0;
- (id)migrationScriptsPath;

@end
