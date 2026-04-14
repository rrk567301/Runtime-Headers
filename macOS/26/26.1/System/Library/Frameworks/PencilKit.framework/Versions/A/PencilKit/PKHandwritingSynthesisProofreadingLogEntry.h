@class NSArray;

@interface PKHandwritingSynthesisProofreadingLogEntry : PKHandwritingSynthesisLogEntry {
    NSArray *_generatedStrokes;
    NSArray *_replacedStrokes;
}

- (void).cxx_destruct;
- (id)contextStrokes;
- (id)originalStrokes;
- (id)initWithSynthesizedStrokes:(id)a0 originalStrokes:(id)a1 debugInfo:(id)a2;
- (id)synthesizedStrokes;

@end
