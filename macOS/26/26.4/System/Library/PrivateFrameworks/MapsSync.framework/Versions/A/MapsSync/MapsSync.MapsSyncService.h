@class NSError, NSDate, _TtC8MapsSync15MapsSyncService;

@interface MapsSync.MapsSyncService : NSObject {
    void /* unknown type, empty encoding */ xpcInterface;
}

@property (class, nonatomic, readonly) _TtC8MapsSync15MapsSyncService *shared;

- (void).cxx_destruct;
- (id)init;
- (void)cloudKitSyncAllowedWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
- (void)lastSyncDateWithCompletionHandler:(void (^)(NSDate *, NSError *))a0;
- (void)prepareLibraryWithCompletionHandler:(void (^)(NSError *))a0;

@end
