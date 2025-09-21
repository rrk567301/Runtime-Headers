@class NSResponder;

@interface SwiftUI.KeyViewProxy : NSView {
    void /* unknown type, empty encoding */ focusBridge;
    void /* unknown type, empty encoding */ focusResponder;
}

@property (nonatomic, readonly) char acceptsFirstResponder;
@property (nonatomic, retain) NSResponder *nextResponder;
@property (nonatomic) char flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)designatedFocusRingView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)selectNextKeyView:(id)a0;
- (void)selectPreviousKeyView:(id)a0;

@end
