@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CRKValidXPCConnectionProvider : NSObject

@property (retain, nonatomic) NSXPCConnection *backingConnection;
@property (readonly, nonatomic) id /* block */ builder;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSXPCConnection *connection;

- (id)initWithBuilder:(id /* block */)a0;
- (void)tearDownConnection;
- (void)dealloc;
- (void).cxx_destruct;
- (id)makeConnection;
- (id)captureConnection;
- (void)connectionDied:(id)a0;
- (id)invokeBuilder;
- (id)unprotectedConnection;

@end
