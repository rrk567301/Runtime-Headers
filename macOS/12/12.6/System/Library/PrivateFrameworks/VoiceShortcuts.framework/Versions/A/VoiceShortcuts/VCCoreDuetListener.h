@class VCDaemonXPCEventHandler, NSMutableDictionary, VCTriggerEventQueue, NSObject;
@protocol OS_dispatch_queue, WFDatabaseProvider, _CDUserContext;

@interface VCCoreDuetListener : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<_CDUserContext> userContext;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;
@property (retain, nonatomic) VCTriggerEventQueue *eventQueue;
@property (readonly, nonatomic) NSMutableDictionary *registrations;

- (void).cxx_destruct;
- (void)checkTriggerStateWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)checkTriggerStateWithKeyPath:(id)a0 completion:(id /* block */)a1;
- (id)databaseWithError:(id *)a0;
- (BOOL)registerTrigger:(id)a0 error:(id *)a1;
- (void)queue_unregisterCallbackForIdentifier:(id)a0;
- (void)registerSunriseSunsetCallbackIfNeeded;
- (void)handleCallbackForTriggerWithIdentifier:(id)a0 info:(id)a1;
- (void)registerCallback:(id)a0 withIdentifier:(id)a1;
- (void)fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (BOOL)isCallbackRegisteredWithIdentifier:(id)a0;
- (void)handleSunriseSunsetChanged;
- (void)queue_fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (id)initWithDatabaseProvider:(id)a0 eventQueue:(id)a1;
- (void)registerConfiguredTrigger:(id)a0 completion:(id /* block */)a1;
- (void)unregisterConfiguredTriggerWithIdentifier:(id)a0;

@end
