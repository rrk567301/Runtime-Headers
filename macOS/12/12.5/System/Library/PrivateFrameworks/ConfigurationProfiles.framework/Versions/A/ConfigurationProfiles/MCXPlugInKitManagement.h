@interface MCXPlugInKitManagement : NSObject

+ (id)publicExtensionPoints;
+ (id)localizedNameForExtensionID:(id)a0;
+ (id)getEffectiveSettings;
+ (BOOL)allowUseOfPlugIn:(id)a0 byPid:(int)a1 flags:(unsigned long long)a2;
+ (id)settingsDomain;
+ (id)managementChangedNotificationName;
+ (id)settingsKeys;
+ (id)buildSettingsFromPayloads:(id)a0;

@end
