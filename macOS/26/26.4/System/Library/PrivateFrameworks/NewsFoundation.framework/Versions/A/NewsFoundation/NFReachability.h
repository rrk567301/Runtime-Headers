@class NSObject;
@protocol OS_dispatch_queue, OS_nw_path_monitor, OS_nw_path;

@interface NFReachability : NSObject

@property (class, readonly, nonatomic) NFReachability *sharedInstance;

@property long long currentReachabilityStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observationQueue;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *networkPathMonitor;
@property (retain, nonatomic) NSObject<OS_nw_path> *currentNetworkPath;

+ (long long)_currentNetworkStatus;

- (long long)_statusFromNetworkPath:(id)a0;
- (void).cxx_destruct;
- (void)_updateCurrentReachabilityStatus:(long long)a0;
- (id)init;
- (void)flushStatusUpdates;
- (void)_updateCurrentNetworkPath:(id)a0;
- (void)dealloc;

@end
