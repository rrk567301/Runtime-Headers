@interface SystemPreferences : NSObject

+ (BOOL)openInternetAccountsPreferences;
+ (BOOL)openNetworkPreferences:(id)a0;
+ (BOOL)openDateAndTimePreferences;
+ (BOOL)openLanguageAndRegionPreferences;
+ (BOOL)openSecurityAndPrivacyPreferences:(id)a0;
+ (BOOL)_openPreferencePaneAtPath:(id)a0 subsection:(id)a1;
+ (BOOL)openNotificationsPreferences;

@end
