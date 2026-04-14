@class CUTDeferredTaskQueue, IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate>

@property (retain, nonatomic) IMReachability *_hostReachability;
@property (retain, nonatomic) IMReachability *_ipReachability;
@property (nonatomic) unsigned long long _hostFlags;
@property (nonatomic) unsigned long long _ipFlags;
@property (nonatomic) BOOL _isConnected;
@property (nonatomic) BOOL _isSleeping;
@property (readonly, nonatomic) CUTDeferredTaskQueue *performCallbackTask;

- (void)systemWillSleep;
- (void)goDisconnected;
- (BOOL)isImmediatelyReachable;
- (void)_setup;
- (void)goConnectedWithLocalSocketAddress:(id)a0 remoteSocketAddress:(id)a1;
- (void)_doCallbackNow;
- (void)_clearReachability:(id *)a0 flags:(unsigned long long *)a1;
- (void)clear;
- (void)_doCallbackLater;
- (void)_setupReachability;
- (void)systemDidWake;
- (void).cxx_destruct;
- (void)reachabilityDidChange:(id)a0;
- (void)dealloc;

@end
