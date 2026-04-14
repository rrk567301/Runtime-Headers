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
+ (void)resetToDefaultPatternsForTesting;
+ (void)forceLanguagesTo:(id)a0;
+ (id)countryCodeFromLanguageCode:(id)a0;
+ (id)patternsForClass:(Class)a0;
+ (void)_reinstateDeath;
+ (id)patternsForIdentifier:(id)a0;
+ (void)changeLanguageOrPatternData;
+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)a0;
+ (void)pauseCacheEvictionTemporarily;
+ (id)calculateLangResolutionOrder;
+ (void)setPatternsDictForTesting:(id)a0;
+ (void)useAllLanguagesAtOnce:(BOOL)a0;
+ (id)languagePartOfLanguageCode:(id)a0;
+ (id)fallbackLanguageCodeForCountryCode:(id)a0;
+ (void)clearAllRegexCaches;

- (void)_clearRegexCache;
- (id)stringSetMatcherForKey:(id)a0;
- (void).cxx_destruct;
- (id)rawValueOrDataForKey:(id)a0;
- (void)resetIfNeeded;
- (id)rawValueForKey:(id)a0;
- (id)rawValuesForKey:(id)a0;
- (id)init;
- (void)_becomeImmuneToDeath;
- (id)regex2ForKey:(id)a0;
- (void)dealloc;

@end
