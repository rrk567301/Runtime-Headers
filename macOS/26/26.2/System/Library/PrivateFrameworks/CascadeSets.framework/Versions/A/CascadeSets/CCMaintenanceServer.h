@class NSString, NSError, BMXPCListener;
@protocol CCSetBookkeeping;

@interface CCMaintenanceServer : NSObject <BMXPCListenerDelegate, CCMaintenanceServerProtocol>

@property (class, nonatomic, readonly) NSString *machService;

@property (nonatomic, readonly) BMXPCListener *listener;
@property (nonatomic, readonly) id<CCSetBookkeeping> setBookkeeping;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (id)initWithQueue:(id)a0 setBookkeeping:(id)a1;
- (void)performNightlyMaintenanceWithCompletionHandler:(void (^)(NSError *))a0;

@end
