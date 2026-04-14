@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MDMUserClient : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue;

+ (id)sharedClient;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)pushToken;
- (void)simulatePushWithCompletion:(id /* block */)a0;
- (void)processUserRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)a0;
- (void)_queue_createAndStartMDMXPCConnection;
- (void)_destroyXPCConnectionAndInvalidate:(BOOL)a0;
- (void)scheduleTokenUpdate;
- (void)simulatePush;

@end
