@class NSMutableDictionary;

@interface TRINamespaceResolverGuardedData : NSObject {
    NSMutableDictionary *targetedExperimentNamespaceDescriptorDeploymentMap;
    NSMutableDictionary *targetedBMLTDeploymentMap;
    char hasIssuedWarnings;
}

- (void).cxx_destruct;

@end
