@interface WebContentLayoutAnalyzerController : NSObject {
    struct BundleFrame { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _bundleFrame;
    struct BundleScriptWorld { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _isolatedWorld;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)layoutInformation;
- (id)_jsContext;
- (id)initWithBundleFrame:(const void *)a0;
- (void)collectInformationBeforeResize;
- (void)collectInformationAfterResize;
- (id)_invokeMethod:(id)a0 withArguments:(id)a1;

@end
