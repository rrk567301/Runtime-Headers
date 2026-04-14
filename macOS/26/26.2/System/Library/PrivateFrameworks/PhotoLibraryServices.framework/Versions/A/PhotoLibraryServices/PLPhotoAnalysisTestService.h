@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisTestService : NSObject <PLPhotoAnalysisCancellableService> {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
    _Atomic unsigned long long _operationID;
}

- (void).cxx_destruct;
- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (id)initWithServiceProvider:(id)a0;
- (unsigned long long)performAsyncLongOperationWithReply:(id /* block */)a0;
- (id)performGetString;

@end
