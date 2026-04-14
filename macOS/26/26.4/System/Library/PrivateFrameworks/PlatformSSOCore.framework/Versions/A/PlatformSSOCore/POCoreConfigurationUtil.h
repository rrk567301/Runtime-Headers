@interface POCoreConfigurationUtil : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)appSSOEnabled;
+ (BOOL)platformSSODevModeEnabled;
+ (BOOL)platformSSOEnabled;
+ (void)updateTriggerFile;
+ (void)writeTriggerFileToPath:(id)a0;
+ (id)_platformSSOOldTriggerFile;
+ (id)platformSSOBaseSystemDevModeTriggerFilePath;
+ (id)platformSSOBaseSystemTriggerFilePath;
+ (id)platformSSODevModeTriggerFile;
+ (id)platformSSODevModeTriggerFilePath;
+ (id)platformSSOTriggerFile;
+ (id)platformSSOTriggerFilePath;

@end
