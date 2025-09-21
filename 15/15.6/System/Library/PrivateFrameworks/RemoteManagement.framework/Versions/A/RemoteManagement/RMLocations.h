@class NSURL;

@interface RMLocations : NSObject

@property (class, readonly, nonatomic) long long currentDomain;
@property (class, readonly, nonatomic) NSURL *managedObjectModelURL;
@property (class, readonly, nonatomic) NSURL *xpcServiceDirectoryURL;

+ (id)homeDirectoryURL;
+ (id)baseDirectoryURLCreateIfNeeded:(char)a0;
+ (id)URLWithResolvedSymlinksFromURL:(id)a0 error:(id *)a1;
+ (id)_applicationSupportChildDirectoryURLInDomain:(long long)a0 createIfNeeded:(char)a1 childName:(id)a2 descriptor:(id)a3;
+ (void)_convertToDataVaultIfNeededAtURL:(id)a0;
+ (id)_dataVaultChildDirectoryURLInDomain:(long long)a0 createIfNeeded:(char)a1 childName:(id)a2 descriptor:(id)a3;
+ (void)_oneTimeDataVaultConversionInDomain:(long long)a0 dataVaultDirectoryURL:(id)a1;
+ (id)_rootDirectoryURLInDomain:(long long)a0 error:(id *)a1;
+ (id)assetCacheDirectoryURLCreateIfNeeded:(char)a0;
+ (id)assetCacheDirectoryURLInDomain:(long long)a0 createIfNeeded:(char)a1;
+ (id)baseDirectoryURLInDomain:(long long)a0 createIfNeeded:(char)a1;
+ (id)configurationSchemaDirectoryForXPCServiceResourceURL:(id)a0;
+ (id)darwinCacheDirectoryURL;
+ (id)darwinTemporaryDirectoryURL;
+ (id)darwinUserDirectoryURL;
+ (id)dataVaultDirectoryURLCreateIfNeeded:(char)a0;
+ (id)dataVaultDirectoryURLInDomain:(long long)a0 createIfNeeded:(char)a1;
+ (id)defaultsOverrideFileURLCreateIfNeeded:(char)a0;
+ (id)defaultsOverrideFileURLInDomain:(long long)a0 createIfNeeded:(char)a1;
+ (char)fixFilePermissionsForURL:(id)a0;
+ (id)httpLoggingDirectoryURLCreateIfNeeded:(char)a0;
+ (id)httpLoggingDirectoryURLInDomain:(long long)a0 createIfNeeded:(char)a1;
+ (id)identityDirectoryURLCreateIfNeeded:(char)a0;
+ (id)identityDirectoryURLInDomain:(long long)a0 createIfNeeded:(char)a1;
+ (id)migrationStatusFileURLCreateIfNeeded:(char)a0;
+ (id)migrationStatusFileURLInDomain:(long long)a0 createIfNeeded:(char)a1;
+ (id)persistentStoreDirectoryURLCreateIfNeeded:(char)a0;
+ (id)persistentStoreDirectoryURLInDomain:(long long)a0 createIfNeeded:(char)a1;
+ (id)persistentStoreURLCreateIfNeeded:(char)a0;
+ (id)persistentStoreURLInDomain:(long long)a0 createIfNeeded:(char)a1;
+ (id)statusDirectoryURLCreateIfNeeded:(char)a0;
+ (id)statusDirectoryURLInDomain:(long long)a0 createIfNeeded:(char)a1;
+ (id)statusSchemaDirectoryForXPCServiceResourceURL:(id)a0;

@end
