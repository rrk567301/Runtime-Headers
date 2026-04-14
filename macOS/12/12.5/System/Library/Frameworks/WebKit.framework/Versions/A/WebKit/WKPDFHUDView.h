@interface WKPDFHUDView : NSView {
    struct WeakPtr<WebKit::WebPageProxy, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _page;
    struct RetainPtr<NSString> { void *m_ptr; } _activeControl;
    struct ObjectIdentifier<WebKit::PDFPluginIdentifierType> { unsigned long long m_identifier; } _pluginIdentifier;
    double _deviceScaleFactor;
    struct RetainPtr<CALayer> { void *m_ptr; } _layer;
    struct RetainPtr<CALayer> { void *m_ptr; } _activeLayer;
    struct CGSize { double width; double height; } _frameSize;
    struct RetainPtr<NSMutableDictionary<NSString *,NSImage *>> { void *m_ptr; } _cachedIcons;
    BOOL _visible;
    BOOL _mouseMovedToHUD;
    BOOL _initialHideTimerFired;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)_setVisible:(BOOL)a0;
- (void)mouseUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pluginIdentifier:(struct ObjectIdentifier<WebKit::PDFPluginIdentifierType> { unsigned long long x0; })a1 page:(void *)a2;
- (void)setDeviceScaleFactor:(double)a0;
- (void)_setupLayer:(id)a0;
- (void)_redrawLayer;
- (void)_setLayerOpacity:(double)a0;
- (id)_controlForEvent:(id)a0;
- (id)_layerForEvent:(id)a0;
- (void)_performActionForControl:(id)a0;
- (struct optional<unsigned long> { union { char x0; unsigned long long x1; } x0; BOOL x1; })_controlIndexForEvent:(id)a0;
- (id)_getImageForControlName:(id)a0;
- (void)_loadIconImages;
- (void)_hideTimerFired;

@end
