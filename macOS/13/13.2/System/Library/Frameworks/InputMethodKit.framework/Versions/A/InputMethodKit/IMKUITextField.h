@class NSAttributedString;

@interface IMKUITextField : NSView

@property (nonatomic) double padding;
@property (nonatomic) long long alignment;
@property (retain, nonatomic) NSAttributedString *attributedStringValue;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (BOOL)isFlipped;
- (void)centerWithinSuperview;

@end
