@class NSError, ATXSportsResponse;

@interface ATXSportsServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_listener;
}

@property (class, nonatomic, readonly) ATXSportsServer *sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)requestedSchedulesForTeamsWithReply:(void (^)(ATXSportsResponse *, NSError *))a0;

@end
