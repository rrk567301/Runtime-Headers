@protocol TRIActiveSysctlNamespacesProviding, TRINamespaceFactorLevelsRetrieving;

@interface TRIActiveSysctlFactorsProvider : NSObject <TRIActiveSysctlFactorsProviding> {
    id<TRIActiveSysctlNamespacesProviding> _namespacesProvider;
    id<TRINamespaceFactorLevelsRetrieving> _factorLevelsRetriever;
}

- (void).cxx_destruct;
- (id)activeSysctlFactorLevels;
- (id)initWithActiveNamespacesProvider:(id)a0 factorLevelsRetriever:(id)a1;

@end
