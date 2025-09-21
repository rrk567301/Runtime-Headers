@class NSObject;

@interface AUNSFineSlider : NSSlider {
    struct CGPoint { double x; double y; } mLastMousePoint;
    NSObject *mOwningParameterStrip;
}

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)mouseDragged:(id)a0;
- (BOOL)isVertical;
- (BOOL)mouseDownCanMoveWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 owningParameterStrip:(id)a1;
- (void)privInvokeAction;
- (float)privValForEvent:(id)a0;

@end
