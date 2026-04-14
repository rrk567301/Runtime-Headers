@class NSError, _TtC8MapsSync15MapsSyncService;

@interface MapsSync.MapsSyncService : NSObject

@property (class, nonatomic, readonly) _TtC8MapsSync15MapsSyncService *shared;

- (id)init;
- (void).cxx_destruct;
- (void)cloudKitSyncAllowedWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
- (void)prepareLibraryWithCompletionHandler:(void (^)(NSError *))a0;

@end
