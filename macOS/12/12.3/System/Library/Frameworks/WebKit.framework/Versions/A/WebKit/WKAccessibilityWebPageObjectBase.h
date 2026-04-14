@interface WKAccessibilityWebPageObjectBase : NSObject {
    struct NakedPtr<WebKit::WebPage> { struct WebPage *m_ptr; } m_page;
    struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long m_identifier; } m_pageID;
    struct RetainPtr<id> { void *m_ptr; } m_parent;
    BOOL m_hasMainFramePlugin;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)accessibilityFocusedUIElement;
- (void)setHasMainFramePlugin:(BOOL)a0;
- (id)accessibilityRootObjectWrapper;
- (struct NakedPtr<WebCore::AXObjectCache> { struct AXObjectCache *x0; })axObjectCache;
- (id)accessibilityPluginObject;
- (void)setWebPage:(struct NakedPtr<WebKit::WebPage> { struct WebPage *x0; })a0;
- (void)setRemoteParent:(id)a0;

@end
