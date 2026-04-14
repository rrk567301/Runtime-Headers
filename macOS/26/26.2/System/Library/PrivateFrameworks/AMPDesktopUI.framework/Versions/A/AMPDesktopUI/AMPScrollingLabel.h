@class NSTextField, MarqueeView, DualMaskedView, NSColor;

@interface AMPScrollingLabel : NSControl

@property (retain, nonatomic) DualMaskedView *dualMask;
@property (retain, nonatomic) MarqueeView *marquee;
@property (retain, nonatomic) NSTextField *actualLabel;
@property (copy) NSColor *textColor;

- (id)objectValue;
- (double)baselineOffsetFromBottom;
- (void)setObjectValue:(id)a0;
- (void)setStringValue:(id)a0;
- (void)setAttributedStringValue:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (double)firstBaselineOffsetFromTop;
- (id)font;
- (void)setFont:(id)a0;
- (void).cxx_destruct;
- (id)stringValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)attributedStringValue;

@end
