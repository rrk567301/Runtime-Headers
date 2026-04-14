@class NSString;

@interface FCNewsTabiRecommendedIssuesInputOutputConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *recommendedIssuePublisherOutputName;
@property (retain, nonatomic) NSString *recommendedIssuePublisherScoreOutputName;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
