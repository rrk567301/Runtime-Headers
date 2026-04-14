@class NSMutableString;

@interface NLCFROLanguageRecognizer : NLLanguageRecognizer {
    void *_tagger;
    NSMutableString *_string;
}

+ (id)dominantLanguageForString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)dominantLanguage;
- (void)processString:(id)a0;
- (id)languageHypothesesWithMaximum:(unsigned long long)a0;

@end
