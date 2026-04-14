@class TRIXPCServerContextPromise;
@protocol TRITrialInternalEntitled;

@interface TRIInternalServiceRequestHandler : NSObject <TRIXPCInternalServiceProtocol> {
    TRIXPCServerContextPromise *_promise;
    id<TRITrialInternalEntitled> _entitlementWitness;
    struct { unsigned int val[8]; } _auditToken;
}

- (void)addWithoutRunningForTask:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)rolloutNotificationWithLatestDeploymentForRolloutId:(id)a0 cloudKitContainer:(int)a1 teamId:(id)a2 completion:(id /* block */)a3;
- (void)registerNamespaceWithNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 defaultsFileURL:(id)a2 teamId:(id)a3 appContainerId:(id)a4 appContainerType:(long long)a5 cloudKitContainerId:(int)a6 completion:(id /* block */)a7;
- (id)initWithPromise:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 entitlementWitness:(id)a2;
- (void)experimentHasMatchingNCV:(id)a0 completion:(id /* block */)a1;
- (void)activeRolloutInformationWithCompletion:(id /* block */)a0;
- (void)immediatelySchedulePostUpgradeActivityWithCompletion:(id /* block */)a0;
- (void)submitTask:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)lastFetchDateForContainer:(int)a0 teamId:(id)a1 completion:(id /* block */)a2;
- (void)deregisterNamespaceWithNamespaceName:(id)a0 teamId:(id)a1 completion:(id /* block */)a2;
- (void)treatmentValidForExperimentWithId:(id)a0 treatmentId:(id)a1 completion:(id /* block */)a2;
- (void)experimentNotificationsWithExperimentId:(id)a0 cloudKitContainer:(int)a1 teamId:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)suspendSQLiteCKDatabaseQueueWithCompletion:(id /* block */)a0;
- (void)setSubscription:(id)a0 namespaceName:(id)a1 completion:(id /* block */)a2;
- (void)resumeTaskQueueWithCompletion:(id /* block */)a0;
- (void)activeExperimentInformationWithEnvironments:(id)a0 completion:(id /* block */)a1;
- (void)resumeSQLiteCKDatabaseQueueWithCompletion:(id /* block */)a0;
- (void)dynamicNamespaceRecordsWithCompletion:(id /* block */)a0;
- (void)setFailureInjectionDelegate:(id)a0;
- (void)_experimentRecordsWithDeploymentEnvironments:(id)a0 serverContext:(id)a1 completion:(id /* block */)a2;
- (void)taskRecordsWithCompletion:(id /* block */)a0;
- (void)experimentIdsWithActiveStateAndNamespaceName:(id)a0 completion:(id /* block */)a1;
- (void)startDownloadNamespaceWithName:(id)a0 teamId:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)removeUnusedChannelsWithCompletion:(id /* block */)a0;
- (void)setLastFetchDate:(id)a0 forContainer:(int)a1 teamId:(id)a2 completion:(id /* block */)a3;
- (void)subscriptionForNamespaceName:(id)a0 completion:(id /* block */)a1;
- (void)logSystemCovariates;
- (void)isOptedOutOfExperimentationWithCompletion:(id /* block */)a0;

@end
