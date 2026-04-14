@class NSImage;

@interface NSColorPickerUserView : NSView {
    NSImage *currImage;
    struct CGPoint { double x; double y; } currentPt;
    id colorPanel;
    id controllingPicker;
    NSImage *_imageForLockFocusUse;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setImage:(id)a0;
- (id)color;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_windowChangedKeyState;
- (void)moveRight:(id)a0;
- (void)moveLeft:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (unsigned long long)draggingEntered:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveUp:(id)a0;
- (BOOL)_isShowingKeyboardFocus;
- (void)setKeyboardFocusRingNeedsDisplayIfNeededInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)moveCurrentPointInDirection:(struct CGPoint { double x0; double x1; })a0;
- (void)storeColorPanel:(id)a0;
- (void)_createImageForLockFocusUseIfNecessary;
- (void)_clearImageForLockFocusUse;
- (id)_getColorFromImageAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_resizeImage;
- (id)colorFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_pointInPicker:(struct CGPoint { double x0; double x1; } *)a0;
- (void)registerForFilenameDragTypes;

@end
