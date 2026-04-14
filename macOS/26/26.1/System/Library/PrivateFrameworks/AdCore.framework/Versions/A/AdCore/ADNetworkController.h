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

- (void)start;
- (id)getDataContext:(id)a0;
- (int)cellNetworkType;
- (int)networkType;
- (void)_checkForNetworkAndNotify;
- (int)dataIndicatorToConnection:(int)a0;
- (void)_updateStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)_checkForNetwork;

@end
