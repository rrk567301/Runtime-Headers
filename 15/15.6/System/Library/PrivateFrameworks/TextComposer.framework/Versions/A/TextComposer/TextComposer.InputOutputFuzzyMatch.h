@interface TextComposer.InputOutputFuzzyMatch : NSObject {
    void /* unknown type, empty encoding */ input;
    void /* unknown type, empty encoding */ inputTokens;
    void /* unknown type, empty encoding */ stopWords;
    void /* unknown type, empty encoding */ exemptionRegexList;
}

+ (id)tokenize:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInput:(id)a0 stopWords:(id)a1 exemptionRegexStringList:(id)a2;
- (char)isExactMatchWithOutputWordTokens:(id)a0 threshold:(float)a1 alwaysAllowOneMistake:(char)a2;
- (char)isFuzzyMatchWithOutputWordTokens:(id)a0 threshold:(float)a1 alwaysAllowOneMistake:(char)a2;

@end
