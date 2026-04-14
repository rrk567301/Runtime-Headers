@class NSString, NSArray, CRLanguageResourcesManager, CRLineWrappingClassifier, NSMutableArray;
@protocol CRLineWrappable;

@interface CRLineWrappingContext : NSObject {
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; unsigned int *__cap_; } _contextTokens;
    BOOL _active;
    NSString *_text;
    unsigned long long _lineCount;
    NSMutableArray *_results;
    CRLanguageResourcesManager *_lrManager;
    unsigned long long _contextSize;
    double _lineHeightSum;
    long long _verticalSpacingSumCount;
    double _verticalSpacingSum;
    CRLineWrappingClassifier *_classifier;
}

@property (readonly) NSString *text;
@property (readonly) NSString *locale;
@property (readonly) unsigned long long lineCount;
@property (readonly) id<CRLineWrappable> lastFeature;
@property (readonly) BOOL usesWordTokens;
@property (readonly) BOOL shouldConsiderLetterCase;
@property (readonly) BOOL active;
@property (readonly) NSArray *contextResults;
@property (readonly) double averageVerticalSpacing;
@property (readonly) double averageLineHeight;

- (id)initWithLocale:(id)a0;
- (void)dealloc;
- (BOOL)isRTL;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resetContext;
- (void)addResult:(id)a0 mergeOversegmentation:(BOOL)a1;
- (double)charLMScoreByAddingString:(id)a0 eosScore:(double *)a1;
- (BOOL)classifierShouldCorrectOverwrappingWithEvaluation:(long long)a0 correctionMode:(long long)a1;
- (BOOL)classifierShouldInsertLineBreakForEvaluationResult:(id)a0 threshold:(float)a1;
- (BOOL)isClassifierAvailable;
- (BOOL)isValidWordString:(id)a0;
- (BOOL)shouldAllowWhitespaceDelimiterForString:(id)a0;
- (void)startWithResult:(id)a0 contextSize:(long long)a1;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; unsigned int *x2; })tokenizeStringIntoWords:(id)a0;
- (double)wordLMScoreByAddingToken:(unsigned int)a0;
- (double)wordLMScoreByAddingTokens:(const void *)a0;

@end
