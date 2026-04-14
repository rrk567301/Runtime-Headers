@interface PRSLevelIndicatorView : NSTextField {
    float _floatValue;
}

@property double minValue;
@property double maxValue;

+ (id)starsAttributedStringForValue:(float)a0 maxValue:(float)a1;

- (float)floatValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFloatValue:(float)a0;

@end
