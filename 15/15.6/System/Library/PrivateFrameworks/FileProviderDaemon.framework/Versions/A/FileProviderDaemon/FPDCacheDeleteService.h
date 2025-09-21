@class NSString, NSMutableDictionary, FPDExtensionManager, NSObject;
@protocol OS_dispatch_queue;

@interface FPDCacheDeleteService : NSObject {
    NSString *_cacheDeleteServiceName;
    NSMutableDictionary *_cdNotificationsHandlers;
    NSObject<OS_dispatch_queue> *_notificationsHandlersQueue;
    char _cacheDeleteCacheable;
    char _isExpired;
}

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)enumerateFPFSDomainsUsingBlock:(id /* block */)a0;
- (id)allStorageVolumes;
- (void)enumerateProviderDomainOnVolume:(id)a0 usingBlock:(id /* block */)a1;
- (char)getVolume:(int *)a0 forPath:(id)a1;
- (char)isCacheDeleteCacheable;
- (id)nonPurgableSpacePerProviderOnVolume:(id)a0;
- (void)registerCacheDeleteCallbacks;
- (void)registerKey:(id)a0 notificationsUpdatesHandlers:(id /* block */)a1;
- (void)submitBackgroundTask;
- (void)unregisterKey:(id)a0;

@end
