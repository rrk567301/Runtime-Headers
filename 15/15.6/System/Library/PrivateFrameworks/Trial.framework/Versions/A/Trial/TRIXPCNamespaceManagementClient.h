@class _PASXPCClientHelper;

@interface TRIXPCNamespaceManagementClient : NSObject <TRINamespaceManagementProtocol> {
    _PASXPCClientHelper *_helper;
    _PASXPCClientHelper *_internalHelper;
    _PASXPCClientHelper *_internalSystemHelper;
}

- (id)init;
- (void).cxx_destruct;
- (id)activeRolloutInformation:(id *)a0;
- (char)deregisterNamespaceWithNamespaceName:(id)a0 error:(id *)a1;
- (void)downloadLevelsForFactors:(id)a0 withNamespace:(id)a1 queue:(id)a2 factorsState:(id)a3 options:(id)a4 progress:(id /* block */)a5 completion:(id /* block */)a6;
- (id)getOnDemandReferenceCountsPerUserAtGlobalPath:(id)a0 error:(id *)a1;
- (id)getSandboxExtensionTokensForIdentifierQueryWithError:(id *)a0;
- (char)immediateDownloadForNamespaceNames:(id)a0 allowExpensiveNetworking:(char)a1 error:(id *)a2;
- (id)loadNamespaceMetadataForNamespaceName:(id)a0 error:(id *)a1;
- (char)logSystemCovariatesWithError:(id *)a0;
- (char)promoteFactorPackId:(id)a0 forNamespaceName:(id)a1 rolloutDeployment:(id)a2 error:(id *)a3;
- (char)registerNamespaceWithNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 defaultsFileURL:(id)a2 applicationGroup:(id)a3 cloudKitContainerId:(int)a4 error:(id *)a5;
- (char)rejectFactorPackId:(id)a0 forNamespaceName:(id)a1 rolloutDeployment:(id)a2 error:(id *)a3;
- (char)removeLevelsForFactors:(id)a0 withNamespace:(id)a1 factorsState:(id)a2 removeImmediately:(char)a3 error:(id *)a4;
- (char)setProvisionalFactorPackId:(id)a0 forNamespaceName:(id)a1 error:(id *)a2;
- (char)setPurgeabilityLevelsForFactors:(id)a0 forNamespaceName:(id)a1 error:(id *)a2;
- (char)startNamespaceDownloadWithName:(id)a0 options:(id)a1 error:(id *)a2;
- (unsigned long long)statusOfDownloadForFactors:(id)a0 withNamespace:(id)a1 factorsState:(id)a2 notificationKey:(id *)a3 error:(id *)a4;

@end
