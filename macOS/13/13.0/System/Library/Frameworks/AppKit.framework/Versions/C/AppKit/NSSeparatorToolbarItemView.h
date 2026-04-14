@class CALayer, NSTrackingSeparatorToolbarItem;

@interface NSSeparatorToolbarItemView : NSView {
    BOOL _alignmentSatisfied;
    BOOL _fullHeightDividersDisabled;
    unsigned long long _controlSize;
    unsigned long long _displayMode;
    CALayer *_divider;
}

@property (weak) NSTrackingSeparatorToolbarItem *item;
@property (getter=isAlignmentSatisfied) BOOL alignmentSatisfied;
@property BOOL fullHeightDividersDisabled;
@property unsigned long long controlSize;
@property unsigned long long displayMode;
@property (readonly) double _dividerHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)allowsVibrancy;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)_updateDividerRect;
- (BOOL)gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;
- (void)pan:(id)a0;
- (void)resetCursorRects;

@end
