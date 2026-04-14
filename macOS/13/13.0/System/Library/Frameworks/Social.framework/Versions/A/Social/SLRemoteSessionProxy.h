@class NSLock, NSString, NSXPCConnection, NSXPCInterface, NSObject, NSMutableArray;

@interface SLRemoteSessionProxy : NSObject {
    NSString *_serviceName;
    NSXPCInterface *_remoteInterface;
    id _remoteProxy;
    NSXPCConnection *_connection;
    NSMutableArray *_guaranteedRemoteCalls;
    NSLock *_guaranteedRemoteCallsLock;
}

@property (weak) NSObject *exportedObject;
@property (retain) NSXPCInterface *exportedInterface;
@property (copy) id /* block */ connectionResetBlock;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (void)disconnect;
- (void)_setupConnection;
- (id)initForRemoteServiceName:(id)a0 remoteInterface:(id)a1;
- (void)_remoteSessionConnectionWasInterrupted;
- (void)registerGuaranteedRemoteCall:(id)a0;
- (void)dropGuaraneteedRemoteCall:(id)a0;

@end
