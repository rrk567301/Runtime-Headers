@class SEMSettings, NSString, NSXPCListener, SEMIndexSiteManager, NSObject, CCSetChangeXPCListener;
@protocol OS_dispatch_queue;

@interface SEMDispatcher : NSObject <NSXPCListenerDelegate> {
    SEMIndexSiteManager *_indexSiteManager;
    SEMSettings *_settings;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_adminServiceListener;
    CCSetChangeXPCListener *_setChangeListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)handleXPCEvent:(id)a0;
- (void)registerXPCActivities;
- (BOOL)_adminServiceShouldAcceptNewConnection:(id)a0;
- (id)administrator;
- (void)setupXPCListeners;
- (void)handleSettingsChange;
- (void)handleSetChangeBatch:(id)a0;
- (id)initWithIndexSiteManager:(id)a0 settings:(id)a1 queue:(id)a2;
- (void)runMaintenanceWithShouldDefer:(id /* block */)a0;

@end
