@class NSString;

@interface RolloverTextButton : RolloverTrackingButton {
    NSString *_originalTitle;
}

+ (void)initialize;
+ (id)font;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)_setAttributes;

@end
