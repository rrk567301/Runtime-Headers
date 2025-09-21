@class NSDictionary, NSString;

@interface MIExtensionKitBundle : MIAppExtensionBundle {
    NSString *_extensionPointIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *extensionAttributes;

+ (id)bundlesInParentBundle:(id)a0 subDirectory:(id)a1 matchingPredicate:(id /* block */)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)extensionPointIdentifier;
- (char)_validateDelegateClassWithError:(id *)a0;
- (char)_validatePresenceOfSwiftEntrySectionInFile:(int)a0 shouldHaveSwiftEntry:(char)a1 withError:(id *)a2;
- (char)getMayTargetThirdPartyExtensionPoint:(char *)a0 withError:(id *)a1;
- (char)validateBundleMetadataWithError:(id *)a0;

@end
