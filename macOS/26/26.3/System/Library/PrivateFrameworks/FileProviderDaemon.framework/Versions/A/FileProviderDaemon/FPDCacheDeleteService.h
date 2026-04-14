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

- (void)start;
- (BOOL)isCacheDeleteCacheable;
- (void)registerCacheDeleteCallbacks;
- (void)unregisterKey:(id)a0;
- (id)init;
- (void)registerKey:(id)a0 notificationsUpdatesHandlers:(id /* block */)a1;
- (void).cxx_destruct;
- (void)unregisterBackgroundTask;

@end
