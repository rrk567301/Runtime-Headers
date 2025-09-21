@class NSString, NSXPCConnection;
@protocol OSDUIHelperProtocol;

@interface OSDConnectionInfo : NSObject

@property (retain) id<OSDUIHelperProtocol> proxyObject;
@property (retain) NSXPCConnection *connection;
@property (retain) NSString *serviceName;

- (void).cxx_destruct;

@end
