@class NSColor;

@interface CoreAudioKit.AUGenericViewMeterParameterCell : CoreAudioKit.AUGenericViewParameterCellBase

@property (nonatomic, weak) void /* function */ meter;
@property (nonatomic, weak) void /* function */ unitLabel;
@property (nonatomic, weak) void /* function */ minLabel;
@property (nonatomic, weak) void /* function */ maxLabel;
@property (nonatomic, weak) void /* function */ minWidthConstraint;
@property (nonatomic, retain) NSColor *tintColor;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
