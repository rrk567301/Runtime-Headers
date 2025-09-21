@class SEMTokenizer;

@interface KVTokenizer : NSObject

@property (readonly, nonatomic) SEMTokenizer *tokenizer;

- (id)initWithLocale:(id)a0;
- (id)locale;
- (void).cxx_destruct;
- (id)queryFromText:(id)a0;
- (void)enumerateTokensOfText:(id)a0 usingBlock:(id /* block */)a1;

@end
