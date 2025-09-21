@class NSDictionary, NSString;

@interface MIAppExtensionBundle : MIExecutableBundle

@property (copy, nonatomic) NSDictionary *extensionCacheEntry;
@property (nonatomic) unsigned long long extensionPoint;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, nonatomic) BOOL targetsAppleExtensionPoint;
@property (readonly, nonatomic) BOOL targetsBrowserExtensionPoint;
@property (readonly, nonatomic) BOOL installableIfAppleAppExtensionsNotInExtensionCache;
@property (copy, nonatomic) NSString *validationOverrideParentBundleID;

- (id)initForTesting;
- (void).cxx_destruct;
- (id)minimumOSVersion;
- (id)extensionCacheEntryWithError:(id *)a0;
- (BOOL)validateBundleMetadataWithError:(id *)a0;
- (BOOL)validateHasCorrespondingEntitlements:(id)a0 error:(id *)a1;
- (BOOL)validateHasNoDotInBundleIDSuffix:(id *)a0;

@end
