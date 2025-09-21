@class NSString;

@interface RolloverTextButton : RolloverTrackingButton {
    NSString *_originalTitle;
}

@property (nonatomic) double cornerRadius;

+ (id)font;
+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_setAttributes;

@end
