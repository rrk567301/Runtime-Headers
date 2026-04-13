@class NSString, NSArray, NSMutableArray, NSNumber;

@interface SGTStringComparator : NSObject {
    NSArray *_alignment;
    NSArray *_tailAlignment;
    double _logScore;
    BOOL _hasLogScore;
    NSMutableArray *_allScoreCombinations;
    BOOL hasEmptySentence;
    NSNumber *_spotlightScore;
}

@property (copy, nonatomic) NSString *stringA;
@property (copy, nonatomic) NSString *stringB;
@property (readonly, nonatomic) NSArray *allScoreCombinations;
@property (readonly, nonatomic) NSArray *alignment;
@property (readonly, nonatomic) NSArray *perfectAlignment;
@property (readonly, nonatomic) NSArray *tailAlignment;

- (id)description;
- (void).cxx_destruct;
- (id)spotlightScore;
- (id)lastWordScore;
- (id)alignmentLogScore;
- (unsigned long long)perfectAlignmentScore;
- (id)initWithStringA:(id)a0 stringB:(id)a1 attributeName:(id)a2 evaluator:(struct __MDSimpleQueryEvaluator { } *)a3;
- (id)alignmentForThreshold:(int)a0;
- (id)computeGlobalScoreWithPredicate:(id)a0;
- (id)initWithStringA:(id)a0 stringB:(id)a1;
- (id)alignedWordsWithFuzzyThreshold:(double)a0;
- (id)bestGlobalScore;
- (id)worstGlobalScore;
- (id)averageGlobalScore;
- (id)last2WordsScore;

@end
