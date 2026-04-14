@class NSString;

@interface BMPaths : NSObject

@property (class, readonly, copy, nonatomic) NSString *basePathForTesting;
@property (class, readonly) NSString *syncDirectory;

+ (id)rootLibraryDirectory;
+ (id)rootBiomeDirectory;
+ (id)privacyPathname:(id)a0;
+ (id)pathForStreamType:(unsigned long long)a0;
+ (BOOL)isTestPathOverridden;
+ (void)setBasePathForTestingWithPath:(id)a0;
+ (void)unsetBasePathForTesting;
+ (id)localDSLDirectory;
+ (id)localFlexibleStorageDirectory;
+ (id)_simRootDirectory;
+ (id)_unitTestsRootDirectory;
+ (id)privacyURLToString:(id)a0;
+ (id)pathForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;

@end
