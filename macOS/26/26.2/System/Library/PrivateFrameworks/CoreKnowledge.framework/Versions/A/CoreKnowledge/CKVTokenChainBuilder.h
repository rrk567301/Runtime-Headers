@class NSString, NSMutableArray, NSLocale;

@interface CKVTokenChainBuilder : NSObject {
    NSString *_normalizedString;
    NSLocale *_locale;
    NSMutableArray *_tokens;
}

- (id)build;
- (id)initWithString:(id)a0 locale:(id)a1;
- (void).cxx_destruct;
- (void)addToken:(id)a0;
- (id)init;

@end
