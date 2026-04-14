@class NSXPCConnection;

@interface TSXAnonymousClient : NSObject {
    BOOL _invalidated;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)serverProtocol;
+ (id)clientProtocol;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)exportedObject;
- (void)interruptedConnection;
- (void)invalidatedConnection;

@end
