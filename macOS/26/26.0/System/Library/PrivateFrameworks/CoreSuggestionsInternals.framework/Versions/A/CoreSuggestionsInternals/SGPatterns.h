@class NSString, NSArray, NSMutableSet, NSCache;

@interface SGPatterns : NSObject {
    NSString *_classKey;
    NSArray *_langResolutionOrder;
    NSCache *_compiledRegexes2;
    NSString *_language;
    NSMutableSet *_regexpKeysSeen;
    int _localLanguageVersion;
}

+ (void)setPatternsDictForTesting:(id)a0;
+ (void)_reinstateDeath;
+ (void)clearAllRegexCaches;
+ (void)initialize;
+ (id)languagePartOfLanguageCode:(id)a0;
+ (id)patternsForIdentifier:(id)a0;
+ (void)resetToDefaultPatternsForTesting;
+ (id)fallbackLanguageCodeForCountryCode:(id)a0;
+ (void)forceLanguagesTo:(id)a0;
+ (id)calculateLangResolutionOrder;
+ (void)changeLanguageOrPatternData;
+ (id)patternsForClass:(Class)a0;
+ (id)countryCodeFromLanguageCode:(id)a0;
+ (void)pauseCacheEvictionTemporarily;
+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)a0;
+ (void)useAllLanguagesAtOnce:(BOOL)a0;

- (id)rawValueOrDataForKey:(id)a0;
- (void)dealloc;
- (id)init;
- (id)rawValueForKey:(id)a0;
- (id)regex2ForKey:(id)a0;
- (id)stringSetMatcherForKey:(id)a0;
- (void)resetIfNeeded;
- (void)_becomeImmuneToDeath;
- (id)rawValuesForKey:(id)a0;
- (void)_clearRegexCache;
- (void).cxx_destruct;

@end
