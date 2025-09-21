@class NSColor;

@interface CoreAudioKit.AUGenericViewParameterCellBase : CoreAudioKit.CocoaView {
    void /* unknown type, empty encoding */ owner;
    void /* unknown type, empty encoding */ param;
}

@property (nonatomic, weak) void /* function */ parameterName;
@property (nonatomic, weak) void /* function */ valueLabel;
@property (nonatomic, weak) void /* function */ parameterWidthConstraint;
@property (nonatomic, weak) void /* function */ valueStackWidthConstraint;
@property (nonatomic, retain) NSColor *tintColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
