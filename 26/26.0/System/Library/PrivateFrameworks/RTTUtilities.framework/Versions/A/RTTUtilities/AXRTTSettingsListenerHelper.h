@class NSMutableArray;

@interface AXRTTSettingsListenerHelper : NSObject {
    void *_listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (id)initWithListenerAddress:(void *)a0;
- (void)dealloc;
- (void)addSelectorKey:(SEL)a0;
- (void).cxx_destruct;

@end
