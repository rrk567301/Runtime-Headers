@class NSString, NSArray, NSDictionary;
@protocol TRINamespaceFactorProviding;

@interface TRINamespaceFactorProviderChain : NSObject <TRINamespaceFactorProviding> {
    NSString *_namespaceName;
    NSArray *_providerChain;
    id<TRINamespaceFactorProviding> _installedProvider;
    id<TRINamespaceFactorProviding> _rolloutProvider;
    id<TRINamespaceFactorProviding> _experimentProvider;
    NSDictionary *_aliasMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)factorProviderWithPaths:(id)a0 namespaceName:(id)a1;
+ (id)factorProviderWithPaths:(id)a0 namespaceName:(id)a1 excludingTreatmentLayers:(unsigned long long)a2;
+ (id)factorProviderWithPaths:(id)a0 namespaceName:(id)a1 resolver:(id)a2;

- (void).cxx_destruct;
- (void)dispose;
- (BOOL)isRegistered;
- (id)experimentId;
- (id)namespaceName;
- (id)treatmentId;
- (int)deploymentId;
- (id)rolloutId;
- (unsigned int)namespaceId;
- (unsigned int)namespaceCompatibilityVersion;
- (id)levelForFactor:(id)a0;
- (id)factorLevels;
- (id)initWithNamespaceName:(id)a0 typedProviderChain:(id)a1 paths:(id)a2;
- (id)initWithNamespaceName:(id)a0 typedProviderChain:(id)a1 paths:(id)a2 excludingTreatmentLayers:(unsigned long long)a3;
- (id)providerForTreatmentLayer:(unsigned long long)a0;
- (BOOL)hasAnyTreatmentInLayers:(unsigned long long)a0;
- (id)levelForFactor:(id)a0 outProvider:(id *)a1;
- (void)computeTreatmentAssetIndexes:(id *)a0 withAssociatedExperimentIds:(id *)a1 andFactorPackAssetIds:(id *)a2 withAssociatedRolloutDeployments:(id *)a3 withExperimentFactorNames:(id *)a4 andRolloutFactorNames:(id *)a5 forFactors:(id)a6 alwaysIncludingRolloutLayer:(BOOL)a7 usingFilter:(id /* block */)a8;
- (id)promotableFactorPackId;
- (id)_dealiasedFactorLevelForFactorLevel:(id)a0 unaliasedName:(id)a1;
- (id)factorNamesWithObfuscation:(id)a0;

@end
