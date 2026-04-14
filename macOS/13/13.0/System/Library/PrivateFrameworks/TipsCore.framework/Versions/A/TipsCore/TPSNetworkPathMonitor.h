@class NSMapTable, NSObject;
@protocol OS_nw_path, OS_dispatch_source, OS_dispatch_queue, OS_nw_path_monitor;

@interface TPSNetworkPathMonitor : NSObject

@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (nonatomic, getter=isNetworkConstrained) BOOL networkConstrained;
@property (nonatomic, getter=isNetworkExpensive) BOOL networkExpensive;
@property (nonatomic) BOOL networkPathMonitorActive;
@property (nonatomic) BOOL shouldNotify;
@property (retain, nonatomic) NSMapTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *notifyTimer;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (retain, nonatomic) NSObject<OS_nw_path> *currentPath;

+ (id)sharedMonitor;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)start;
- (void)stop;
- (void)_networkPathUpdated:(id)a0;
- (void)addObserver:(id)a0 selector:(SEL)a1;
- (BOOL)usesCellularConnection;
- (BOOL)usesWifiConnection;
- (BOOL)isNetworkError:(id)a0;
- (void)_initializeMonitorIfNeeded;
- (void)_initializeMonitor;
- (void)_uninitializeMonitor;
- (void)_notifyObserversWithDelay:(double)a0 usingBlock:(id /* block */)a1;
- (void)_cancelPendingNotifications;

@end
