@class NSDictionary, _PASLRUCache;

@interface PRELocaleDetection : NSObject {
    NSDictionary *_preferredLocales;
    _PASLRUCache *_lastConfidentLocaleForSender;
}

+ (id)sharedInstance;
+ (BOOL)isLanguageMismatchedForIdentifier:(id)a0 withIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLanguageLimit:(unsigned long long)a0 withPreferredLocales:(id)a1;
- (id)_getPreferredLocales;
- (id)_userLocaleDetectedFromString:(id)a0;
- (id)localeForMessage:(id)a0 defaultLocale:(id)a1 sender:(id)a2;

@end
