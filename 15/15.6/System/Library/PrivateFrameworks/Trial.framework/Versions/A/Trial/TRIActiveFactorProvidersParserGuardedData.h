@class NSDictionary, NSMutableDictionary;

@interface TRIActiveFactorProvidersParserGuardedData : NSObject {
    NSDictionary *plplist;
    NSMutableDictionary *targetedRolloutDeploymentMap;
    NSMutableDictionary *targetedExperimentFactorPackDeploymentMap;
    NSMutableDictionary *counterfactualFactorPackDeploymentMap;
    char hasIssuedWarnings;
}

- (void).cxx_destruct;

@end
