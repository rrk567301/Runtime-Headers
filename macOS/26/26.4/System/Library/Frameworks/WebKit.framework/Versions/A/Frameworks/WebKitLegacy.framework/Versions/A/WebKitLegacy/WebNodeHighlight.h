@class NSView, NSWindow, WebNodeHighlightView;

@interface WebNodeHighlight : NSObject {
    NSView *_targetView;
    NSWindow *_highlightWindow;
    WebNodeHighlightView *_highlightView;
    struct NakedPtr<WebCore::PageInspectorController> { struct PageInspectorController *m_ptr; } _inspectorController;
    id _delegate;
}

- (id)delegate;
- (void)detach;
- (id)highlightView;
- (void)attach;
- (void)setDelegate:(id)a0;
- (id)targetView;
- (id).cxx_construct;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computeHighlightWindowFrame;
- (void)setNeedsUpdateInTargetViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_repositionHighlightWindow;
- (id)initWithTargetView:(id)a0 inspectorController:(struct NakedPtr<WebCore::PageInspectorController> { struct PageInspectorController *x0; })a1;
- (struct NakedPtr<WebCore::PageInspectorController> { struct PageInspectorController *x0; })inspectorController;

@end
