@class NSString;

@interface BMPaths : NSObject

@property (class, readonly, copy, nonatomic) NSString *basePathForTesting;
@property (class, readonly) NSString *localComputeDirectory;
@property (class, readonly) NSString *syncDirectory;

+ (id)privacyPathname:(id)a0;
+ (BOOL)pathIsManaged:(id)a0 domain:(unsigned long long *)a1;
+ (void)unsetBasePathForTesting;
+ (id)allSetsResourceSpecifierWithOptions:(unsigned char)a0;
+ (void)setBasePathForTestingWithPath:(id)a0;
+ (id)computeDirectoryForDomain:(unsigned long long)a0;
+ (id)pathForSharedSyncWithAccount:(id)a0 domain:(unsigned long long)a1;
+ (id)sharedSyncDirectoryForDomain:(unsigned long long)a0;
+ (id)pathComponentForStreamType:(unsigned long long)a0;
+ (id)biomeDirectoryForDomain:(unsigned long long)a0;
+ (BOOL)isTestPathOverridden;
+ (id)setsDirectoryInContainer:(id)a0;
+ (id)pathForSharedSyncWithAccount:(id)a0 streamType:(unsigned long long)a1 domain:(unsigned long long)a2;
+ (id)_biomeSystemDataDirectory;
+ (id)_biomeDirectoryForDomain:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)_pathForTesting;
+ (id)pathForSetResource:(id)a0 inContainer:(id)a1;
+ (id)pathForResource:(id)a0 inContainer:(id)a1;
+ (id)pathForDatabase:(id)a0;
+ (id)_userHome;
+ (id)pathForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
+ (id)privacyURLToString:(id)a0;
+ (id)_systemRoot;
+ (id)dataResourcePathComponentFromResource:(id)a0;
+ (id)_pathForLibraryStreamWithDomain:(unsigned long long)a0;
+ (id)databaseDirectoryForDomain:(unsigned long long)a0;
+ (id)optionalBiomeDirectoryForDomainUser;
+ (id)_biomeUserDataDirectory:(unsigned long long)a0;
+ (id)biomeTemporaryDirectoryForContainer:(id)a0;
+ (BOOL)getServiceDomain:(unsigned long long *)a0 subpath:(id *)a1 forPath:(id)a2;
+ (id)pathForStreamType:(unsigned long long)a0 domain:(unsigned long long)a1;
+ (id)resourceFromDataResourcePath:(id)a0 inContainer:(id)a1;
+ (id)biomeTemporaryDirectoryForDomain:(unsigned long long)a0;

@end
