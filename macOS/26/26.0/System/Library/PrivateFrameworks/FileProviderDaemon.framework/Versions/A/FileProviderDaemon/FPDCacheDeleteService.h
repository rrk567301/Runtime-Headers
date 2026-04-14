@class NSString, NSMutableDictionary, FPDExtensionManager, NSObject;
@protocol OS_dispatch_queue;

@interface FPDCacheDeleteService : NSObject {
    NSString *_cacheDeleteServiceName;
    NSMutableDictionary *_cdNotificationsHandlers;
    NSObject<OS_dispatch_queue> *_notificationsHandlersQueue;
    BOOL _cacheDeleteCacheable;
    BOOL _isExpired;
}

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

+ (id)sharedInstance;

- (void)registerCacheDeleteCallbacks;
- (void)start;
- (void)unregisterKey:(id)a0;
- (BOOL)isCacheDeleteCacheable;
- (id)init;
- (void)registerKey:(id)a0 notificationsUpdatesHandlers:(id /* block */)a1;
- (void)unregisterBackgroundTask;
- (void).cxx_destruct;

@end
