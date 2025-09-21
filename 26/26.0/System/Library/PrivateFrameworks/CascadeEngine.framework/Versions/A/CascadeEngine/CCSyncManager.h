@class CCSetChangeXPCListener, CCRapportSyncEngine, NSObject;
@protocol OS_dispatch_queue;

@interface CCSyncManager : NSObject {
    CCRapportSyncEngine *_syncEngine;
    NSObject<OS_dispatch_queue> *_queue;
    CCSetChangeXPCListener *_setChangeListener;
}

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_handleSetChanges:(id)a0;
- (void)_syncCurrentPersonaNowWithReason:(unsigned char)a0 activity:(id)a1 completionHandler:(id /* block */)a2;
- (id)_syncEngineForCurrentPersona:(id *)a0;
- (void)_syncPersonasNow:(id)a0 withReason:(unsigned char)a1 activity:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIncomingSyncRequestsWithReason:(unsigned char)a0 completionHandler:(id /* block */)a1;
- (void)syncAllPersonasNowWithReason:(unsigned char)a0 activity:(id)a1 completionHandler:(id /* block */)a2;
- (void)syncCurrentPersonaNowWithReason:(unsigned char)a0 activity:(id)a1 completionHandler:(id /* block */)a2;

@end
