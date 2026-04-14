@interface POConfigurationUtil : NSObject

+ (BOOL)platformSSOEnabled;
+ (BOOL)appSSOEnabled;
+ (void)updateTriggerFile;
+ (id)platformSSOTriggerFile;

@end
