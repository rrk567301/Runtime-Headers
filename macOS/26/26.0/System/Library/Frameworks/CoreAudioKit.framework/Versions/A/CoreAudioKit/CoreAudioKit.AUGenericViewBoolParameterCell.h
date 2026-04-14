@class NSColor;

@interface CoreAudioKit.AUGenericViewBoolParameterCell : CoreAudioKit.AUGenericViewParameterCellBase

@property (nonatomic, weak) void /* function */ valueSwitch;
@property (nonatomic, retain) NSColor *tintColor;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)switchValueChangedWithSender:(id)a0;

@end
