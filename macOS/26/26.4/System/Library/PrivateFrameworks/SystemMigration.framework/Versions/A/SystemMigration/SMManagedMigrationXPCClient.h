@class NSXPCConnection, NSString, NSXPCInterface;
@protocol SMDManagementProtocol;

@interface SMManagedMigrationXPCClient : NSObject

@property (retain) NSXPCInterface *daemonInterface;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) id<SMDManagementProtocol> daemonProxy;
@property (retain) NSString *lastProcessName;
@property BOOL isForTesting;

- (void)connectToDaemon;
- (void).cxx_destruct;
- (id)init;
- (id)initForTestingWithMockDaemonProxy:(id)a0;
- (id)objectValueOrNilFromReply:(id)a0 forKey:(id)a1;

@end
