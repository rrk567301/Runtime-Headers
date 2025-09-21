@class NSCharacterSet;

@interface PunctuationFailure : NSObject <AutocorrectionResultClassifier> {
    NSCharacterSet *_punctuation;
}

- (id)init;
- (void).cxx_destruct;
- (char)doesMatchResult:(id)a0;

@end
