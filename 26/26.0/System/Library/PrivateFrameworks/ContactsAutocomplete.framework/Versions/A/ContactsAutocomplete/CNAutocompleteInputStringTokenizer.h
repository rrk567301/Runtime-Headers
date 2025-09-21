@class CNFuture;

@interface CNAutocompleteInputStringTokenizer : NSObject

@property (retain) CNFuture *nameStringTokenizer;

+ (id)lazyNameStringTokenizerWithLocale:(id)a0;
+ (id)tokensFromString:(id)a0;

- (id)initWithLocale:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)expandCJKNames;
- (id)tokensFromString:(id)a0;

@end
