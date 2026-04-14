@interface CLSHolidayCalendarEventRulesFactory : NSObject

+ (id)_baseURL;
+ (id)_allEventRulesForEventRulesDictionaries:(id)a0 deviceRegionCode:(id)a1;
+ (id)_eventRulesDictionariesForURL:(id)a0;
+ (id)allSupportedCountryCodesInDeviceRegion:(id)a0;
+ (id)eventRulesForSourcesURL:(id)a0 deviceRegionCode:(id)a1;
+ (id)eventRulesInDeviceRegion:(id)a0;
+ (id)eventRulesURLForSourceURL:(id)a0;

@end
