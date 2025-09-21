@class NSString, NSResponder;

@interface SwiftUI.KeyViewProxy : NSView {
    void /* unknown type, empty encoding */ focusBridge;
    void /* unknown type, empty encoding */ focusResponder;
    void /* unknown type, empty encoding */ cacheVersion;
    void /* unknown type, empty encoding */ addressLabel;
    void /* unknown type, empty encoding */ descriptionLabel;
    void /* function */ focusDebugDescription;
    void /* unknown type, empty encoding */ layerColor;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;
@property (nonatomic, retain) NSResponder *nextResponder;
@property (nonatomic) BOOL flipped;
@property (nonatomic, copy) NSString *focusDebugDescription;
@property (nonatomic, readonly) BOOL wantsUpdateLayer;

- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)designatedFocusRingView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)selectNextKeyView:(id)a0;
- (void)selectPreviousKeyView:(id)a0;

@end
