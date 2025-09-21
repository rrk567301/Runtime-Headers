@class NSXPCListener, NSString, NSDictionary, NSConditionLock, NSXPCConnection;

@interface DIHelperProxy : NSObject <DIHLHelperMasterProtocol, NSXPCListenerDelegate> {
    void *_context;
    NSDictionary *_operation;
    void /* function */ *_statusProc;
    NSConditionLock *_threadCondLock;
    NSConditionLock *_helperDoneLock;
    struct __CFRunLoop { } *_workerRunLoop;
    int _threadResultsError;
    NSDictionary *_threadResultsDictionary;
    NSString *_helperPath;
    NSXPCConnection *_intermediaryConnection;
    NSXPCListener *_helperListener;
    NSXPCConnection *_helperConnection;
    char _helperRegistered;
    char _helperDone;
    NSString *_serverName;
    struct AuthorizationOpaqueRef { } *_authorizationRef;
    int _helperPid;
    char _withAuthentication;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (id)retain;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (char)isAuthenticated;
- (id)initWithDictionary:(id)a0 andStatusProc:(void /* function */ *)a1 andContext:(void *)a2 withAuthentication:(char)a3;
- (int)askForPassword;
- (int)authWithFlags:(unsigned int)a0;
- (int)authenticate;
- (int)checkHelperStatusWaitingForExit:(char)a0;
- (void)connectToFramework;
- (void)disconnectFromHelper:(id)a0;
- (void)frameworkCallbackWithDictionary:(id)a0 withReply:(id /* block */)a1;
- (void)helperDied;
- (id)helperToolPath;
- (id)initWithDictionary:(id)a0 andStatusProc:(void /* function */ *)a1 andContext:(void *)a2;
- (int)performOperationReturning:(id *)a0;
- (void)reportResultsToFramework:(id)a0 withReply:(id /* block */)a1;
- (void)sendOperationToHelper:(id)a0;
- (void)setHelperDoneWithResult:(int)a0;
- (void)synchronousFrameworkCallbackWithDictionary:(id)a0 withReply:(id /* block */)a1;
- (int)threadLaunchToolAuthenticated:(char)a0;
- (char)threadSetupServer;
- (void)waitForHelperDone;
- (void)watchForHelperDeath;
- (void)workerThread:(id)a0;

@end
