@class NSString, NSArray, NSMutableSet, NSCache;

@interface SGPatterns : NSObject {
    NSString *_classKey;
    NSArray *_langResolutionOrder;
    NSCache *_compiledRegexes2;
    NSString *_language;
    NSMutableSet *_regexpKeysSeen;
    int _localLanguageVersion;
}

+ (void)initialize;
+ (void)clearAllRegexCaches;
+ (void)useAllLanguagesAtOnce:(BOOL)a0;
+ (id)patternsForClass:(Class)a0;
+ (void)changeLanguageOrPatternData;
+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)a0;
+ (id)languagePartOfLanguageCode:(id)a0;
+ (id)countryCodeFromLanguageCode:(id)a0;
+ (id)fallbackLanguageCodeForCountryCode:(id)a0;
+ (id)patternsForIdentifier:(id)a0;
+ (id)calculateLangResolutionOrder;
+ (void)_reinstateDeath;
+ (void)forceLanguagesTo:(id)a0;
+ (void)setPatternsDictForTesting:(id)a0;
+ (void)resetToDefaultPatternsForTesting;
+ (void)pauseCacheEvictionTemporarily;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)regex2ForKey:(id)a0;
- (id)rawValueForKey:(id)a0;
- (id)stringSetMatcherForKey:(id)a0;
- (void)resetIfNeeded;
- (void)_clearRegexCache;
- (void)_becomeImmuneToDeath;
- (id)rawValuesForKey:(id)a0;
- (id)rawValueOrDataForKey:(id)a0;

@end
