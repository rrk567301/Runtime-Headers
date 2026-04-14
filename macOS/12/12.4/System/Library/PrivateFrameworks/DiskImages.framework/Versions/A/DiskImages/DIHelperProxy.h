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
    BOOL _helperRegistered;
    BOOL _helperDone;
    NSString *_serverName;
    struct AuthorizationOpaqueRef { } *_authorizationRef;
    int _helperPid;
    BOOL _withAuthentication;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)isAuthenticated;
- (id)initWithDictionary:(id)a0 andStatusProc:(void /* function */ *)a1 andContext:(void *)a2;
- (int)performOperationReturning:(id *)a0;
- (id)initWithDictionary:(id)a0 andStatusProc:(void /* function */ *)a1 andContext:(void *)a2 withAuthentication:(BOOL)a3;
- (void)workerThread:(id)a0;
- (id)helperToolPath;
- (BOOL)threadSetupServer;
- (int)threadLaunchToolAuthenticated:(BOOL)a0;
- (void)waitForHelperDone;
- (int)checkHelperStatusWaitingForExit:(BOOL)a0;
- (void)connectToFramework;
- (void)reportResultsToFramework:(id)a0 withReply:(id /* block */)a1;
- (void)frameworkCallbackWithDictionary:(id)a0 withReply:(id /* block */)a1;
- (void)synchronousFrameworkCallbackWithDictionary:(id)a0 withReply:(id /* block */)a1;
- (void)helperDied;
- (int)authenticate;
- (void)watchForHelperDeath;
- (void)helperFailedToRegister;
- (void)setHelperDoneWithResult:(int)a0;
- (void)sendOperationToHelper:(id)a0;
- (void)disconnectFromHelper:(id)a0;
- (int)askForPassword;
- (int)authWithFlags:(unsigned int)a0;

@end
