@class NSResponder;

@interface SwiftUI.KeyViewProxy : NSView {
    void /* unknown type, empty encoding */ focusBridge;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;
@property (nonatomic, retain) NSResponder *nextResponder;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)designatedFocusRingView;
- (void)selectNextKeyView:(id)a0;
- (void)selectPreviousKeyView:(id)a0;

@end
