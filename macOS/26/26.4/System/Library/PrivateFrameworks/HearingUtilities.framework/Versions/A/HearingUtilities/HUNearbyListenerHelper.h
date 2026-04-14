@class HUNearbyController, NSMutableDictionary;

@interface HUNearbyListenerHelper : NSObject {
    id _listenerAddress;
    HUNearbyController *_delegate;
    NSMutableDictionary *_keys;
}

- (void).cxx_destruct;
- (id)initWithListenerAddress:(id)a0 andDelegate:(id)a1;
- (void)dealloc;
- (void)addKey:(id)a0 forDomain:(id)a1;

@end
