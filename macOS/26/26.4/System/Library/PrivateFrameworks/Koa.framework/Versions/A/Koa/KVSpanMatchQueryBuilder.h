@class SEMSpanMatchQueryBuilder;

@interface KVSpanMatchQueryBuilder : NSObject {
    SEMSpanMatchQueryBuilder *_builder;
}

- (id)build;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (void)addTokenWithValue:(id)a0 cleanValue:(id)a1 normalizedValues:(id)a2 beginIndex:(unsigned int)a3 endIndex:(unsigned int)a4 isSignificant:(BOOL)a5 isWitespace:(BOOL)a6;

@end
