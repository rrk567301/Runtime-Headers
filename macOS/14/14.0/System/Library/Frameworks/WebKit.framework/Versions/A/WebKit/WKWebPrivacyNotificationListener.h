@interface WKWebPrivacyNotificationListener : NSObject {
    struct BlockPtr<void ()> { id /* block */ m_block; } _linkFilteringDataCallback;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)didUpdate:(id)a0;
- (void)listenForLinkFilteringDataChanges:(id /* block */)a0;

@end
