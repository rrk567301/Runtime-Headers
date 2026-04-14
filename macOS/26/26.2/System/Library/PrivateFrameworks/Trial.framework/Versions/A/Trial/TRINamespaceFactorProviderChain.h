@class NSString, NSArray, NSDictionary;
@protocol TRINamespaceFactorProviding, TRIPaths;

@interface TRINamespaceFactorProviderChain : NSObject <TRINamespaceFactorProviding> {
    NSString *_namespaceName;
    id<TRIPaths> _paths;
    NSArray *_providerChain;
    id<TRINamespaceFactorProviding> _installedProvider;
    id<TRINamespaceFactorProviding> _rolloutProvider;
    id<TRINamespaceFactorProviding> _experimentProvider;
    id<TRINamespaceFactorProviding> _factorPackExperimentProvider;
    id<TRINamespaceFactorProviding> _devOverrideProvider;
    NSDictionary *_aliasMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)factorProviderWithPaths:(id)a0 namespaceName:(id)a1 resolver:(id)a2 faultOnMissingInstalledFactors:(BOOL)a3;
+ (id)factorProviderWithPaths:(id)a0 namespaceName:(id)a1;
+ (id)factorProviderWithPaths:(id)a0 namespaceName:(id)a1 excludingTreatmentLayers:(unsigned long long)a2;

- (id)rolloutId;
- (unsigned int)namespaceId;
- (id)initWithNamespaceName:(id)a0 typedProviderChain:(id)a1 paths:(id)a2 excludingTreatmentLayers:(unsigned long long)a3;
- (id)factorLevels;
- (BOOL)hasAnyTreatmentInLayers:(unsigned long long)a0;
- (id)promotableFactorPackId;
- (id)namespaceName;
- (BOOL)isRegistered;
- (id)_dealiasedFactorLevelForFactorLevel:(id)a0 unaliasedName:(id)a1;
- (id)experimentId;
- (id)initWithNamespaceName:(id)a0 typedProviderChain:(id)a1 paths:(id)a2;
- (void).cxx_destruct;
- (id)providerForTreatmentLayer:(unsigned long long)a0;
- (void)cacheFactorLevels;
- (id)levelForFactor:(id)a0;
- (id)factorNamesWithObfuscation:(id)a0;
- (int)deploymentId;
- (id)treatmentId;
- (void)computeTreatmentAssetIndexes:(id *)a0 withAssociatedExperimentIds:(id *)a1 andFactorPackAssetIds:(id *)a2 withAssociatedRolloutDeployments:(id *)a3 withExperimentFactorNames:(id *)a4 andRolloutFactorNames:(id *)a5 forFactors:(id)a6 usingFilter:(id /* block */)a7;
- (id)levelForFactor:(id)a0 outProvider:(id *)a1;
- (unsigned int)namespaceCompatibilityVersion;
- (void)dispose;

@end
