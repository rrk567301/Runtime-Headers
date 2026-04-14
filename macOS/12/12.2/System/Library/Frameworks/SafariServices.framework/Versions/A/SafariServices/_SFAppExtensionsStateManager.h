@interface _SFAppExtensionsStateManager : NSObject

+ (id)legacyReadExtensionsStateForSafariWithKeychainAccount:(long long)a0 keychainService:(id)a1 keychainLabel:(id)a2;
+ (id)extensionsStateWithoutUnsignedExtensions:(id)a0;
+ (id)extensionFromComposedIdentifier:(id)a0 matchingExtensionPointIdentifier:(id)a1;

@end
