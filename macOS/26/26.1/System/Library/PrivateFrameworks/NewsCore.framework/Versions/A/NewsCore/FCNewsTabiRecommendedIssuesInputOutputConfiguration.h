@class NSString;

@interface FCNewsTabiRecommendedIssuesInputOutputConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *recommendedIssuePublisherOutputName;
@property (retain, nonatomic) NSString *recommendedIssuePublisherScoreOutputName;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
