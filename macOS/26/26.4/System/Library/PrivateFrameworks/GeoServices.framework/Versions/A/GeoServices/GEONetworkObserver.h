@class NSData, NSObject;
@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_evaluator;

@interface GEONetworkObserver : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_nw_path_evaluator> *_evaluator;
    NSObject<OS_nw_path> *_currentPath;
    BOOL _initialized;
    BOOL _networkReachable;
    BOOL _networkConstrained;
    NSData *_networkSignature;
}

@property (readonly, nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (readonly, nonatomic, getter=isNetworkConstrained) BOOL networkConstrained;
@property (readonly, nonatomic, getter=isCellConnection) BOOL cellConnection;
@property (readonly, nonatomic, getter=isWiFiConnection) BOOL wifiConnection;
@property (readonly, nonatomic, getter=isCompanionConnected) BOOL companionConnected;
@property (readonly, nonatomic) NSData *networkSignature;

+ (id)sharedNetworkObserver;

- (void)_initializeNetworkMonitor;
- (BOOL)_isConnectionType:(int)a0;
- (void)removeNetworkReachableObserver:(id)a0;
- (void)_networkPathUpdated:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)initializeIfNecessary;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (void)dealloc;

@end
