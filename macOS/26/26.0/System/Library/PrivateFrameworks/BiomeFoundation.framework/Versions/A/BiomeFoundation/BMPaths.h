@class NSString;

@interface BMPaths : NSObject

@property (class, readonly, copy, nonatomic) NSString *basePathForTesting;
@property (class, readonly) NSString *localComputeDirectory;
@property (class, readonly) NSString *syncDirectory;

+ (id)sharedSyncDirectoryForDomain:(unsigned long long)a0;
+ (id)biomeTemporaryDirectoryForContainer:(id)a0;
+ (id)privacyPathname:(id)a0;
+ (void)setBasePathForTestingWithPath:(id)a0;
+ (id)resourceFromDataResourcePath:(id)a0 inContainer:(id)a1;
+ (id)_systemRoot;
+ (id)_biomeUserDataDirectory:(unsigned long long)a0;
+ (id)_pathForLibraryStreamWithDomain:(unsigned long long)a0;
+ (id)pathForStreamType:(unsigned long long)a0 domain:(unsigned long long)a1;
+ (id)biomeDirectoryForDomain:(unsigned long long)a0;
+ (BOOL)getServiceDomain:(unsigned long long *)a0 subpath:(id *)a1 forPath:(id)a2;
+ (id)_pathForTesting;
+ (id)computeDirectoryForDomain:(unsigned long long)a0;
+ (id)pathForDatabase:(id)a0;
+ (id)optionalBiomeDirectoryForDomainUser;
+ (BOOL)pathIsManaged:(id)a0 domain:(unsigned long long *)a1;
+ (id)_userHome;
+ (id)pathForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
+ (id)databaseDirectoryForDomain:(unsigned long long)a0;
+ (id)allSetsResourceSpecifierWithOptions:(unsigned char)a0;
+ (id)pathComponentForStreamType:(unsigned long long)a0;
+ (id)pathForSharedSyncWithAccount:(id)a0 streamType:(unsigned long long)a1 domain:(unsigned long long)a2;
+ (BOOL)isTestPathOverridden;
+ (id)setsDirectoryInContainer:(id)a0;
+ (id)dataResourcePathComponentFromResource:(id)a0;
+ (id)_biomeSystemDataDirectory;
+ (void)unsetBasePathForTesting;
+ (id)pathForResource:(id)a0 inContainer:(id)a1;
+ (id)pathForSharedSyncWithAccount:(id)a0 domain:(unsigned long long)a1;
+ (id)_biomeDirectoryForDomain:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)pathForSetResource:(id)a0 inContainer:(id)a1;
+ (id)biomeTemporaryDirectoryForDomain:(unsigned long long)a0;
+ (id)privacyURLToString:(id)a0;

@end
