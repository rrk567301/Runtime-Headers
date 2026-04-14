@class NSDictionary, NSLocale;

@interface TIDictionaryLookup : NSObject

@property (retain) NSLocale *sourceLocale;
@property (retain) NSLocale *targetLocale;
@property (retain) NSDictionary *translationPairs;

- (void).cxx_destruct;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (id)translationForString:(id)a0;

@end
