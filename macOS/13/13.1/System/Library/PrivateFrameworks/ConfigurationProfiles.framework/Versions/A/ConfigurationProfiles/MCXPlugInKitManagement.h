@interface MCXPlugInKitManagement : NSObject

+ (id)localizedNameForExtensionID:(id)a0;
+ (id)getEffectiveSettings;
+ (BOOL)allowUseOfPlugIn:(id)a0 byPid:(int)a1 flags:(unsigned long long)a2;
+ (id)publicExtensionPoints;
+ (id)settingsDomain;
+ (id)managementChangedNotificationName;
+ (id)settingsKeys;
+ (id)buildSettingsFromPayloads:(id)a0;

@end
