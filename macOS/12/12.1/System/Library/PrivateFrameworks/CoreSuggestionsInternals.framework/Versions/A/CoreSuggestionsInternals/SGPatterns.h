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
+ (id)calculateLangResolutionOrder;
+ (void)changeLanguageOrPatternData;
+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)a0;
+ (void)forceLanguagesTo:(id)a0;
+ (id)patternsForIdentifier:(id)a0;
+ (id)patternsForClass:(Class)a0;
+ (void)setPatternsDictForTesting:(id)a0;
+ (void)resetToDefaultPatternsForTesting;
+ (void)useAllLanguagesAtOnce:(BOOL)a0;
+ (void)clearAllRegexCaches;
+ (void)_reinstateDeath;
+ (void)pauseCacheEvictionTemporarily;
+ (id)languagePartOfLanguageCode:(id)a0;
+ (id)countryCodeFromLanguageCode:(id)a0;
+ (id)fallbackLanguageCodeForCountryCode:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resetIfNeeded;
- (id)rawValuesForKey:(id)a0;
- (id)rawValueForKey:(id)a0;
- (id)rawValueOrDataForKey:(id)a0;
- (id)stringSetMatcherForKey:(id)a0;
- (id)regex2ForKey:(id)a0;
- (void)_clearRegexCache;
- (void)_becomeImmuneToDeath;

@end
