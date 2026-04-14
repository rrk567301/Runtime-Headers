@interface WKWebPrivacyNotificationListener : NSObject {
    struct BlockPtr<void ()> { id /* block */ m_block; } _linkFilteringDataCallback;
    struct BlockPtr<void ()> { id /* block */ m_block; } _storageAccessPromptQuirksDataCallback;
    struct BlockPtr<void ()> { id /* block */ m_block; } _storageAccessUserAgentStringQuirksDataCallback;
    struct BlockPtr<void ()> { id /* block */ m_block; } _restrictedOpenerDomainsCallback;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)didUpdate:(id)a0;
- (void)listenForLinkFilteringDataChanges:(id /* block */)a0;
- (void)listenForRestrictedOpenerDomainsChanges:(id /* block */)a0;
- (void)listenForStorageAccessPromptQuirkChanges:(id /* block */)a0;
- (void)listenForStorageAccessUserAgentStringQuirkChanges:(id /* block */)a0;

@end
