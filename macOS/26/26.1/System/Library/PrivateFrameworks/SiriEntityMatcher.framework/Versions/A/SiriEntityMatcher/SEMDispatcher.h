@class SEMSettings, NSString, NSXPCListener, SEMIndexSiteCache, SEMIndexSiteManager, NSObject, CCSetChangeXPCListener;
@protocol OS_dispatch_queue;

@interface SEMDispatcher : NSObject <SEMIndexSiteAvailabilityObserver, NSXPCListenerDelegate> {
    SEMIndexSiteManager *_indexSiteManager;
    SEMIndexSiteCache *_indexSiteCache;
    SEMSettings *_settings;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_adminServiceListener;
    CCSetChangeXPCListener *_setChangeListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;

- (void)registerXPCActivities;
- (BOOL)_adminServiceShouldAcceptNewConnection:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)setupXPCListeners;
- (id)init;
- (void)handleXPCEvent:(id)a0;
- (id)administrator;
- (void)handleSetChangeBatch:(id)a0;
- (void)handleSettingsChange;
- (void)indexSiteAvailableWithType:(unsigned char)a0;
- (id)initWithIndexSiteManager:(id)a0 indexSiteCache:(id)a1 settings:(id)a2 queue:(id)a3;
- (void)runMaintenanceWithShouldDefer:(id /* block */)a0;

@end
