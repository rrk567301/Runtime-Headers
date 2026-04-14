@protocol TRIActiveEnvVarNamespacesProviding, TRINamespaceFactorLevelsRetrieving;

@interface TRIActiveLaunchdDeliveredExperimentsReader : NSObject {
    id<TRIActiveEnvVarNamespacesProviding> _namespacesProvider;
    id<TRINamespaceFactorLevelsRetrieving> _factorLevelsRetriever;
}

- (void).cxx_destruct;
- (id)_factorLevelStringsForNamespace:(id)a0;
- (id)allActiveExperiments;
- (id)initWithNamespacesProvider:(id)a0 factorLevelsRetriever:(id)a1;

@end
