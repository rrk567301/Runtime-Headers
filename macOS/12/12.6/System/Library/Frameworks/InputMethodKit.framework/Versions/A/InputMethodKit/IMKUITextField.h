@class NSAttributedString;

@interface IMKUITextField : NSView

@property (nonatomic) double padding;
@property (nonatomic) long long alignment;
@property (retain, nonatomic) NSAttributedString *attributedStringValue;

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)centerWithinSuperview;

@end
