@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisTestService : NSObject <PLPhotoAnalysisCancellableService> {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
    _Atomic unsigned long long _operationID;
}

- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (unsigned long long)performAsyncLongOperationWithReply:(id /* block */)a0;
- (id)performGetString;

@end
