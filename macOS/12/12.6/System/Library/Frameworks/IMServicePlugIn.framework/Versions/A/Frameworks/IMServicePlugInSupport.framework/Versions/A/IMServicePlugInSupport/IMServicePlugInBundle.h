@interface IMServicePlugInBundle : NSBundle

+ (id)_servicePlugInBundleMap;
+ (id)servicePlugInBundleForIdentifier:(id)a0;
+ (id)allServicePlugInBundles;

- (id)displayName;
- (id)internalName;
- (id)defaultHandleCapabilities;
- (id)sandboxProfileName;
- (BOOL)usesAccountSetting:(id)a0;
- (id)defaultValueOfAccountSetting:(id)a0;
- (unsigned int)idSensitivity;
- (id)buddyListTitle;
- (id)serviceCapabilities;
- (BOOL)isDefaultSandbox;
- (id)abInstantMessageProperties;
- (id)serviceImageURL;

@end
