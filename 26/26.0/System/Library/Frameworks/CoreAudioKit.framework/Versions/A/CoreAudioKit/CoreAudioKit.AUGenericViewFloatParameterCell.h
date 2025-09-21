@class NSColor;

@interface CoreAudioKit.AUGenericViewFloatParameterCell : CoreAudioKit.AUGenericViewParameterCellBase

@property (nonatomic, weak) void /* function */ valueSlider;
@property (nonatomic, weak) void /* function */ unitLabel;
@property (nonatomic, retain) NSColor *tintColor;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)sliderReleasedWithSender:(id)a0;
- (void)sliderTouchedWithSender:(id)a0;
- (void)sliderValueChangedWithSender:(id)a0;

@end
