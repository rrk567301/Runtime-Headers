@interface SEMSpanMatchPolicy : NSObject {
    unsigned int _options;
    float _absoluteThreshold;
    float _matchScoreWeight;
}

@property (readonly, nonatomic) float absoluteThreshold;
@property (readonly, nonatomic) float matchScoreWeight;

- (id)description;
- (id)init;
- (id)initWithOptions:(unsigned int)a0;
- (char)allowAliasMatch;
- (char)allowApproxMatch;
- (char)allowPartialMatch;
- (char)enableRankingWithPriors;
- (float)globalRelativeThreshold;
- (id)initWithOptions:(unsigned int)a0 absoluteThreshold:(float)a1 matchScoreWeight:(float)a2;
- (float)priorScoreWeight;
- (char)prioritizeExactMatch;
- (float)regionalRelativeThreshold;
- (char)useTopFive;

@end
