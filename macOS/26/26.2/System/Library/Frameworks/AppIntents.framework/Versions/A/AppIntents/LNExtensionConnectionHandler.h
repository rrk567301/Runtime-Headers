@class LNAppContext, LNConnectionListener, NSMutableSet;

@interface LNExtensionConnectionHandler : NSObject <_EXMainConnectionHandler> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) LNAppContext *appContext;
@property (retain, nonatomic) id principalObject;
@property (readonly, nonatomic) LNConnectionListener *connectionListener;
@property (readonly, nonatomic) NSMutableSet *clientConnections;

- (id)initWithPrincipalObject:(id)a0;
- (void).cxx_destruct;
- (void)removeClientConnection:(id)a0;
- (id)init;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void)addClientConnection:(id)a0;

@end
