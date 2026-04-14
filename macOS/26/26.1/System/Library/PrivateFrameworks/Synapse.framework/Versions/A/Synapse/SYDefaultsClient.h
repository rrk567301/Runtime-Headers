@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYDefaultsClient : NSObject

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;

- (void)_invalidateConnection;
- (void)dealloc;
- (void)setIndicatorCoverage:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_configureConnectionAndResume;
- (void)_createConnectionIfNeeded;
- (id)init;
- (void)indicatorCoverageWithCompletion:(id /* block */)a0;

@end
