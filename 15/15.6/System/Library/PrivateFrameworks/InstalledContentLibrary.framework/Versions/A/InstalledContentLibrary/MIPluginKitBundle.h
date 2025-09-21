@class NSDictionary, NSString;

@interface MIPluginKitBundle : MIAppExtensionBundle {
    NSString *_extensionPointIdentifier;
}

@property (copy, nonatomic) NSDictionary *overlaidInfoPlist;
@property (readonly, copy, nonatomic) NSString *nsExtensionPointIdentifier;
@property (readonly, copy, nonatomic) NSString *exExtensionPointIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *extensionAttributes;
@property (readonly, nonatomic) char isWatchKitExtension;
@property (readonly, nonatomic) char isSiriIntentsExtension;
@property (readonly, nonatomic) char isSiriIntentsUIExtension;
@property (readonly, nonatomic) char isMessagePayloadProviderExtension;
@property (readonly, nonatomic) char isFileProviderNonUIExtension;
@property (readonly, nonatomic) char isMapsGeoServicesExtension;

+ (id)bundlesInParentBundle:(id)a0 overrideParentBundleIDForValidation:(id)a1 subDirectory:(id)a2 matchingPredicate:(id /* block */)a3 error:(id *)a4;
+ (id)bundlesInParentBundle:(id)a0 subDirectory:(id)a1 matchingPredicate:(id /* block */)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)extensionPointIdentifier;
- (id)_overlayDictionary:(id)a0 onDictionary:(id)a1;
- (char)_validateNSExtensionWithOverlaidDictionary:(id)a0 error:(id *)a1;
- (char)_validateXPCServiceWithOverlaidDictionary:(id)a0 error:(id *)a1;
- (char)mayContainFrameworks;
- (id)overlaidInfoPlistWithError:(id *)a0;
- (char)validateBundleMetadataWithError:(id *)a0;

@end
