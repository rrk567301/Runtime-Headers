@class HUAccessoryManager, NSMutableArray;

@interface HUAccessoryListenerHelper : NSObject {
    id _listenerAddress;
    HUAccessoryManager *_delegate;
    NSMutableArray *_keys;
}

- (void)addKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithListenerAddress:(id)a0 andDelegate:(id)a1;
- (void)dealloc;

@end
