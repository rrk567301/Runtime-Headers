@interface TKContentView : NSView {
    id _savedSubviews;
    char _subviewsSetAside;
}

- (void)_drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 clip:(char)a1;
- (void)delete:(id)a0;
- (char)_drawRectIfEmpty;
- (void)_recursiveDisplayAllDirtyWithLockFocus:(char)a0 visRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_recursiveDisplayRectIfNeededIgnoringOpacity:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isVisibleRect:(char)a1 rectIsVisibleRectForView:(id)a2 topView:(char)a3;
- (char)acceptsFirstResponder;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isOpaque;
- (void)keyDown:(id)a0;
- (void)paste:(id)a0;
- (void)redo:(id)a0;
- (void)undo:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;
- (char)wantsDefaultClipping;
- (void)_recursive:(char)a0 displayRectIgnoringOpacity:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(id)a2 topView:(char)a3;
- (void)_restoreSubviews;
- (void)_setAsideSubviews;
- (void)_lightWeightRecursiveDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)generateExposeEvents:(struct __HIShape { } *)a0;
- (void)tkToolbarButton:(id)a0;

@end
