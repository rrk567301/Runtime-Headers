@interface IPSettingsUtilities : NSObject

+ (void)setLanguage:(id)a0;
+ (void)setRegion:(id)a0;
+ (void)setLanguageAndRegion:(id)a0;
+ (void)runPostLanguageChangeOperations;
+ (void)applyUserSettingsToSystemWithCompletion:(id /* block */)a0;
+ (void)writeLanguageAndLocaleConfigurationIfNeededWithCompletion:(id /* block */)a0;
+ (void)mirrorToWatchIfNecessary;

@end
