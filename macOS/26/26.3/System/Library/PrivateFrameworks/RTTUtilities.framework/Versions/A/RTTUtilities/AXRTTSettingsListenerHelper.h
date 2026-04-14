@class NSMutableArray;

@interface AXRTTSettingsListenerHelper : NSObject {
    void *_listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)addSelectorKey:(SEL)a0;
- (id)initWithListenerAddress:(void *)a0;

@end
