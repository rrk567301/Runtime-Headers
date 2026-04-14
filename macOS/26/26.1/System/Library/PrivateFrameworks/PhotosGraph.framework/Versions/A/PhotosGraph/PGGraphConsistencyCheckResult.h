@class NSDictionary;

@interface PGGraphConsistencyCheckResult : NSObject

@property (nonatomic) double overallSimilarityScore;
@property (retain, nonatomic) NSDictionary *similarityScoreByDomain;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
