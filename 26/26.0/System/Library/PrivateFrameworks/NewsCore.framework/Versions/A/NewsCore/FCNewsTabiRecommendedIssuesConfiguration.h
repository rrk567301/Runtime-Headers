@class FCNewsTabiRecommendedIssuesUserContextConfiguration, FCNewsTabiRecommendedIssuesInputOutputConfiguration;

@interface FCNewsTabiRecommendedIssuesConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiRecommendedIssuesInputOutputConfiguration *bundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesInputOutputConfiguration *nonBundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesUserContextConfiguration *userContextConfiguration;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
