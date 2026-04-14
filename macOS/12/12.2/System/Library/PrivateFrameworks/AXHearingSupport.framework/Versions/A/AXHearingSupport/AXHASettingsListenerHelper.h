@class NSMutableArray;

@interface AXHASettingsListenerHelper : NSObject {
    id _listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)addSelectorKey:(SEL)a0;
- (id)initWithListenerAddress:(id)a0;

@end
