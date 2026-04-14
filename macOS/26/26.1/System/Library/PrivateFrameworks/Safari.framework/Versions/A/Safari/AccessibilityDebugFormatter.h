@class NSWindow;

@interface AccessibilityDebugFormatter : NSObject {
    struct Page { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _pageWrapper;
    NSWindow *_hostWindow;
}

+ (id)getTapToRadarURLForAccessibility:(id)a0;

- (id)fileName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_buildSectionWithTitle:(id)a0 details:(id)a1;
- (void)_traverseAccessibilityElements:(id)a0 withDepth:(unsigned long long)a1 appendingToString:(id)a2;
- (void)debugStringWithCallback:(id /* block */)a0;
- (id)initWithPage:(struct Page { struct WKRetainPtr<const void *> { void *x0; } x0; })a0 andHostWindow:(id)a1;

@end
