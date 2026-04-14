@class NSDictionary, TRISystemConfiguration;

@interface TRISystemCovariates : NSObject <TRISystemCovariateProviding> {
    TRISystemConfiguration *_sysConfig;
    NSDictionary *_dictionary;
}

- (id)tri_contextValueWithName:(id)a0;
- (id)initWithPaths:(id)a0;
- (id)_userSpecificCovariatesFromConfiguration:(id)a0;
- (id)dictionary;
- (id)_sharedCovariatesFromConfiguration:(id)a0;
- (id)objectForKey:(id)a0;
- (id)tri_checkAIUseCaseEnabled:(id)a0;
- (id)getContextValueWithName:(id)a0;
- (void).cxx_destruct;

@end
