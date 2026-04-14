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
    BOOL _shouldRejectXPCCalls;
}

@property (class, readonly, nonatomic) BOOL isDaemonRunning;

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

- (void)dumpToContext:(id)a0;
- (id)currentSession;
- (void)_startXPCListeners;
- (void)handleExitSignal:(int)a0;
- (void)setUpSandbox;
- (id)getCurrentSessionMustFinishedLoading:(BOOL)a0;
- (void)_finishStartup;
- (void)networkReachabilityChanged:(BOOL)a0;
- (void)waitForConfiguration;
- (void)setUpAnonymousListener;
- (BOOL)shouldRejectXPCCalls;
- (void)_startupAndLoadAccount;
- (void)restart;
- (void)localeDidChange;
- (void)_dbgSleepIfRequested;
- (id)registerShareAcceptOperation:(id)a0 forURL:(id)a1;
- (void)_initSignals;
- (BOOL)selfCheck:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (void).cxx_destruct;
- (void)_setupVNodeRapidAging;
- (void)performWithSessionForVolume:(id)a0 action:(id /* block */)a1;
- (void)registerWaiterBlock:(id /* block */)a0 forShareURL:(id)a1 skipAcceptDialogs:(BOOL)a2;
- (id)init;
- (void)exitWithCode:(int)a0;
- (void)start;
- (void)waitOnAccountResumedQueue;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)currentAccountHandler;
- (void)_resumeSignals;
- (BOOL)_haveRequiredKernelFeatures;

@end
