@class NSSet, TRIActiveFactorProvidersParser, NSString, TRIExperimentFactorsState;
@protocol TRIPaths;

@interface TRINamespaceResolver : NSObject <TRINamespaceResolving> {
    id<TRIPaths> _paths;
}

@property (readonly, nonatomic) NSSet *namespacesInFactorsState;
@property (readonly, nonatomic) TRIExperimentFactorsState *overrideExperimentFactorsState;
@property (readonly, nonatomic) TRIActiveFactorProvidersParser *activeFactorProvidersParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_namespacePathComponentsFromEntitlements;
+ (id)promotionDirForNamespaceName:(id)a0 withPaths:(id)a1;
+ (id)preferredPathForFactorDataWithCandidatePaths:(id)a0;

- (id)initWithPaths:(id)a0;
- (id)experimentIdentifiersForNamespace:(id)a0;
- (BOOL)_hasOverrideExperimentFactorsState;
- (id)counterfactualFactorsStatesForNamespace:(id)a0;
- (void).cxx_destruct;
- (BOOL)_prepareFactorsStateForCounterfactualsOrInvestigationsForFactorsState:(id)a0;
- (id)initWithPaths:(id)a0 factorsState:(id)a1 activeFactorProvidersParser:(id)a2;
- (id)initWithPaths:(id)a0 activeFactorProvidersParser:(id)a1;
- (char *)_realpathWithFileSystemRepresentation:(const char *)a0 buffer:(char *)a1;
- (id)resolveFactorProviderChainForNamespaceName:(id)a0 faultOnMissingInstalledFactors:(BOOL)a1 installedFactorsAccessible:(BOOL *)a2;
- (BOOL)_prepareFactorsState:(id)a0;
- (id)init;
- (id)initWithPaths:(id)a0 factorsState:(id)a1;
- (void)dispose;
- (void)dealloc;

@end
