@interface OpenSearchURLFinderController : NSObject {
    struct BundleFrame { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _bundleFrame;
    struct BundleScriptWorld { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _isolatedWorld;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_jsContext;
- (id)_scriptObject;
- (id)firstOpenSearchURL;
- (id)initWithBundleFrame:(const void *)a0;

@end
