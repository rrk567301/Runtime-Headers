@interface POConfigurationUtil : NSObject

+ (char)platformSSOEnabledForUsername:(id)a0;
+ (char)appSSOEnabled;
+ (char)platformSSOEnabled;
+ (id)platformSSOTriggerFile;
+ (void)updateTriggerFile;

@end
