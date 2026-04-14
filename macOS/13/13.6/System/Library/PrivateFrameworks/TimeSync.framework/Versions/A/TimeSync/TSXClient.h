@class NSXPCConnection;

@interface TSXClient : NSObject {
    BOOL _invalidated;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)serviceName;
+ (id)clientProtocol;
+ (id)serverProtocol;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)exportedObject;
- (void)interruptedConnection;
- (void)invalidatedConnection;

@end
