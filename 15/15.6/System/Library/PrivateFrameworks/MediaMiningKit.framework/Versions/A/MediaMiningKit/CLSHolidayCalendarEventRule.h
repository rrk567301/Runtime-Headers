@class NSArray, CLSHolidayCalendarEventRuleRequiredTraits, NSDictionary, NSString;
@protocol CLSHolidayCalendarEventDateRuleDelegate;

@interface CLSHolidayCalendarEventRule : NSObject

@property (readonly, nonatomic) CLSHolidayCalendarEventRuleRequiredTraits *requiredTraits;
@property (readonly, nonatomic) NSArray *defaultDateRules;
@property (readonly, nonatomic) NSDictionary *commonCelebratedCountryCodes;
@property (readonly, nonatomic) NSDictionary *commonCelebratedLanguages;
@property (weak, nonatomic) id<CLSHolidayCalendarEventDateRuleDelegate> dateRuleDelegate;
@property (readonly, nonatomic) char isCelebration;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) double defaultLocationScore;
@property (readonly, nonatomic) char skipSceneCriteriaIfInteresting;
@property (readonly, nonatomic) char triggerMemoryForAllLocales;
@property (readonly, nonatomic) char triggerMemoryForCommonCelebratedCountryCodes;
@property (readonly, nonatomic) char backfillForAllCountryCodes;
@property (readonly, nonatomic) char backfillForCommonCelebratedCountryCodes;
@property (readonly, nonatomic) char backfillForCommonCelebratedLanguages;

+ (id)localizedNameForName:(id)a0;
+ (id)localizedSynonymsForHolidayName:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)explicitlySupportedCountryCodes;
- (id)scoreForCountryCode:(id)a0 sceneNames:(id)a1;
- (id)_dateRuleForYear:(long long)a0 countryCode:(id)a1;
- (id)_dateRuleForYear:(long long)a0 supportedLocale:(id)a1;
- (char)_isMatchingOnlyLocalDate:(id)a0 countryCode:(id)a1;
- (id)_localeOverrideForDescription:(id)a0 uppercaseLocaleCode:(char)a1;
- (id)_scoreForEventOverride:(id)a0 sceneNames:(id)a1;
- (id)allSceneNames;
- (char)backfillForCountryCode:(id)a0;
- (char)backfillForLanguageCodes:(id)a0;
- (char)evaluateOnlyTraits:(id)a0 evaluateLocationTraits:(char)a1;
- (char)evaluateWithLocalDate:(id)a0 traits:(id)a1 countryCode:(id)a2;
- (id)initWithEventDescription:(id)a0;
- (double)languageScoreForLanguageCode:(id)a0;
- (id)localDateByEvaluatingRuleForYear:(long long)a0 countryCode:(id)a1;
- (id)localDateByEvaluatingRuleForYear:(long long)a0 languageCode:(id)a1;
- (double)locationScoreForCountryCode:(id)a0;
- (unsigned long long)peopleTrait;
- (id)scoreForLanguageCode:(id)a0 sceneNames:(id)a1;
- (char)triggerMemoryForCountryCode:(id)a0;

@end
