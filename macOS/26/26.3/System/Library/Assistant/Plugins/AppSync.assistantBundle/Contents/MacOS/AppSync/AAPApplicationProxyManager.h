@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AAPApplicationProxyManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_map;
}

+ (id)sharedManager;

- (void)_startObserving;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_stopObserving;
- (void)reset;
- (id)applicationProxyWithIdentifier:(id)a0;
- (void)_handleApplicationChangedWrapper:(id)a0;
- (id)_preparedMap;
- (void)_resetMap;
- (void)enumerateApplicationProxiesUsingBlock:(id /* block */)a0;
- (void)getApplicationProxyWithIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)getApplicationProxyWithURLForIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)handleApplicationsChanged;

@end
