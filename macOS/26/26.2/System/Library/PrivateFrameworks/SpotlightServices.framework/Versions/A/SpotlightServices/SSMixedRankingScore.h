@class NSMutableDictionary, NSDate;

@interface SSMixedRankingScore : NSObject

@property (nonatomic) float score;
@property (nonatomic) float scoreText;
@property (nonatomic) float scoreEngagement;
@property (nonatomic) double scoreFreshness;
@property (nonatomic) float scoreContext;
@property (nonatomic) float scoreResultType;
@property (retain, nonatomic) NSDate *freshnessDate;
@property (retain, nonatomic) NSMutableDictionary *textScores;
@property (nonatomic) unsigned long long bestTokenMatchCount;
@property (nonatomic) float bestTokenMatchRatio;
@property (retain, nonatomic) NSMutableDictionary *fieldMatchCount;

- (void).cxx_destruct;
- (id)description;

@end
