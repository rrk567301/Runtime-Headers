@class NSString;

@interface BMPaths : NSObject

@property (class, readonly, copy, nonatomic) NSString *basePathForTesting;
@property (class, readonly) NSString *localComputeDirectory;
@property (class, readonly) NSString *localFlexibleStorageDirectory;
@property (class, readonly) NSString *syncDirectory;

+ (id)_systemRoot;
+ (id)_userHome;
+ (id)biomeTemporaryDirectoryForDomain:(unsigned long long)a0;
+ (id)biomeDirectoryForDomain:(unsigned long long)a0;
+ (id)_biomeDirectoryForDomain:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)_biomeUserDataDirectory:(unsigned long long)a0;
+ (id)_biomeSystemDataDirectory;
+ (id)pathForStreamType:(unsigned long long)a0 domain:(unsigned long long)a1;
+ (id)pathForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
+ (BOOL)getServiceDomain:(unsigned long long *)a0 subpath:(id *)a1 forPath:(id)a2;
+ (BOOL)pathIsManaged:(id)a0 domain:(unsigned long long *)a1;
+ (id)privacyPathname:(id)a0;
+ (id)privacyURLToString:(id)a0;
+ (BOOL)isTestPathOverridden;
+ (id)_pathForTesting;
+ (void)setBasePathForTestingWithPath:(id)a0;
+ (void)unsetBasePathForTesting;

@end
