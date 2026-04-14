@class CUTDeferredTaskQueue, IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate>

@property (retain, nonatomic) IMReachability *_hostReachability;
@property (retain, nonatomic) IMReachability *_ipReachability;
@property (nonatomic) unsigned long long _hostFlags;
@property (nonatomic) unsigned long long _ipFlags;
@property (nonatomic) BOOL _isConnected;
@property (nonatomic) BOOL _isSleeping;
@property (readonly, nonatomic) CUTDeferredTaskQueue *performCallbackTask;

- (void)goDisconnected;
- (void)systemWillSleep;
- (void)clear;
- (void)_setupReachability;
- (void)_setup;
- (void)goConnectedWithLocalSocketAddress:(id)a0 remoteSocketAddress:(id)a1;
- (void)dealloc;
- (void)_doCallbackNow;
- (void)systemDidWake;
- (void)_doCallbackLater;
- (void)_clearReachability:(id *)a0 flags:(unsigned long long *)a1;
- (void)reachabilityDidChange:(id)a0;
- (BOOL)isImmediatelyReachable;
- (void).cxx_destruct;

@end
