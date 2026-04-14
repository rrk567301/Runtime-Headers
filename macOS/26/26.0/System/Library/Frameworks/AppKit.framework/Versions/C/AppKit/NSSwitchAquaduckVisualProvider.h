@class NSView;

@interface NSSwitchAquaduckVisualProvider : NSObject <NSSwitchVisualProvider> {
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ nsSwitch;
}

@property (nonatomic) struct { double x0; unsigned long long x1; long long x2; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; } currentDrawingState;
@property (nonatomic, readonly) NSView *designatedFocusRingView;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trackRect;

- (void)layout;
- (id)init;
- (void).cxx_destruct;
- (void)attachToSwitch:(id)a0;
- (void)detachFromSwitch:(id)a0;
- (void)removeSubviews;

@end
