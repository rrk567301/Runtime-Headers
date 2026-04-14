@class NSView, NSWindow, WebNodeHighlightView;

@interface WebNodeHighlight : NSObject {
    NSView *_targetView;
    NSWindow *_highlightWindow;
    WebNodeHighlightView *_highlightView;
    struct NakedPtr<WebCore::InspectorController> { struct InspectorController *m_ptr; } _inspectorController;
    id _delegate;
}

- (void)detach;
- (id).cxx_construct;
- (id)highlightView;
- (id)targetView;
- (void)attach;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computeHighlightWindowFrame;
- (void)setNeedsUpdateInTargetViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_repositionHighlightWindow;
- (id)initWithTargetView:(id)a0 inspectorController:(struct NakedPtr<WebCore::InspectorController> { struct InspectorController *x0; })a1;
- (struct NakedPtr<WebCore::InspectorController> { struct InspectorController *x0; })inspectorController;

@end
