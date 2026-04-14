@class VKManifestTileGroupObserverProxy;

@interface VKTileGroupNotificationBridge : NSObject {
    struct weak_ptr<md::TileGroupNotificationManager> { struct TileGroupNotificationManager *__ptr_; struct __shared_weak_count *__cntrl_; } _manager;
    VKManifestTileGroupObserverProxy *_proxy;
}

- (id)initWithManager:(struct weak_ptr<md::TileGroupNotificationManager> { struct TileGroupNotificationManager *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
