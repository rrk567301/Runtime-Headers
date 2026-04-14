@class NSString;

@interface BMPaths : NSObject

@property (class, readonly, copy, nonatomic) NSString *basePathForTesting;
@property (class, readonly) NSString *localComputeDirectory;
@property (class, readonly) NSString *syncDirectory;

+ (id)pathComponentForStreamType:(unsigned long long)a0;
+ (id)databaseDirectoryForDomain:(unsigned long long)a0;
+ (BOOL)getServiceDomain:(unsigned long long *)a0 subpath:(id *)a1 forPath:(id)a2;
+ (id)pathForSetResource:(id)a0 inContainer:(id)a1;
+ (id)biomeTemporaryDirectoryForContainer:(id)a0;
+ (BOOL)pathIsManaged:(id)a0 domain:(unsigned long long *)a1;
+ (id)biomeDirectoryForDomain:(unsigned long long)a0;
+ (id)_pathForTesting;
+ (BOOL)isTestPathOverridden;
+ (id)biomeTemporaryDirectoryForDomain:(unsigned long long)a0;
+ (id)sharedSyncDirectoryForDomain:(unsigned long long)a0;
+ (id)dataResourcePathComponentFromResource:(id)a0;
+ (id)allSetsResourceSpecifierWithOptions:(unsigned char)a0;
+ (BOOL)currentProcessAllowsTemporaryLocation;
+ (id)setsDirectoryInContainer:(id)a0;
+ (id)resourceFromDataResourcePath:(id)a0 inContainer:(id)a1;
+ (id)_biomeUserDataDirectory:(unsigned long long)a0;
+ (id)pathForStreamType:(unsigned long long)a0 domain:(unsigned long long)a1;
+ (id)pathForResource:(id)a0 inContainer:(id)a1;
+ (id)_biomeSystemDataDirectory;
+ (id)optionalBiomeDirectoryForDomainUser;
+ (id)_pathForLibraryStreamWithDomain:(unsigned long long)a0;
+ (void)unsetBasePathForTesting;
+ (id)computeDirectoryForDomain:(unsigned long long)a0;
+ (id)pathForSharedSyncWithAccount:(id)a0 domain:(unsigned long long)a1;
+ (id)privacyURLToString:(id)a0;
+ (id)_biomeDirectoryForDomain:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)_userHome;
+ (void)setBasePathForTestingWithPath:(id)a0;
+ (id)pathForDatabase:(id)a0;
+ (id)pathForSharedSyncWithAccount:(id)a0 streamType:(unsigned long long)a1 domain:(unsigned long long)a2;
+ (id)privacyPathname:(id)a0;
+ (id)_systemRoot;
+ (id)pathForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;

@end
