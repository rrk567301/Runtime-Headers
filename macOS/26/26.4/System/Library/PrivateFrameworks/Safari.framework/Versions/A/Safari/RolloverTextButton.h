@class NSString;

@interface RolloverTextButton : RolloverTrackingButton {
    NSString *_originalTitle;
}

@property (nonatomic) double cornerRadius;

+ (void)initialize;
+ (id)font;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)_setAttributes;

@end
