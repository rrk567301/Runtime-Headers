@interface IMServicePlugInBundle : NSBundle

+ (id)_servicePlugInBundleMap;
+ (id)allServicePlugInBundles;
+ (id)servicePlugInBundleForIdentifier:(id)a0;

- (id)displayName;
- (id)internalName;
- (id)defaultHandleCapabilities;
- (unsigned int)idSensitivity;
- (id)sandboxProfileName;
- (id)serviceImageURL;
- (id)abInstantMessageProperties;
- (id)buddyListTitle;
- (id)defaultValueOfAccountSetting:(id)a0;
- (BOOL)isDefaultSandbox;
- (id)serviceCapabilities;
- (BOOL)usesAccountSetting:(id)a0;

@end
