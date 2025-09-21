@class NSConnection, IMKServer, NSXPCConnection;
@protocol IMKTextInput, NSObject;

@interface IMKInputControllerPrivate : NSObject {
    id delegate;
    id<IMKTextInput, NSObject> _clientProxy;
    IMKServer *server;
    char _usesXPC;
    char _allowsCollapsingCandidateList;
    NSConnection *_proxyConnection;
    NSXPCConnection *_xpcConnection;
    id<IMKTextInput, NSObject> _simulatorClient;
}

- (void)dealloc;

@end
