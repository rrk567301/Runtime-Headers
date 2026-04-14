@class NSLinguisticTagger, NSMutableDictionary;

@interface SCROBrailleSubstitutionManager : NSObject {
    NSMutableDictionary *_lookup;
    NSLinguisticTagger *_linguisticTagger;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _taggerLock;
}

+ (id)sharedInstance;
+ (id)_bundleForStrings;

- (id)init;
- (void).cxx_destruct;
- (void)_loadLanguageSubstitutions:(id)a0 intoDictionary:(id)a1;
- (id)brailleSubstitutionForType:(long long)a0 withLanguage:(id)a1;
- (void)_ensureLanguageDataPresent:(id)a0;
- (id)stringWithBrailleSubstitutions:(id)a0 withLanguage:(id)a1;

@end
