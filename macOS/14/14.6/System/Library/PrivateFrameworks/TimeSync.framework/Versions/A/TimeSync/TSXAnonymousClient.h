@class NSXPCConnection;

@interface TSXAnonymousClient : NSObject {
    BOOL _invalidated;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)clientProtocol;
+ (id)serverProtocol;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)exportedObject;
- (void)interruptedConnection;
- (void)invalidatedConnection;

@end
