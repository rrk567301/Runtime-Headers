@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYAddLinkContextClient : NSObject

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;

- (void).cxx_destruct;
- (void)_invalidateConnection;
- (void)createConnectionWithEndpoint:(id)a0;
- (id)init;
- (void)_configureConnectionAndResume;
- (void)_createConnectionIfNeeded;
- (void)dealloc;
- (void)userDidRemoveContentItems:(id)a0;
- (void)userEditDidAddContentItems:(id)a0;
- (void)userWillAddLinkWithActivity:(id)a0 completion:(id /* block */)a1;

@end
