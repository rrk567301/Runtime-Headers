@class NSSlider;
@protocol AVScrollSliderViewDelegate;

@interface AVScrollSliderView : NSView

@property (weak, nonatomic) id<AVScrollSliderViewDelegate> delegate;
@property (weak) NSSlider *slider;
@property (nonatomic) double scrollWheelMultiplier;

- (void).cxx_destruct;
- (id)init;
- (void)beginGestureWithEvent:(id)a0;
- (void)scrollWheel:(id)a0;
- (double)_horizontalInversionMultiplierForEvent:(id)a0;
- (double)_verticalInversionMultiplierForEvent:(id)a0;

@end
