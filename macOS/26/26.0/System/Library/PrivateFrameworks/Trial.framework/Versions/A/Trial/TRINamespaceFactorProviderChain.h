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

- (BOOL)isRegistered;
- (int)deploymentId;
- (id)rolloutId;
- (id)experimentId;
- (unsigned int)namespaceCompatibilityVersion;
- (id)treatmentId;
- (id)initWithNamespaceName:(id)a0 typedProviderChain:(id)a1 paths:(id)a2 excludingTreatmentLayers:(unsigned long long)a3;
- (id)providerForTreatmentLayer:(unsigned long long)a0;
- (unsigned int)namespaceId;
- (id)levelForFactor:(id)a0 outProvider:(id *)a1;
- (id)factorLevels;
- (id)levelForFactor:(id)a0;
- (id)initWithNamespaceName:(id)a0 typedProviderChain:(id)a1 paths:(id)a2;
- (void)dispose;
- (id)promotableFactorPackId;
- (void)cacheFactorLevels;
- (BOOL)hasAnyTreatmentInLayers:(unsigned long long)a0;
- (id)namespaceName;
- (id)factorNamesWithObfuscation:(id)a0;
- (id)_dealiasedFactorLevelForFactorLevel:(id)a0 unaliasedName:(id)a1;
- (void).cxx_destruct;
- (void)computeTreatmentAssetIndexes:(id *)a0 withAssociatedExperimentIds:(id *)a1 andFactorPackAssetIds:(id *)a2 withAssociatedRolloutDeployments:(id *)a3 withExperimentFactorNames:(id *)a4 andRolloutFactorNames:(id *)a5 forFactors:(id)a6 usingFilter:(id /* block */)a7;

@end
