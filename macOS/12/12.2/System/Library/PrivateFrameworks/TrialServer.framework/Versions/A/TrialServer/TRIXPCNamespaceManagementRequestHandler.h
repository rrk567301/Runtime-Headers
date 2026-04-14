@class TRIServerContext;
@protocol TRITaskQueuing;

@interface TRIXPCNamespaceManagementRequestHandler : NSObject <TRIXPCNamespaceManagementServiceProtocol> {
    TRIServerContext *_serverContext;
    id<TRITaskQueuing> _taskQueue;
    struct { unsigned int val[8]; } _auditToken;
}

+ (void)usingServerContext:(id)a0 registerNamespaceWithNamespaceName:(id)a1 compatibilityVersion:(unsigned int)a2 defaultsFileURL:(id)a3 teamId:(id)a4 appContainerId:(id)a5 appContainerType:(long long)a6 cloudKitContainerId:(int)a7 bundleId:(id)a8 completion:(id /* block */)a9;
+ (void)usingServerContext:(id)a0 deregisterNamespaceWithName:(id)a1 teamId:(id)a2 taskQueue:(id)a3 completion:(id /* block */)a4;
+ (void)usingServerContext:(id)a0 taskQueue:(id)a1 startDownloadNamespaceWithName:(id)a2 attribution:(id)a3 completion:(id /* block */)a4;
+ (id)_notificationKeyWithNamespace:(id)a0 assetIndexesByTreatment:(id)a1 assetIdsByFactorPack:(id)a2;
+ (void)_startDownloadAssetIndexesByTreatment:(id)a0 usingEntitlementWitness:(id)a1 serverContext:(id)a2 taskQueue:(id)a3 experimentIds:(id)a4 assetIdsByFactorPack:(id)a5 rolloutFactorNames:(id)a6 rolloutDeployments:(id)a7 namespace:(id)a8 taskAttribution:(id)a9 factorsState:(id)a10 notificationKey:(id)a11;
+ (void)_immediateDownloadForNamespaceNames:(id)a0 usingEntitlementWitness:(id)a1 serverContext:(id)a2 taskQueue:(id)a3 allowExpensiveNetworking:(BOOL)a4 taskAttribution:(id)a5 completion:(id /* block */)a6;
+ (void)_removeAssetFactors:(id)a0 usingEntitlementWitness:(id)a1 serverContext:(id)a2 taskQueue:(id)a3 namespace:(id)a4 factorsState:(id)a5 completion:(id /* block */)a6;
+ (void)_setProvisionalFactorPackId:(id)a0 usingEntitlementWitness:(id)a1 serverContext:(id)a2 forNamespaceName:(id)a3 completion:(id /* block */)a4;
+ (void)_rejectFactorPackId:(id)a0 usingEntitlementWitness:(id)a1 serverContext:(id)a2 forNamespaceName:(id)a3 rolloutDeployment:(id)a4 completion:(id /* block */)a5;
+ (void)_promoteFactorPackId:(id)a0 usingEntitlementWitness:(id)a1 serverContext:(id)a2 forNamespaceName:(id)a3 rolloutDeployment:(id)a4 completion:(id /* block */)a5;
+ (id)_deploymentsWithUnexpectedExperimentDataInContainer:(id)a0 dynamicNamespaceName:(id)a1 serverContext:(id)a2;
+ (void)_purgeMismatchedDataForDynamicNamespaceName:(id)a0 appContainer:(id)a1 serverContext:(id)a2;
+ (void)resumeTaskQueue:(id)a0 forNetworkOptions:(id)a1;
+ (void)_resumeTaskQueueForDiscretionaryCellularWithQueue:(id)a0;
+ (void)_resumeTaskQueueForDiscretionaryWifiWithQueue:(id)a0;
+ (void)_reregisterOneShotXPCActivityWithDescriptor:(id)a0 resumingTaskQueue:(id)a1;

- (void).cxx_destruct;
- (void)registerNamespaceWithNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 defaultsFileURL:(id)a2 applicationGroup:(id)a3 cloudKitContainerId:(int)a4 completion:(id /* block */)a5;
- (void)deregisterNamespaceWithNamespaceName:(id)a0 completion:(id /* block */)a1;
- (void)startDownloadNamespaceWithName:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)startDownloadLevelsForFactors:(id)a0 withNamespace:(id)a1 factorsState:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)immediateDownloadForNamespaceNames:(id)a0 allowExpensiveNetworking:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeLevelsForFactors:(id)a0 withNamespace:(id)a1 factorsState:(id)a2 completion:(id /* block */)a3;
- (void)setPurgeabilityLevelsForFactors:(id)a0 forNamespaceName:(id)a1 completion:(id /* block */)a2;
- (void)loadNamespaceMetadataForNamespaceName:(id)a0 completion:(id /* block */)a1;
- (void)setProvisionalFactorPackId:(id)a0 forNamespaceName:(id)a1 completion:(id /* block */)a2;
- (void)rejectFactorPackId:(id)a0 forNamespaceName:(id)a1 rolloutDeployment:(id)a2 completion:(id /* block */)a3;
- (void)promoteFactorPackId:(id)a0 forNamespaceName:(id)a1 rolloutDeployment:(id)a2 completion:(id /* block */)a3;
- (void)statusOfDownloadForFactors:(id)a0 withNamespace:(id)a1 factorsState:(id)a2 completion:(id /* block */)a3;
- (BOOL)_validateNamespaceName:(id)a0 error:(id *)a1;
- (void)_setPurgeabilityLevelsForFactors:(id)a0 usingEntitlementWitness:(id)a1 namespace:(id)a2 completion:(id /* block */)a3;
- (void)_loadNamespaceMetadataForNamespace:(id)a0 usingEntitlementWitness:(id)a1 completion:(id /* block */)a2;
- (id)_factorProviderChainForNamespace:(id)a0;
- (BOOL)_validateSetPurgeabilityLevelRequestUsingFactorProviderChain:(id)a0 purgeabilityLevelsForFactors:(id)a1 error:(id *)a2;
- (int)_namespacePurgeabilityLevelForNamespaceName:(id)a0;
- (id)initWithServerContext:(id)a0 taskQueue:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2;

@end
