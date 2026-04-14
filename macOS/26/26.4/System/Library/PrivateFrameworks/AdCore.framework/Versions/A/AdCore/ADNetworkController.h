@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface ADNetworkController : NSObject {
    struct __SCDynamicStore { } *_store;
    NSTimer *_notificationTimer;
    int _networkType;
    struct __SCNetworkReachability { } *_reachability;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL canReachTheNetwork;
@property BOOL isUpdating;

+ (id)sharedNetworkController;

- (int)cellNetworkType;
- (void)_checkForNetwork;
- (void).cxx_destruct;
- (id)getDataContext:(id)a0;
- (void)start;
- (void)_updateStatus:(BOOL)a0;
- (void)_checkForNetworkAndNotify;
- (int)networkType;
- (int)dataIndicatorToConnection:(int)a0;

@end
