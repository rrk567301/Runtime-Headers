@class FCNewsTabiTagCohortMembershipOutputConfiguration;

@interface FCNewsTabiTagCohortMembershipConfiguration : FCNewsTabiEndpointConfiguration

@property (retain, nonatomic) FCNewsTabiTagCohortMembershipOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiTagCohortMembershipOutputConfiguration *nonBundleOutputConfiguration;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
