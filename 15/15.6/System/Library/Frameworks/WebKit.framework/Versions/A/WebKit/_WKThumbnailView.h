@class CALayer, NSColor;

@interface _WKThumbnailView : NSView {
    struct RetainPtr<WKView> { void *m_ptr; } _wkView;
    struct RetainPtr<WKWebView> { void *m_ptr; } _wkWebView;
    struct NakedPtr<WebKit::WebPageProxy> { struct WebPageProxy *m_ptr; } _webPageProxy;
    char _originalMayStartMediaWhenInWindow;
    char _originalSourceViewIsInWindow;
    char _snapshotWasDeferred;
    double _lastSnapshotScale;
    struct CGSize { double width; double height; } _lastSnapshotMaximumSize;
    struct RetainPtr<NSColor> { void *m_ptr; } _overrideBackgroundColor;
}

@property (nonatomic, setter=_setThumbnailLayer:) CALayer *_thumbnailLayer;
@property (nonatomic, setter=_setWaitingForSnapshot:) char _waitingForSnapshot;
@property (nonatomic, setter=_setSublayerVerticalTranslationAmount:) double _sublayerVerticalTranslationAmount;
@property (nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } snapshotSize;
@property (nonatomic) struct CGSize { double width; double height; } maximumSnapshotSize;
@property (nonatomic) char exclusivelyUsesSnapshot;
@property (nonatomic) char shouldKeepSnapshotWhenRemovedFromSuperview;
@property (retain, nonatomic) NSColor *overrideBackgroundColor;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (char)wantsUpdateLayer;
- (void)requestSnapshot;
- (void)_didTakeSnapshot:(struct CGImage { } *)a0;
- (void)_requestSnapshotIfNeeded;
- (void)_viewWasParented;
- (void)_viewWasUnparented;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromWKView:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromWKWebView:(id)a1;

@end
