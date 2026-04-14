@interface SystemPreferences : NSObject

+ (BOOL)openDateAndTimePreferences;
+ (BOOL)openLanguageAndRegionPreferences;
+ (BOOL)openNetworkPreferences:(id)a0;
+ (BOOL)openAppleIDPreferences;
+ (BOOL)_openSettingsExtension:(id)a0 subsection:(id)a1;

@end
