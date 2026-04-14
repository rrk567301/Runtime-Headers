@class NSString, NSMutableArray, NSLocale;

@interface CKVTokenChainBuilder : NSObject {
    NSString *_normalizedString;
    NSLocale *_locale;
    NSMutableArray *_tokens;
}

- (id)initWithString:(id)a0 locale:(id)a1;
- (id)build;
- (void).cxx_destruct;
- (id)init;
- (void)addToken:(id)a0;

@end
