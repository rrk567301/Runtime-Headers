@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisExecutiveService : NSObject <PLPhotoAnalysisCancellableService> {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
    _Atomic unsigned long long _operationID;
}

- (void).cxx_destruct;
- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (id)initWithServiceProvider:(id)a0;
- (void)requestActivityStatusWithReply:(id /* block */)a0;
- (void)requestAnalysisStatusWithReply:(id /* block */)a0;
- (void)keepPADActiveWithOperationID:(id)a0 reply:(id /* block */)a1;
- (void)performOnDemandTaskWithName:(id)a0 reply:(id /* block */)a1;
- (void)performOnDemandTasksForScenario:(id)a0 reply:(id /* block */)a1;

@end
