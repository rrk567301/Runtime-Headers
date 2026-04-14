@interface NEPathEventObserver : NSObject {
    struct network_config_cellular_blocked_observer_s { } *_cellBlockedObserver;
    struct network_config_cellular_blocked_observer_s { } *_cellFailedObserver;
    struct network_config_cellular_blocked_observer_s { } *_wifiBlockedObserver;
    id /* block */ _eventHandler;
}

- (id)initWithQueue:(id)a0 eventHandler:(id /* block */)a1;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
