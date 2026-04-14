@class FCNewsTabiTagCohortMembershipOutputConfiguration;

@interface FCNewsTabiTagCohortMembershipConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiTagCohortMembershipOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiTagCohortMembershipOutputConfiguration *nonBundleOutputConfiguration;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
