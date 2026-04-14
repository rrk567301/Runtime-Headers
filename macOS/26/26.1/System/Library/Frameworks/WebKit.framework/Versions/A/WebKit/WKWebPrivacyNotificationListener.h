@interface WKWebPrivacyNotificationListener : NSObject {
    struct BlockPtr<void ()> { id /* block */ m_block; } _callback;
    long long _resourceType;
}

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (void)didUpdate:(id)a0;
- (id)initWithType:(long long)a0 callback:(id /* block */)a1;

@end
