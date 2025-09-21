@interface POCoreConfigurationUtil : NSObject

+ (char)isInternalBuild;
+ (char)appSSOEnabled;
+ (char)platformSSODevModeEnabled;
+ (char)platformSSOEnabled;
+ (id)platformSSOTriggerFile;
+ (void)updateTriggerFile;
+ (void)writeTriggerFileToPath:(id)a0;
+ (id)platformSSODevModeTriggerFile;

@end
