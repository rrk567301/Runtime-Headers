@class NSString, NSMutableArray, NSLocale;

@interface CKVTokenChainBuilder : NSObject {
    NSString *_normalizedString;
    NSLocale *_locale;
    NSMutableArray *_tokens;
}

- (id)initWithString:(id)a0 locale:(id)a1;
- (void)addToken:(id)a0;
- (id)init;
- (id)build;
- (void).cxx_destruct;

@end
