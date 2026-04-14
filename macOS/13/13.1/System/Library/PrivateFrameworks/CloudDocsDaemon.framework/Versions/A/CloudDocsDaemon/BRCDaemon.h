@class NSXPCListenerEndpoint, NSString, NSXPCListener, NSMutableDictionary, NSDate, NSObject, NSOperationQueue;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BRCDaemon : NSObject <BRCReachabilityDelegate, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_source> *_sigIntSrc;
    NSObject<OS_dispatch_source> *_sigQuitSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSXPCListener *_xpcListener;
    NSXPCListener *_tokenListener;
    BOOL _unitTestMode;
    BOOL _resumed;
    NSObject<OS_dispatch_queue> *_xpcListenersReadyQueue;
    NSObject<OS_dispatch_queue> *_accountReadyQueue;
    NSObject<OS_dispatch_queue> *_accountResumedQueue;
    NSObject<OS_dispatch_queue> *_startupQueue;
    int _serverAvailabilityNotifyToken;
    NSObject<OS_dispatch_queue> *_accountLoaderQueue;
    NSMutableDictionary *_shareAcceptOperationsByToken;
    NSMutableDictionary *_shareAcceptWaitersByToken;
    NSObject<OS_dispatch_source> *_acceptWaiterTimer;
    NSOperationQueue *_shareAcceptQueue;
}

@property (nonatomic) BOOL disableAccountChangesHandling;
@property (nonatomic) BOOL disableAppsChangesHandling;
@property (nonatomic) unsigned long long forceIsGreedyState;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) NSDate *startupDate;
@property (readonly, nonatomic, getter=isShuttingDown) BOOL shuttingDown;
@property (retain, nonatomic) Class containerClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)daemon;
+ (BOOL)isDaemonRunning;
+ (id)UTIForExtension:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (id)currentSession;
- (void)restart;
- (void)networkReachabilityChanged:(BOOL)a0;
- (void)networkReachabilityFlagsChanged:(unsigned int)a0;
- (void)dumpToContext:(id)a0;
- (void)localeDidChange;
- (void)_initSignals;
- (void)_setupVNodeRapidAging;
- (void)waitForConfiguration;
- (void)setUpAnonymousListener;
- (BOOL)_haveRequiredKernelFeatures;
- (void)setUpSandbox;
- (unsigned long long)nonPurgeableSizeForSession:(id)a0 givenPurgeableSize:(unsigned long long)a1;
- (id)currentAccountHandler;
- (id)getCurrentSessionMustFinishedLoading:(BOOL)a0;
- (void)performWithSessionForVolume:(id)a0 action:(id /* block */)a1;
- (void)_setupCacheDelete;
- (void)_setDoneXpcActivity:(id)a0 description:(id)a1;
- (void)_startXPCListeners;
- (void)_startupAndLoadAccount;
- (void)_finishStartup;
- (id)registerShareAcceptOperation:(id)a0 forURL:(id)a1;
- (void)registerWaiterBlock:(id /* block */)a0 forShareURL:(id)a1;
- (void)waitOnAccountResumedQueue;
- (BOOL)selfCheck:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (void)handleExitSignal:(int)a0;
- (void)exitWithCode:(int)a0;
- (void)suspendIPCAcceptation;
- (void)resumeIPCAcceptation;

@end
