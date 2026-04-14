@class NSString, _PASLock, TRIFactorsState;
@protocol TRIPaths;

@interface TRIDefaultFactorProvider : NSObject <TRIFactorProviding> {
    id<TRIPaths> _paths;
    TRIFactorsState *_factorsState;
    _PASLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContainer:(id)a0 forNamespaceName:(id)a1;
- (BOOL)hasTreatmentInAnyOfLayers:(unsigned long long)a0 withNamespaceName:(id)a1;
- (id)experimentDeploymentWithNamespaceName:(id)a0;
- (BOOL)hasRegisteredNamespaceWithName:(id)a0;
- (id)_treatmentIdFromActiveFactorProviderWithNamespaceName:(id)a0;
- (void)cacheFactorLevelsWithNamespaceName:(id)a0;
- (id)factorLevelsWithNamespace:(unsigned int)a0;
- (id)_providerForNamespace:(id)a0;
- (id)factorLevelsWithNamespaceName:(id)a0;
- (id)promotableFactorPackIdForNamespaceName:(id)a0;
- (id)_experimentDeploymentWithNamespaceName:(id)a0 treatmentLayer:(unsigned long long)a1;
- (id)levelForFactor:(id)a0 withNamespace:(unsigned int)a1;
- (id)counterfactualFactorsStatesForNamespace:(id)a0;
- (id)levelForFactor:(id)a0 withNamespaceName:(id)a1;
- (id)_treatmentIdWithNamespaceName:(id)a0 treatmentLayer:(unsigned long long)a1;
- (id)rolloutDeploymentWithNamespaceName:(id)a0;
- (id)_experimentDeploymentFromActiveFactorProviderWithNamespaceName:(id)a0;
- (unsigned int)compatibilityVersionWithNamespaceName:(id)a0;
- (void).cxx_destruct;
- (id)treatmentIdWithNamespaceName:(id)a0;
- (id)initWithPaths:(id)a0 factorsState:(id)a1;
- (void)invalidateAllFactorProviders;
- (id)init;
- (id)factorPackIdForRolloutWithNamespaceName:(id)a0;

@end
