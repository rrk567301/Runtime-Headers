@class NSXPCConnection;

@interface TSXClient : NSObject {
    BOOL _invalidated;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)serviceName;
+ (id)serverProtocol;
+ (id)clientProtocol;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)exportedObject;
- (void)interruptedConnection;
- (void)invalidatedConnection;

@end
