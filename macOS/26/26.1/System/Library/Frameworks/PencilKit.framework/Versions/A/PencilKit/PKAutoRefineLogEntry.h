@class NSArray;

@interface PKAutoRefineLogEntry : PKHandwritingSynthesisLogEntry {
    NSArray *_unrefinedStrokes;
}

@property (readonly) NSArray *refinedStrokes;
@property (readonly) NSArray *originalStrokes;
@property (readonly) NSArray *unchangedStrokes;
@property (readonly) long long refinedWordCount;
@property (readonly) double tokenDeviation;
@property (readonly) double tokenTranslation;
@property (readonly) BOOL isAutoRefined;

- (void).cxx_destruct;
- (id)contextStrokes;
- (void)estimateMetricsWithTokenDeviation:(double)a0 tokenHeight:(double)a1;
- (id)initWithRefinedStrokes:(id)a0 originalStrokes:(id)a1 unchangedStrokes:(id)a2 locale:(id)a3 refinedWordCount:(long long)a4 duration:(double)a5 isAutoRefined:(BOOL)a6 debugInfo:(id)a7;
- (id)synthesizedStrokes;

@end
