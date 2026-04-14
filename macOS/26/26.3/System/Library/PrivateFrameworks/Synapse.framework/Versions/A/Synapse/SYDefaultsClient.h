@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYDefaultsClient : NSObject

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;

- (void)indicatorCoverageWithCompletion:(id /* block */)a0;
- (id)init;
- (void)setIndicatorCoverage:(long long)a0 completion:(id /* block */)a1;
- (void)_invalidateConnection;
- (void).cxx_destruct;
- (void)_createConnectionIfNeeded;
- (void)dealloc;
- (void)_configureConnectionAndResume;

@end
