@class NSDictionary, NSMutableSet, NSObject, FPPacer;
@protocol OS_dispatch_queue;

@interface FPProviderDomainChangesReceiver : NSObject {
    NSMutableSet *_changesHandlers;
    NSDictionary *_providerDomainsByID;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _notifyToken;
    int _settingsChangedToken;
    FPPacer *_pacer;
    BOOL _dontLoadCacheFromDisk;
    BOOL _ignoreUpdateNotifications;
}

@property (readonly, copy) NSDictionary *cachedProviderDomainsByID;

+ (BOOL)allowedToReadCacheFromDisk;
+ (id)sharedChangesReceiver;
+ (id)sharedChangesReceiverIfAvailable;
+ (id)_sharedChangesReceiverInitIfNeeded:(BOOL)a0;
+ (id)readCacheFromDisk:(BOOL)a0;

- (void)_t_loadCacheOnHandlerAdding:(BOOL)a0;
- (void)_t_forceReadCacheFromDisk;
- (BOOL)ignoreUpdateNotifications;
- (void)updateProviderDomainsWithAttemptCount:(unsigned long long)a0;
- (void)_t_discardCache;
- (id)_init;
- (void).cxx_destruct;
- (id)addChangesHandler:(id /* block */)a0;
- (void)removeChangesHandlerToken:(id)a0;
- (void)providerDomainsHaveChanged:(id)a0 error:(id)a1;
- (void)callChangesHandlersWithProviderDomains:(id)a0 error:(id)a1;
- (void)_t_ignoreUpdateNotifications:(BOOL)a0;
- (void)signalChange;

@end
