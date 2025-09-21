@class NSObject;
@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_evaluator;

@interface GEONetworkObserver : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_nw_path_evaluator> *_evaluator;
    NSObject<OS_nw_path> *_currentPath;
    char _initialized;
    char _networkReachable;
    char _networkConstrained;
}

@property (readonly, nonatomic, getter=isNetworkReachable) char networkReachable;
@property (readonly, nonatomic, getter=isNetworkConstrained) char networkConstrained;
@property (readonly, nonatomic, getter=isCellConnection) char cellConnection;
@property (readonly, nonatomic, getter=isWiFiConnection) char wifiConnection;
@property (readonly, nonatomic, getter=isCompanionConnected) char companionConnected;

+ (id)sharedNetworkObserver;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeNetworkReachableObserver:(id)a0;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (void)_initializeNetworkMonitor;
- (char)_isConnectionType:(int)a0;
- (void)_networkPathUpdated:(id)a0;
- (void)initializeIfNecessary;

@end
