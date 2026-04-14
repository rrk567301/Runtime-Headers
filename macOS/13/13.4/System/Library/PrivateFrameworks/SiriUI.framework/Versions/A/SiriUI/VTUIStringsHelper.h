@class NSString, NSDictionary;

@interface VTUIStringsHelper : NSObject {
    NSDictionary *_localizedStringTable;
    NSDictionary *_localizedStringTableForSiriLanguage;
}

@property (readonly, nonatomic) NSString *heySiriTriggerPhrase;

+ (void)initialize;
+ (id)sharedStringsHelper;

- (id)init;
- (void).cxx_destruct;
- (id)_siriLanguageSubstitutedString:(id)a0;
- (id)_bundleStringTableForLanguages:(id)a0;
- (void)setSiriLanguage:(id)a0;
- (void)setupForCurrentLocaleAndSiriLanguage;
- (id)siriLanguageStringForKey:(id)a0;
- (id)uiLocalizedStringForKey:(id)a0;

@end
