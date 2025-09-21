@class NSArray, CLSHolidayCalendarEventRuleRequiredTraits, NSDictionary, NSString;
@protocol CLSHolidayCalendarEventDateRuleDelegate;

@interface CLSHolidayCalendarEventRule : NSObject

@property (readonly, nonatomic) CLSHolidayCalendarEventRuleRequiredTraits *requiredTraits;
@property (readonly, nonatomic) NSArray *defaultDateRules;
@property (readonly, nonatomic) NSDictionary *commonCelebratedCountryCodes;
@property (readonly, nonatomic) NSDictionary *commonCelebratedLanguages;
@property (weak, nonatomic) id<CLSHolidayCalendarEventDateRuleDelegate> dateRuleDelegate;
@property (readonly, nonatomic) BOOL isCelebration;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) double defaultLocationScore;
@property (readonly, nonatomic) BOOL skipSceneCriteriaIfInteresting;
@property (readonly, nonatomic) BOOL triggerMemoryForAllLocales;
@property (readonly, nonatomic) BOOL triggerMemoryForCommonCelebratedCountryCodes;
@property (readonly, nonatomic) BOOL backfillForAllCountryCodes;
@property (readonly, nonatomic) BOOL backfillForCommonCelebratedCountryCodes;
@property (readonly, nonatomic) BOOL backfillForCommonCelebratedLanguages;

+ (id)localizedNameForName:(id)a0;
+ (id)localizedSynonymsForHolidayName:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)explicitlySupportedCountryCodes;
- (id)scoreForCountryCode:(id)a0 sceneNames:(id)a1;
- (id)_dateRuleForDate:(id)a0 countryCode:(id)a1;
- (id)_dateRuleForDate:(id)a0 supportedLocale:(id)a1;
- (void)_enumerateDatesFromStartDate:(id)a0 toEndDate:(id)a1 supportedLocale:(id)a2 usingBlock:(id /* block */)a3;
- (BOOL)_isMatchingOnlyLocalDate:(id)a0 countryCode:(id)a1;
- (id)_localeOverrideForDescription:(id)a0 uppercaseLocaleCode:(BOOL)a1;
- (id)_scoreForEventOverride:(id)a0 sceneNames:(id)a1;
- (id)allSceneNames;
- (BOOL)backfillForCountryCode:(id)a0;
- (BOOL)backfillForLanguageCodes:(id)a0;
- (void)enumerateDatesFromStartDate:(id)a0 toEndDate:(id)a1 countryCode:(id)a2 usingBlock:(id /* block */)a3;
- (BOOL)evaluateOnlyTraits:(id)a0 evaluateLocationTraits:(BOOL)a1;
- (BOOL)evaluateWithLocalDate:(id)a0 traits:(id)a1 countryCode:(id)a2;
- (id)initWithEventDescription:(id)a0 deviceRegionCode:(id)a1;
- (double)languageScoreForLanguageCode:(id)a0;
- (id)localDateByEvaluatingRuleForDate:(id)a0 countryCode:(id)a1;
- (id)localDateByEvaluatingRuleForDate:(id)a0 languageCode:(id)a1;
- (double)locationScoreForCountryCode:(id)a0;
- (unsigned long long)peopleTrait;
- (id)scoreForLanguageCode:(id)a0 sceneNames:(id)a1;
- (BOOL)triggerMemoryForCountryCode:(id)a0;

@end
