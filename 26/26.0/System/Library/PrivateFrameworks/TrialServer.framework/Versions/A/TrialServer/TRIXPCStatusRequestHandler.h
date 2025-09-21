@class TRIXPCServerContextPromise;

@interface TRIXPCStatusRequestHandler : NSObject <TRIXPCStatusServiceProtocol> {
    TRIXPCServerContextPromise *_promise;
    struct { unsigned int val[8]; } _auditToken;
}

- (void)experimentHistoryRecordsWithLimit:(unsigned long long)a0 newerThanDate:(id)a1 deploymentEnvironment:(int)a2 completion:(id /* block */)a3;
- (void)rolloutAllocationStatusWithCompletion:(id /* block */)a0;
- (void)experimentRecordsWithDeploymentEnvironments:(id)a0 completion:(id /* block */)a1;
- (id)initWithPromise:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (void)rolloutRecordsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
