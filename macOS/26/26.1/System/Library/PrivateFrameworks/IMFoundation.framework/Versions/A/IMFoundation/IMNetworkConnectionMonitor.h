@class CUTDeferredTaskQueue, IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate>

@property (retain, nonatomic) IMReachability *_hostReachability;
@property (retain, nonatomic) IMReachability *_ipReachability;
@property (nonatomic) unsigned long long _hostFlags;
@property (nonatomic) unsigned long long _ipFlags;
@property (nonatomic) BOOL _isConnected;
@property (nonatomic) BOOL _isSleeping;
@property (readonly, nonatomic) CUTDeferredTaskQueue *performCallbackTask;

- (BOOL)isImmediatelyReachable;
- (void)goDisconnected;
- (void)systemWillSleep;
- (void)clear;
- (void)_setup;
- (void)_doCallbackLater;
- (void)goConnectedWithLocalSocketAddress:(id)a0 remoteSocketAddress:(id)a1;
- (void)systemDidWake;
- (void)_setupReachability;
- (void)reachabilityDidChange:(id)a0;
- (void)dealloc;
- (void)_clearReachability:(id *)a0 flags:(unsigned long long *)a1;
- (void).cxx_destruct;
- (void)_doCallbackNow;

@end
