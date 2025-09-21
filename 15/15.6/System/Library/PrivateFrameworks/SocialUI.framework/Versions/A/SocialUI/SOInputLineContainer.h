@interface SOInputLineContainer : NSView

@property (class, readonly) double inputLineBorderWidth;

@property (nonatomic) char drawBorder;

- (id)initWithCoder:(id)a0;
- (char)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (char)wantsUpdateLayer;
- (void)_commonInitInputLineContainer;

@end
