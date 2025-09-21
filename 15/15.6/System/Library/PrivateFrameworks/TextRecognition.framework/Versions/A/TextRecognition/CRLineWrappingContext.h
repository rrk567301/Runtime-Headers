@class NSString, NSArray, CRLanguageResourcesManager, CRLineWrappingClassifier, NSMutableArray;
@protocol CRLineWrappable;

@interface CRLineWrappingContext : NSObject {
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _contextTokens;
    char _active;
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
@property (readonly) char usesWordTokens;
@property (readonly) char shouldConsiderLetterCase;
@property (readonly) char active;
@property (readonly) NSArray *contextResults;
@property (readonly) double averageVerticalSpacing;
@property (readonly) double averageLineHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithLocale:(id)a0;
- (char)isRTL;
- (void)resetContext;
- (void)addResult:(id)a0 mergeOversegmentation:(char)a1;
- (double)charLMScoreByAddingString:(id)a0 eosScore:(double *)a1;
- (char)classifierShouldCorrectOverwrappingWithEvaluation:(long long)a0 correctionMode:(long long)a1;
- (char)classifierShouldInsertLineBreakForEvaluationResult:(id)a0 threshold:(float)a1;
- (char)isClassifierAvailable;
- (char)isValidWordString:(id)a0;
- (char)shouldAllowWhitespaceDelimiterForString:(id)a0;
- (void)startWithResult:(id)a0 contextSize:(long long)a1;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x0; } x2; })tokenizeStringIntoWords:(id)a0;
- (double)wordLMScoreByAddingToken:(unsigned int)a0;
- (double)wordLMScoreByAddingTokens:(const void *)a0;

@end
