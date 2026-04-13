@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AAPApplicationProxyManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_map;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_stopObserving;
- (void)_startObserving;
- (void)getApplicationProxyWithURLForIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)_resetMap;
- (id)_preparedMap;
- (void)getApplicationProxyWithIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateApplicationProxiesUsingBlock:(id /* block */)a0;
- (id)applicationProxyWithIdentifier:(id)a0;
- (void)handleApplicationsChanged;
- (void)_handleApplicationChangedWrapper:(id)a0;

@end
