@class FUStyleProvider;
@protocol FUDotIndicatorTarget;

@interface FUDotIndicator : NSView {
    BOOL _mouseClickStarted;
}

@property (weak, nonatomic) id<FUDotIndicatorTarget> target;
@property (retain, nonatomic) FUStyleProvider *provider;
@property (nonatomic) unsigned long long selectedSegment;
@property (nonatomic) unsigned long long segmentCount;
@property (readonly, nonatomic) long long integerValue;

- (void)mouseDown:(id)a0;
- (void)mouseExited:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;
- (BOOL)allowsVibrancy;

@end
