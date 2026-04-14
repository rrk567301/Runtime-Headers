@class NSDictionary;

@interface PGGraphConsistencyCheckResult : NSObject

@property (nonatomic) double overallSimilarityScore;
@property (retain, nonatomic) NSDictionary *similarityScoreByDomain;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
