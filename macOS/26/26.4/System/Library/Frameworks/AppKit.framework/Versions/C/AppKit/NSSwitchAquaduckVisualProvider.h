@class NSView;

@interface NSSwitchAquaduckVisualProvider : NSObject <NSSwitchVisualProvider> {
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ nsSwitch;
}

@property (nonatomic, readonly) NSView *designatedFocusRingView;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)layout;
- (void).cxx_destruct;
- (id)init;
- (void)attachToSwitch:(id)a0;
- (void)detachFromSwitch:(id)a0;
- (void)removeSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateDrawingState:(struct { double x0; unsigned long long x1; long long x2; id x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; })a0;

@end
