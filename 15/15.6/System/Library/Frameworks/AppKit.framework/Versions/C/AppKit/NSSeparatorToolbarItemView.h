@class CALayer, NSTrackingSeparatorToolbarItem, NSTrackingArea;

@interface NSSeparatorToolbarItemView : NSView {
    char _alignmentSatisfied;
    char _fullHeightDividersDisabled;
    unsigned long long _controlSize;
    unsigned long long _displayMode;
    CALayer *_divider;
    NSTrackingArea *_cursorArea;
}

@property (weak) NSTrackingSeparatorToolbarItem *item;
@property (getter=isAlignmentSatisfied) char alignmentSatisfied;
@property char fullHeightDividersDisabled;
@property unsigned long long controlSize;
@property unsigned long long displayMode;
@property (readonly) double _dividerHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (char)allowsVibrancy;
- (char)gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)isOpaque;
- (void)pan:(id)a0;
- (void)resetCursorRects;
- (void)updateLayer;
- (char)wantsUpdateLayer;

@end
