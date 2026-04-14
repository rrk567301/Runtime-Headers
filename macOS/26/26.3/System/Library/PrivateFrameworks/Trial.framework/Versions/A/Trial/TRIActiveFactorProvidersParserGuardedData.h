@class NSDictionary, NSMutableDictionary;

@interface TRIActiveFactorProvidersParserGuardedData : NSObject {
    NSDictionary *plplistLocal;
    NSDictionary *plplistGlobal;
    NSMutableDictionary *targetedRolloutDeploymentMap;
    NSMutableDictionary *targetedExperimentFactorPackDeploymentMap;
    NSMutableDictionary *overrideFactorPackDeploymentMap;
    BOOL hasIssuedWarnings;
}

- (void).cxx_destruct;

@end
