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

@property char canReachTheNetwork;
@property char isUpdating;

+ (id)sharedNetworkController;

- (void).cxx_destruct;
- (void)start;
- (int)networkType;
- (int)cellNetworkType;
- (id)getDataContext:(id)a0;
- (void)_checkForNetwork;
- (void)_checkForNetworkAndNotify;
- (void)_updateStatus:(char)a0;
- (int)dataIndicatorToConnection:(int)a0;

@end
