@class NSDictionary, NSString;

@interface MIAppExtensionBundle : MIExecutableBundle

@property (copy, nonatomic) NSDictionary *extensionCacheEntry;
@property (nonatomic) unsigned long long extensionPoint;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, nonatomic) char targetsAppleExtensionPoint;
@property (readonly, nonatomic) char targetsBrowserExtensionPoint;
@property (copy, nonatomic) NSString *validationOverrideParentBundleID;

- (void).cxx_destruct;
- (id)initForTesting;
- (id)minimumOSVersion;
- (id)extensionCacheEntryWithError:(id *)a0;
- (void)setBundleParentDirectoryURL:(id)a0;
- (char)validateBundleMetadataWithError:(id *)a0;
- (char)validateHasCorrespondingEntitlements:(id)a0 error:(id *)a1;
- (char)validateHasNoDotInBundleIDSuffix:(id *)a0;

@end
