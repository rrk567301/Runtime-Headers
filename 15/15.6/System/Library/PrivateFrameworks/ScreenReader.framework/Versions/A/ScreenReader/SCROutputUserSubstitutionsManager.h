@class NSLock, NSArray, SCRCUserDefaults;

@interface SCROutputUserSubstitutionsManager : NSObject {
    SCRCUserDefaults *_userDefaults;
    NSLock *_cachedUserSubstitutionsLock;
    NSArray *_cachedUserSubstitutions;
    struct URegularExpression **_smartRegularExpressions;
    struct URegularExpression **_dumbRegularExpressions;
}

+ (id)defaultManager;
+ (id)findAndReplaceSingleDoubleQuoteSymbolsInString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_compileRegularExpressions:(long long)a0;
- (struct URegularExpression { } *)_createRegexFromString:(id)a0;
- (void)_handleUserDefaultsTransactionNotification:(id)a0;
- (char)_replaceTextInString:(id)a0 withSubstitution:(id)a1 withPunctuationTable:(id)a2;
- (id)createUserSubstitutionsWithStorageArray:(id)a0;
- (void)loadUserSubstitutionsFromPrefs;
- (char)makeRegexSubstitutionsInAction:(id)a0 componentName:(id)a1 component:(id)a2;
- (char)makeSubstitutionInString:(id)a0 componentName:(id)a1 component:(id)a2 domainIdentifier:(id)a3 usePunctuationSettings:(char)a4 ignoreSinglePunctuation:(char)a5 ignorePunctuationOnlyStrings:(char)a6;
- (id)substituteComposedCharacter:(id)a0 inAction:(id)a1 component:(id)a2;

@end
