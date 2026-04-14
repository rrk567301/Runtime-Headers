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
- (id)initWithStringA:(id)a0 stringB:(id)a1 attributeName:(id)a2 evaluator:(struct __MDSimpleQueryEvaluator { } *)a3;
- (id)initWithStringA:(id)a0 stringB:(id)a1;
- (id)alignmentForThreshold:(int)a0;
- (unsigned long long)perfectAlignmentScore;
- (id)alignedWordsWithFuzzyThreshold:(double)a0;
- (id)alignmentLogScore;
- (id)computeGlobalScoreWithPredicate:(id)a0;
- (id)bestGlobalScore;
- (id)worstGlobalScore;
- (id)averageGlobalScore;
- (id)lastWordScore;
- (id)last2WordsScore;
- (id)spotlightScore;

@end
