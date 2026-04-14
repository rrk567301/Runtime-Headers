@class FCNewsTabiSmarterFetchOutputConfiguration;

@interface FCNewsTabiSmarterFetchConfiguration : NSObject

@property (readonly, nonatomic) FCNewsTabiSmarterFetchOutputConfiguration *bundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiSmarterFetchOutputConfiguration *nonBundleOutputConfiguration;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
