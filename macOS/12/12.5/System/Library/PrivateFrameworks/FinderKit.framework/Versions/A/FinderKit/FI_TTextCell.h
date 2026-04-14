@class NSColor;

@interface FI_TTextCell : NSTextFieldCell {
    NSColor *_enabledTextColor;
    NSColor *_disabledTextColor;
}

@property (retain, nonatomic) NSColor *enabledTextColor;
@property (retain, nonatomic) NSColor *disabledTextColor;
@property (nonatomic) BOOL drawGrayTextWhenDisabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)awakeFromNib;
- (id)initTextCell:(id)a0;
- (unsigned long long)hitTestForEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (id)disabledTextColor;
- (void)setDisabledTextColor:(id)a0;
- (void)initCommon;
- (id)enabledTextColor;
- (void)awakeCommon;
- (void)setEnabledTextColor:(id)a0;

@end
