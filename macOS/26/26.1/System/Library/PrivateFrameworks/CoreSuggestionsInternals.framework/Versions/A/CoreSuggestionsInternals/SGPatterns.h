@class NSString, NSArray, NSMutableSet, NSCache;

@interface SGPatterns : NSObject {
    NSString *_classKey;
    NSArray *_langResolutionOrder;
    NSCache *_compiledRegexes2;
    NSString *_language;
    NSMutableSet *_regexpKeysSeen;
    int _localLanguageVersion;
}

+ (void)_reinstateDeath;
+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)a0;
+ (void)clearAllRegexCaches;
+ (void)initialize;
+ (id)patternsForIdentifier:(id)a0;
+ (void)useAllLanguagesAtOnce:(BOOL)a0;
+ (id)fallbackLanguageCodeForCountryCode:(id)a0;
+ (void)pauseCacheEvictionTemporarily;
+ (void)resetToDefaultPatternsForTesting;
+ (id)patternsForClass:(Class)a0;
+ (void)changeLanguageOrPatternData;
+ (void)setPatternsDictForTesting:(id)a0;
+ (id)calculateLangResolutionOrder;
+ (id)languagePartOfLanguageCode:(id)a0;
+ (void)forceLanguagesTo:(id)a0;
+ (id)countryCodeFromLanguageCode:(id)a0;

- (id)rawValueOrDataForKey:(id)a0;
- (void)_becomeImmuneToDeath;
- (void)resetIfNeeded;
- (id)regex2ForKey:(id)a0;
- (id)stringSetMatcherForKey:(id)a0;
- (void)dealloc;
- (id)rawValuesForKey:(id)a0;
- (void)_clearRegexCache;
- (void).cxx_destruct;
- (id)rawValueForKey:(id)a0;
- (id)init;

@end
