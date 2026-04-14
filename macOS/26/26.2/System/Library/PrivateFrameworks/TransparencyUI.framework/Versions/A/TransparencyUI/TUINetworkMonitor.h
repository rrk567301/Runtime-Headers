@class NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue, TUINetworkMonitorDelegate;

@interface TUINetworkMonitor : NSObject

@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *networkPathMonitor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *networkMonitorQueue;
@property (weak, nonatomic) id<TUINetworkMonitorDelegate> delegate;
@property (readonly, nonatomic) BOOL hasActiveConnection;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_setNetworkMonitorUpdateHandlerWithPath:(id)a0 completion:(id /* block */)a1;
- (void)setUpNetworkPathMonitor;

@end
