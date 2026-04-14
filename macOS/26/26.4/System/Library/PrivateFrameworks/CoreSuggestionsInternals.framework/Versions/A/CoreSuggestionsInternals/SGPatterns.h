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
+ (id)patternsForIdentifier:(id)a0;
+ (id)calculateLangResolutionOrder;
+ (void)clearAllRegexCaches;
+ (void)resetToDefaultPatternsForTesting;
+ (void)pauseCacheEvictionTemporarily;
+ (void)forceLanguagesTo:(id)a0;
+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)a0;
+ (void)setPatternsDictForTesting:(id)a0;
+ (void)useAllLanguagesAtOnce:(BOOL)a0;
+ (void)_reinstateDeath;
+ (id)patternsForClass:(Class)a0;
+ (id)countryCodeFromLanguageCode:(id)a0;
+ (id)languagePartOfLanguageCode:(id)a0;
+ (id)fallbackLanguageCodeForCountryCode:(id)a0;
+ (void)changeLanguageOrPatternData;

- (id)rawValueOrDataForKey:(id)a0;
- (void)_becomeImmuneToDeath;
- (void)resetIfNeeded;
- (void)_clearRegexCache;
- (void).cxx_destruct;
- (id)stringSetMatcherForKey:(id)a0;
- (id)init;
- (id)rawValuesForKey:(id)a0;
- (id)regex2ForKey:(id)a0;
- (void)dealloc;
- (id)rawValueForKey:(id)a0;

@end
