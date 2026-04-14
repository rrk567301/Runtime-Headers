@class NSDictionary, NSViewServiceMarshal;

@interface NSViewServiceAccessoryView : NSView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _screenRelativeFrameMostRecentlyReported;
    unsigned char _informingHostOfChangeToGeometry : 1;
    unsigned char _disclosedEnoughToBecomeKeyView : 1;
}

@property (retain) NSDictionary *hostAccessibilityChildren;
@property (weak) NSViewServiceMarshal *serviceMarshal;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (BOOL)canBecomeKeyView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)renewGState;
- (void)connectContext:(unsigned int)a0;
- (id)_updateAccessoryViewAccessibility:(id)a0;
- (id)accessibilityChildren:(id)a0;
- (void)disclose:(BOOL)a0 withAnimation:(unsigned char)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRelativeToWindow;
- (void)informHostOfChangeToGeometry;
- (id)updateAccessoryViewAccessibility:(id)a0;

@end
