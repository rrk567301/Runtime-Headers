@class NSSlider;

@interface AVScrollSliderView : NSView

@property (weak) NSSlider *slider;

- (void).cxx_destruct;
- (void)scrollWheel:(id)a0;
- (void)beginGestureWithEvent:(id)a0;
- (double)_horizontalInversionMultiplierForEvent:(id)a0;
- (double)_verticalInversionMultiplierForEvent:(id)a0;

@end
