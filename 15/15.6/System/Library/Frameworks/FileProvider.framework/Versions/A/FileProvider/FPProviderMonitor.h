@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface FPProviderMonitor : NSObject {
    NSMutableDictionary *_observersByContainerID;
    NSMutableDictionary *_notifyTokenByContainerID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (char)isProviderIDForeground:(id)a0;
+ (id)providerIDForApplication:(id)a0 sharedContainerIdentifier:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forProviderID:(id)a1;
- (void)removeObserver:(id)a0 forProviderID:(id)a1;
- (char)supportsWakesForProviderID:(id)a0;
- (char)wakeProviderID:(id)a0 forSessionIdentifier:(id)a1;

@end
