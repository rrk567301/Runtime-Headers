@class NSTextField, MarqueeView, DualMaskedView, NSColor;

@interface AMPScrollingLabel : NSControl

@property (retain, nonatomic) DualMaskedView *dualMask;
@property (retain, nonatomic) MarqueeView *marquee;
@property (retain, nonatomic) NSTextField *actualLabel;
@property (copy) NSColor *textColor;

- (id)objectValue;
- (void)setObjectValue:(id)a0;
- (double)baselineOffsetFromBottom;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)font;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStringValue:(id)a0;
- (void)setAttributedStringValue:(id)a0;
- (id)stringValue;
- (void)setFont:(id)a0;
- (double)firstBaselineOffsetFromTop;
- (void).cxx_destruct;
- (id)attributedStringValue;

@end
