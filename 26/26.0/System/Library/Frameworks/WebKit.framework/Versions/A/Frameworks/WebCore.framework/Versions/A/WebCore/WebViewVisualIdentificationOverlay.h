@class NSString, NSView, CALayer;

@interface WebViewVisualIdentificationOverlay : NSObject <CALayerDelegate> {
    struct RetainPtr<NSView> { NSView *m_ptr; } _view;
    struct RetainPtr<CALayer> { CALayer *m_ptr; } _layer;
    struct RetainPtr<NSString> { NSString *m_ptr; } _kind;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)installForWebViewIfNeeded:(id)a0 kind:(id)a1 deprecated:(BOOL)a2;
+ (BOOL)shouldIdentifyWebViews;

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)dealloc;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0 kind:(id)a1 deprecated:(BOOL)a2;

@end
