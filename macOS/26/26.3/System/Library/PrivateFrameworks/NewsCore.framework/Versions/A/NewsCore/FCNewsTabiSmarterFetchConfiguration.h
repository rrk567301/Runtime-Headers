@class FCNewsTabiSmarterFetchOutputConfiguration;

@interface FCNewsTabiSmarterFetchConfiguration : NSObject

@property (readonly, nonatomic) FCNewsTabiSmarterFetchOutputConfiguration *bundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiSmarterFetchOutputConfiguration *nonBundleOutputConfiguration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
