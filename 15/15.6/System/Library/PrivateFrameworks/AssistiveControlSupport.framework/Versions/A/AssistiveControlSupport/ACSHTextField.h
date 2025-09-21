@interface ACSHTextField : NSTextField

@property char hiddenDueToTruncation;
@property char shouldHideIfTruncated;
@property (nonatomic) unsigned long long verticalTextPlacement;

+ (Class)cellClass;

- (id)initWithCoder:(id)a0;
- (void)setStringValue:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)_isTruncated;
- (void)_updateHideShowForTruncation;
- (void)initView;

@end
