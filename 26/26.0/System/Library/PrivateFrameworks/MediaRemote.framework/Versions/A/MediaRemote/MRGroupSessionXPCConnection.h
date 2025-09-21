@class NSObject, NSXPCConnection;
@protocol MRGroupSessionClientXPCProtocol, OS_dispatch_queue;

@interface MRGroupSessionXPCConnection : NSObject

@property (readonly, nonatomic) id<MRGroupSessionClientXPCProtocol> clientObject;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ invalidationHandler;

- (id)server;
- (void)dealloc;
- (void)sendMessage:(id /* block */)a0;
- (void)initializeConnection;
- (void).cxx_destruct;
- (id)initWithClientObject:(id)a0 invalidationHandler:(id /* block */)a1;

@end
