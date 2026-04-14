@class FCNewsTabiSmarterFetchOutputConfiguration;

@interface FCNewsTabiSmarterFetchConfiguration : FCNewsTabiEndpointConfiguration

@property (readonly, nonatomic) FCNewsTabiSmarterFetchOutputConfiguration *bundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiSmarterFetchOutputConfiguration *nonBundleOutputConfiguration;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
