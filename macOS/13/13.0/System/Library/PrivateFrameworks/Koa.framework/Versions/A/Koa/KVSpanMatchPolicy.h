@interface KVSpanMatchPolicy : NSObject {
    unsigned int _options;
}

- (id)description;
- (id)init;
- (id)initWithOptions:(unsigned int)a0;
- (BOOL)enableRankingWithPriors;
- (BOOL)useTopFive;
- (float)matchScoreWeight;
- (float)priorScoreWeight;
- (float)regionalRelativeThreshold;
- (float)globalRelativeThreshold;
- (float)absoluteThreshold;
- (BOOL)allowPartialMatch;
- (BOOL)allowApproxMatch;
- (BOOL)prioritizeExactMatch;
- (BOOL)allowAliasMatch;

@end
