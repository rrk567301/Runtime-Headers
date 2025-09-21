@class NSArray;

@interface PKHandwritingSynthesisGenerationLogEntry : PKHandwritingSynthesisLogEntry {
    NSArray *_strokegroups;
}

- (void).cxx_destruct;
- (id)contextStrokes;
- (id)originalStrokes;
- (id)initWithSynthesizedStrokeGroups:(id)a0 debugInfo:(id)a1;
- (id)synthesizedStrokes;

@end
