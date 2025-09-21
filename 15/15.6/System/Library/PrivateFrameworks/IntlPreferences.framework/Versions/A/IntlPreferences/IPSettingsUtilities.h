@interface IPSettingsUtilities : NSObject

+ (void)setLanguage:(id)a0;
+ (void)setRegion:(id)a0;
+ (void)applyUserSettingsToSystemWithCompletion:(id /* block */)a0;
+ (void)mirrorToWatchIfNecessary;
+ (void)runPostLanguageChangeOperationsWithNotifications:(char)a0;
+ (void)setLanguage:(id)a0 postNotification:(char)a1;
+ (void)setLanguageAndRegion:(id)a0;
+ (void)setLanguageAndRegion:(id)a0 postNotification:(char)a1;
+ (void)setRegion:(id)a0 changeLanguageVariant:(char)a1 postNotification:(char)a2;
+ (void)setRegion:(id)a0 postNotification:(char)a1;
+ (void)writeLanguageAndLocaleConfigurationIfNeededWithCompletion:(id /* block */)a0;

@end
