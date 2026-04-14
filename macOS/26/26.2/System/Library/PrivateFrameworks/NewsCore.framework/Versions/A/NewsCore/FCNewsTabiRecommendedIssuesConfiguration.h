@class FCNewsTabiRecommendedIssuesUserContextConfiguration, FCNewsTabiRecommendedIssuesInputOutputConfiguration;

@interface FCNewsTabiRecommendedIssuesConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiRecommendedIssuesInputOutputConfiguration *bundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesInputOutputConfiguration *nonBundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesUserContextConfiguration *userContextConfiguration;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
