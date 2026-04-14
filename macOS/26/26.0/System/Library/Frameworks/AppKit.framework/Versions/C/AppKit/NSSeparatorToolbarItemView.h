@class CALayer, NSTrackingSeparatorToolbarItem, NSTrackingArea;

@interface NSSeparatorToolbarItemView : NSView {
    BOOL _alignmentSatisfied;
    BOOL _fullHeightDividersDisabled;
    unsigned long long _controlSize;
    unsigned long long _displayMode;
    CALayer *_divider;
    NSTrackingArea *_cursorArea;
}

@property (weak) NSTrackingSeparatorToolbarItem *item;
@property (getter=isAlignmentSatisfied) BOOL alignmentSatisfied;
@property BOOL fullHeightDividersDisabled;
@property unsigned long long controlSize;
@property unsigned long long displayMode;
@property (readonly) double _dividerHeight;

- (BOOL)isOpaque;
- (void)updateLayer;
- (BOOL)allowsVibrancy;
- (void)dealloc;
- (void)layout;
- (void)pan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)resetCursorRects;
- (BOOL)wantsUpdateLayer;

@end
