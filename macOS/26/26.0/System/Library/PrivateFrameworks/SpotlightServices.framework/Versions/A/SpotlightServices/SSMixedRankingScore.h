@class NSDate;

@interface SSMixedRankingScore : NSObject

@property (nonatomic) float score;
@property (nonatomic) float scoreText;
@property (nonatomic) float scoreEngagement;
@property (nonatomic) double scoreFreshness;
@property (nonatomic) float scoreContext;
@property (nonatomic) float scoreResultType;
@property (retain, nonatomic) NSDate *freshnessDate;
@property (nonatomic) float scoreTextDisplayName;
@property (nonatomic) float scoreTextDisplayNameInitials;
@property (nonatomic) float scoreTextTitle;
@property (nonatomic) float scoreTextDescription;
@property (nonatomic) float scoreTextSnippet;
@property (nonatomic) float scoreAuthor;

- (id)description;
- (void).cxx_destruct;

@end
