@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYDefaultsClient : NSObject

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;

- (void)setIndicatorCoverage:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_invalidateConnection;
- (void)indicatorCoverageWithCompletion:(id /* block */)a0;
- (id)init;
- (void)_configureConnectionAndResume;
- (void)_createConnectionIfNeeded;
- (void)dealloc;

@end
