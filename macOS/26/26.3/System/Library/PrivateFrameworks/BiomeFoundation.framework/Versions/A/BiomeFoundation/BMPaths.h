@class NSString;

@interface BMPaths : NSObject

@property (class, readonly, copy, nonatomic) NSString *basePathForTesting;
@property (class, readonly) NSString *localComputeDirectory;
@property (class, readonly) NSString *syncDirectory;

+ (id)_systemRoot;
+ (id)pathForStreamType:(unsigned long long)a0 domain:(unsigned long long)a1;
+ (id)dataResourcePathComponentFromResource:(id)a0;
+ (id)sharedSyncDirectoryForDomain:(unsigned long long)a0;
+ (id)_biomeDirectoryForDomain:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)privacyURLToString:(id)a0;
+ (id)pathForDatabase:(id)a0;
+ (id)privacyPathname:(id)a0;
+ (id)_pathForTesting;
+ (BOOL)currentProcessAllowsTemporaryLocation;
+ (id)databaseDirectoryForDomain:(unsigned long long)a0;
+ (id)biomeTemporaryDirectoryForDomain:(unsigned long long)a0;
+ (id)setsDirectoryInContainer:(id)a0;
+ (id)optionalBiomeDirectoryForDomainUser;
+ (id)pathForSharedSyncWithAccount:(id)a0 domain:(unsigned long long)a1;
+ (id)pathForResource:(id)a0 inContainer:(id)a1;
+ (id)biomeTemporaryDirectoryForContainer:(id)a0;
+ (id)_biomeSystemDataDirectory;
+ (void)unsetBasePathForTesting;
+ (id)resourceFromDataResourcePath:(id)a0 inContainer:(id)a1;
+ (id)pathForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
+ (BOOL)getServiceDomain:(unsigned long long *)a0 subpath:(id *)a1 forPath:(id)a2;
+ (id)allSetsResourceSpecifierWithOptions:(unsigned char)a0;
+ (id)pathForSetResource:(id)a0 inContainer:(id)a1;
+ (id)biomeDirectoryForDomain:(unsigned long long)a0;
+ (void)setBasePathForTestingWithPath:(id)a0;
+ (id)_biomeUserDataDirectory:(unsigned long long)a0;
+ (id)_pathForLibraryStreamWithDomain:(unsigned long long)a0;
+ (BOOL)pathIsManaged:(id)a0 domain:(unsigned long long *)a1;
+ (id)_userHome;
+ (id)pathComponentForStreamType:(unsigned long long)a0;
+ (BOOL)isTestPathOverridden;
+ (id)pathForSharedSyncWithAccount:(id)a0 streamType:(unsigned long long)a1 domain:(unsigned long long)a2;
+ (id)computeDirectoryForDomain:(unsigned long long)a0;

@end
