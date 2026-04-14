@class NSString;

@interface MIAppExtensionBundle : MIExecutableBundle

@property (copy, nonatomic) NSString *validationOverrideParentBundleID;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;

- (void).cxx_destruct;
- (id)initForTesting;
- (id)minimumOSVersion;
- (id)extensionCacheEntryWithError:(id *)a0;
- (BOOL)hasDotInBundleIDSuffixWithError:(id *)a0;
- (id)initWithBundleParentURL:(id)a0 parentSubdirectory:(id)a1 bundleName:(id)a2 error:(id *)a3;
- (void)setBundleParentDirectoryURL:(id)a0;
- (BOOL)validateBundleMetadataWithError:(id *)a0;

@end
