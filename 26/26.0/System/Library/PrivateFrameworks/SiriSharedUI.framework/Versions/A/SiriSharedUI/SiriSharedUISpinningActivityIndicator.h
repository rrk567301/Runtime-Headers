@class CALayer;

@interface SiriSharedUISpinningActivityIndicator : NSView

@property (nonatomic) double ringDotScaleFinalValue;
@property (nonatomic) double ringDotInset;
@property (nonatomic) double ringDotRotationDuration;
@property (nonatomic) double ringBorderMaskWidth;
@property (nonatomic, retain) CALayer *contentLayer;
@property (nonatomic, retain) CALayer *dotMaskLayer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)showSpinner;

@end
