@class NSSlider;
@protocol AVScrollSliderViewDelegate;

@interface AVScrollSliderView : NSView

@property (weak, nonatomic) id<AVScrollSliderViewDelegate> delegate;
@property (weak) NSSlider *slider;
@property (nonatomic) double scrollWheelMultiplier;

- (id)init;
- (void).cxx_destruct;
- (void)beginGestureWithEvent:(id)a0;
- (void)scrollWheel:(id)a0;
- (double)_horizontalInversionMultiplierForEvent:(id)a0;
- (double)_verticalInversionMultiplierForEvent:(id)a0;

@end
