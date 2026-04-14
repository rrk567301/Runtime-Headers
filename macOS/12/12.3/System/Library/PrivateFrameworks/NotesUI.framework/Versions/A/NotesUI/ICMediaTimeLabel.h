@class ICMediaTime;

@interface ICMediaTimeLabel : NSTextField

@property (copy, nonatomic) ICMediaTime *mediaTimeValue;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)setMediaTimeValue:(id)a0;
- (id)mediaTimeValue;

@end
