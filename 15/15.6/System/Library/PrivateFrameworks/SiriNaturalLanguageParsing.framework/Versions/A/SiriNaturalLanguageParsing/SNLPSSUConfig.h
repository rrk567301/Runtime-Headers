@interface SNLPSSUConfig : NSObject

+ (char)isInternalInstall;
+ (id)loadAppShortcutAlwaysTriggeredAllowList;
+ (id)loadAppShortcutAlwaysTriggeredAllowListPlist;
+ (id)loadAppShortcutAlwaysTriggeredAllowListUserDefaults;
+ (id)loadPlistArrayFromURL:(id)a0;

@end
