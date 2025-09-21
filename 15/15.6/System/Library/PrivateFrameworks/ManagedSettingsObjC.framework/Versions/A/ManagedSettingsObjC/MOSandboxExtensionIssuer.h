@class NSXPCConnection, NSObject;

@interface MOSandboxExtensionIssuer : NSObject

@property (class, readonly, nonatomic) MOSandboxExtensionIssuer *sharedIssuer;

@property (retain, nonatomic) NSXPCConnection *currentConnection;
@property (readonly, nonatomic) NSObject *connectionLock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)xpcConnection;
- (void)clearCurrentConnectionAndInvalidate:(char)a0;
- (id)fetchSandboxExtensionTokenForPath:(id)a0 readonly:(char)a1;

@end
