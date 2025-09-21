@class NSString, STLocalDynamicActivityAttributionManager, STDynamicActivityAttributionMonitor, NSMutableSet;

@interface STDynamicActivityAttributionManager : NSObject <STDynamicActivityAttributionServerHandle> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
    STLocalDynamicActivityAttributionManager *_localManager;
    STDynamicActivityAttributionMonitor *_monitor;
    NSMutableSet *_lock_registeredClients;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAttributionWebsiteString:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;
- (void)dealloc;
- (void)setAttributionLocalizableKey:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;
- (void)setLocalizableAttributionKey:(id)a0 andApplication:(id)a1 forClient:(id)a2;
- (void)unsubscribeFromUpdates:(id)a0;
- (id)init;
- (id)currentAttributionKeyForClient:(id)a0;
- (void)setAttributionStringWithFormat:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;
- (id)currentAttributionForAttribution:(id)a0;
- (void)subscribeToUpdates:(id)a0;
- (id)currentAttributedAppForClient:(id)a0;
- (id)currentAttributionForClient:(struct { unsigned int x0[8]; })a0;
- (void).cxx_destruct;

@end
