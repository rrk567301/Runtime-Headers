@class IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate>

@property (retain, nonatomic) IMReachability *_hostReachability;
@property (retain, nonatomic) IMReachability *_ipReachability;
@property (nonatomic) unsigned long long _hostFlags;
@property (nonatomic) unsigned long long _ipFlags;
@property (nonatomic) BOOL _isConnected;
@property (nonatomic) BOOL _isSleeping;

- (void)dealloc;
- (void).cxx_destruct;
- (void)clear;
- (void)_setup;
- (BOOL)isImmediatelyReachable;
- (void)systemWillSleep;
- (void)systemDidWake;
- (void)reachabilityDidChange:(id)a0;
- (void)goConnectedWithLocalSocketAddress:(id)a0 remoteSocketAddress:(id)a1;
- (void)goDisconnected;
- (void)_clearReachability:(id *)a0 flags:(unsigned long long *)a1;
- (void)_doCallbackNow;
- (void)_doCallbackLater;
- (void)_setupReachability;

@end
