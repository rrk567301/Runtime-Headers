@class NSDictionary, NSString;

@interface MIAppExtensionBundle : MIExecutableBundle

@property (copy, nonatomic) NSDictionary *extensionCacheEntry;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, nonatomic) BOOL targetsAppleExtensionPoint;
@property (copy, nonatomic) NSString *validationOverrideParentBundleID;

- (void).cxx_destruct;
- (id)initForTesting;
- (id)minimumOSVersion;
- (id)extensionCacheEntryWithError:(id *)a0;
- (void)setBundleParentDirectoryURL:(id)a0;
- (BOOL)validateBundleMetadataWithError:(id *)a0;
- (BOOL)validateHasNoDotInBundleIDSuffix:(id *)a0;

@end
