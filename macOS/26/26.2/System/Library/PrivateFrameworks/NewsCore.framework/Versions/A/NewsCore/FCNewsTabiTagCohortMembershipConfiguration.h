@class FCNewsTabiTagCohortMembershipOutputConfiguration;

@interface FCNewsTabiTagCohortMembershipConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiTagCohortMembershipOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiTagCohortMembershipOutputConfiguration *nonBundleOutputConfiguration;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
