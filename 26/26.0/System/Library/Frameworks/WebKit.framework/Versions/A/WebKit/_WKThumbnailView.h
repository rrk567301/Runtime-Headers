@class WKView, CALayer, WKWebView, NSColor;

@interface _WKThumbnailView : NSView {
    struct RetainPtr<WKView> { WKView *m_ptr; } _wkView;
    struct RetainPtr<WKWebView> { WKWebView *m_ptr; } _wkWebView;
    struct WeakPtr<WebKit::WebPageProxy, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _webPageProxy;
    BOOL _originalMayStartMediaWhenInWindow;
    BOOL _originalSourceViewIsInWindow;
    BOOL _snapshotWasDeferred;
    double _lastSnapshotScale;
    struct CGSize { double width; double height; } _lastSnapshotMaximumSize;
    struct RetainPtr<NSColor> { NSColor *m_ptr; } _overrideBackgroundColor;
}

@property (nonatomic, setter=_setThumbnailLayer:) CALayer *_thumbnailLayer;
@property (nonatomic, setter=_setWaitingForSnapshot:) BOOL _waitingForSnapshot;
@property (nonatomic, setter=_setSublayerTranslation:) struct CGPoint { double x; double y; } _sublayerTranslation;
@property (nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } snapshotSize;
@property (nonatomic) struct CGSize { double width; double height; } maximumSnapshotSize;
@property (nonatomic) BOOL exclusivelyUsesSnapshot;
@property (nonatomic) BOOL shouldKeepSnapshotWhenRemovedFromSuperview;
@property (retain, nonatomic) NSColor *overrideBackgroundColor;

- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)viewDidMoveToWindow;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)requestSnapshot;
- (void)_didTakeSnapshot:(struct CGImage { } *)a0;
- (struct Ref<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>> { struct WebPageProxy *x0; })_protectedWebPageProxy;
- (void)_requestSnapshotIfNeeded;
- (void)_viewWasParented;
- (void)_viewWasUnparented;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromWKView:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromWKWebView:(id)a1;

@end
