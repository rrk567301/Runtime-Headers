@class NSString, CPLNetworkState, NSObject;
@protocol OS_dispatch_queue, CPLNetworkWatcherDelegate, OS_nw_path_monitor;

@interface CPLNetworkWatcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_path_monitor> *_monitor;
}

@property (readonly, nonatomic) NSString *endPoint;
@property (readonly, nonatomic) CPLNetworkState *networkState;
@property (weak, nonatomic) id<CPLNetworkWatcherDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)start;
- (void)stop;
- (BOOL)_isRestrictedPath:(id)a0 policies:(id)a1;
- (void)_updateNetworkState:(id)a0;

@end
