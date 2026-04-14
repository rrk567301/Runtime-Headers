@class NSColor;

@interface CoreAudioKit.AUGenericViewFloatParameterCell : CoreAudioKit.AUGenericViewParameterCellBase

@property (nonatomic, weak) void /* unknown type, empty encoding */ valueSlider;
@property (nonatomic, weak) void /* unknown type, empty encoding */ unitLabel;
@property (nonatomic, retain) NSColor *tintColor;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)sliderValueChangedWithSender:(id)a0;
- (void)sliderTouchedWithSender:(id)a0;
- (void)sliderReleasedWithSender:(id)a0;

@end
