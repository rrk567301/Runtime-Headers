@class NSDate, TRISystemConfiguration, TRIClientExperiment;
@protocol TRISystemCovariateProviding;

@interface TRIExperimentDependentSystemCovariates : NSObject <TRISystemCovariateProviding> {
    TRISystemConfiguration *_sysConfig;
    TRIClientExperiment *_clientExperiment;
    id<TRISystemCovariateProviding> _baseSystemCovariates;
    NSDate *_experimentEndDate;
}

- (id)objectForKey:(id)a0;
- (id)tri_contextValueWithName:(id)a0;
- (id)tri_checkAIUseCaseEnabled:(id)a0;
- (id)getContextValueWithName:(id)a0;
- (id)dictionary;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0 baseSystemCovariates:(id)a1 clientExperiment:(id)a2 experimentEndDate:(id)a3;
- (id)initWithPaths:(id)a0 baseSystemCovariates:(id)a1 clientExperiment:(id)a2 systemConfiguration:(id)a3;

@end
