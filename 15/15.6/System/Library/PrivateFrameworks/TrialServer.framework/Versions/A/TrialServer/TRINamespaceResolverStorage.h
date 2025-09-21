@protocol TRIPaths;

@interface TRINamespaceResolverStorage : NSObject {
    id<TRIPaths> _paths;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (char)promoteFactorPackId:(id)a0 forNamespaceName:(id)a1 rolloutDeployment:(id)a2 error:(id *)a3;
- (char)rejectFactorPackId:(id)a0 forNamespaceName:(id)a1 rolloutDeployment:(id)a2 error:(id *)a3;
- (char)setProvisionalFactorPackId:(id)a0 forNamespaceName:(id)a1 error:(id *)a2;
- (char)_createDeploymentDirectoryAndAddFactorPackSetWithTempDirRef:(id)a0 newDeploymentDir:(id)a1 factorPackSetPath:(id)a2;
- (id)_getProvisionalFactorpackMetadataForNamespaceName:(id)a0 mustExist:(char)a1 error:(id *)a2;
- (char)_overwriteActiveFactorProvidersUsingGlobalPath:(char)a0 withNamespaceMap:(id)a1 rolloutDeploymentMap:(id)a2 experimentDeploymentMap:(id)a3 experimentTreatmentMap:(id)a4 treatmentFactorPackSetIdsMap:(id)a5 counterfactualTreatmentsMap:(id)a6 factorPackMap:(id)a7;
- (id)_pathForBMLTDeployment:(id)a0;
- (id)_pathForExperimentDeployment:(id)a0;
- (id)_pathForRolloutDeployment:(id)a0;
- (char)_removeUnreferencedBMLTDeploymentsWithRefStore:(id)a0 parentDir:(id)a1 removedCount:(unsigned int *)a2;
- (char)_removeUnreferencedBMLTDeploymentsWithRefStore:(id)a0 topLevelDir:(id)a1 removedCount:(unsigned int *)a2;
- (char)_removeUnreferencedDeploymentsWithRefStore:(id)a0 parentDir:(id)a1 removedCount:(unsigned int *)a2;
- (char)_removeUnreferencedDeploymentsWithRefStore:(id)a0 topLevelDir:(id)a1 removedCount:(unsigned int *)a2;
- (char)_rewriteExperimentDeployment:(id)a0 targetedTreatmentId:(id)a1 factorPackSetId:(id)a2;
- (char)_rewriteExperimentDeploymentForFPSPath:(id)a0 targetedTreatmentId:(id)a1 factorPackSetId:(id)a2;
- (char)_rewriteExperimentDeploymentForTreatmentPath:(id)a0 targetedTreatmentId:(id)a1;
- (char)_setProvisionalFactorpackMetadata:(id)a0 forNamespaceName:(id)a1 error:(id *)a2;
- (char)_updateTargetedFactorPackSetWithTempDirRef:(id)a0 existingDeploymentDir:(id)a1 factorPackSetPath:(id)a2;
- (char)_writeRampId:(id)a0 parentDir:(id)a1;
- (char)overwriteActiveFactorProvidersUsingTransaction:(id)a0 fromContext:(id)a1;
- (char)overwriteGlobalActiveFactorProvidersWithNamespaceMap:(id)a0 factorPackMap:(id)a1 rolloutDeploymentMap:(id)a2;
- (id)parentDirForBMLTDeployments;
- (id)parentDirForExperimentDeployments;
- (id)parentDirForRolloutDeployments;
- (id)pathForBMLTDeployment:(id)a0;
- (id)pathForExperimentDeployment:(id)a0;
- (id)pathForRolloutDeployment:(id)a0;
- (id)pathForTargetedFactorPackSetWithDeployment:(id)a0;
- (id)pathForTargetedFactorPackSetWithTaskDeployment:(id)a0;
- (char)removeUnneededPromotionsWithRemovedCount:(unsigned int *)a0 removeAll:(char)a1;
- (char)removeUnreferencedBMLTDeploymentsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;
- (char)removeUnreferencedExperimentDeploymentsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;
- (char)removeUnreferencedRolloutDeploymentsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;
- (char)rewriteBMLTDeployment:(id)a0 targetedFactorPackSetId:(id)a1;
- (char)rewriteExperimentDeployment:(id)a0 targetedTreatmentId:(id)a1;
- (char)rewriteExperimentDeployment:(id)a0 targetedTreatmentId:(id)a1 factorPackSetId:(id)a2;
- (char)rewriteRolloutDeployment:(id)a0 rampId:(id)a1 targetedFactorPackSetId:(id)a2;

@end
