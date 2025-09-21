@class FCNewsTabiSmarterFetchOutputConfiguration;

@interface FCNewsTabiSmarterFetchConfiguration : NSObject

@property (readonly, nonatomic) FCNewsTabiSmarterFetchOutputConfiguration *bundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiSmarterFetchOutputConfiguration *nonBundleOutputConfiguration;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
