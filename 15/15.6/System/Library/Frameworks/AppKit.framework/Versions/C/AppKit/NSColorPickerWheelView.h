@class NSImage, NSColorSpace;

@interface NSColorPickerWheelView : NSView {
    char _wheelImageIsValid;
    NSImage *_wheelImage;
    struct CGPoint { double x; double y; } currentPt;
    char _isTracking;
    id colorPanel;
    id controllingPicker;
    double _brightness;
    NSColorSpace *_preferredDisplayColorSpace;
}

@property (retain) NSColorSpace *preferredDisplayColorSpace;
@property (readonly, retain) NSColorSpace *effectiveDisplayColorSpace;

+ (id)preferredColorSpaces;

- (id)color;
- (void)setColor:(id)a0;
- (char)_pointInPicker:(struct CGPoint { double x0; double x1; } *)a0;
- (void)moveUp:(id)a0;
- (id)_brightColorFromPoint:(struct CGPoint { double x0; double x1; })a0 fullBrightness:(char)a1;
- (id)_colorFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_displayFallbackColorSpace;
- (void)_invalidateWheelImage;
- (char)_isShowingKeyboardFocus;
- (struct CGPoint { double x0; double x1; })_pointFromColor:(id)a0;
- (id)_resizeView;
- (void)_selectColorSpace:(id)a0;
- (void)_setPointerKeyboardFocusNeedsDisplay;
- (id)_wheelImage;
- (void)_windowChangedKeyState;
- (char)acceptsFirstMouse:(id)a0;
- (char)acceptsFirstResponder;
- (char)becomeFirstResponder;
- (id)brightColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isTracking;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (char)mouseDownCanMoveWindow;
- (void)moveCurrentPointInDirection:(struct CGPoint { double x0; double x1; })a0;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (char)needsPanelToBecomeKey;
- (char)resignFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionAnchorRect;
- (void)setBrightness:(double)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setKeyboardFocusRingNeedsDisplayIfNeededInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)storeColorPanel:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void)viewSizeChanged:(id)a0;

@end
