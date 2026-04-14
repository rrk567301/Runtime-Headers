@interface ChronoCore.ToolServicesServer : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ timelineService;
    void /* unknown type, empty encoding */ taskService;
    void /* unknown type, empty encoding */ extensionService;
    void /* unknown type, empty encoding */ descriptorService;
    void /* unknown type, empty encoding */ stateCaptureService;
    void /* unknown type, empty encoding */ widgetHostService;
    void /* unknown type, empty encoding */ controlHostService;
    void /* unknown type, empty encoding */ liveControlService;
    void /* unknown type, empty encoding */ liveControlCacheManager;
    void /* unknown type, empty encoding */ livePlaceholderControlCacheManager;
    void /* unknown type, empty encoding */ previewControlService;
    void /* unknown type, empty encoding */ previewControlCacheManager;
    void /* unknown type, empty encoding */ timelineCacheManager;
    void /* unknown type, empty encoding */ placeholderCacheManager;
    void /* unknown type, empty encoding */ snapshotCacheManager;
    void /* unknown type, empty encoding */ keybagStateProvider;
    void /* unknown type, empty encoding */ rendererSessionProvider;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ connectionListener;
    void /* unknown type, empty encoding */ _lock_clients;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ activityService;
}

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
