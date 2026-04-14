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
+ (void)pauseCacheEvictionTemporarily;
+ (void)_reinstateDeath;
+ (void)changeLanguageOrPatternData;
+ (void)forceLanguagesTo:(id)a0;
+ (id)languagePartOfLanguageCode:(id)a0;
+ (id)patternsForIdentifier:(id)a0;
+ (id)patternsForClass:(Class)a0;
+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)a0;
+ (void)clearAllRegexCaches;
+ (id)fallbackLanguageCodeForCountryCode:(id)a0;
+ (id)calculateLangResolutionOrder;
+ (void)setPatternsDictForTesting:(id)a0;
+ (void)useAllLanguagesAtOnce:(BOOL)a0;
+ (id)countryCodeFromLanguageCode:(id)a0;

- (void)_becomeImmuneToDeath;
- (id)rawValueForKey:(id)a0;
- (void)_clearRegexCache;
- (id)init;
- (id)rawValueOrDataForKey:(id)a0;
- (id)stringSetMatcherForKey:(id)a0;
- (void).cxx_destruct;
- (void)resetIfNeeded;
- (void)dealloc;
- (id)rawValuesForKey:(id)a0;
- (id)regex2ForKey:(id)a0;

@end
