@class NSTextField, MarqueeView, DualMaskedView, NSColor;

@interface AMPScrollingLabel : NSControl

@property (retain, nonatomic) DualMaskedView *dualMask;
@property (retain, nonatomic) MarqueeView *marquee;
@property (retain, nonatomic) NSTextField *actualLabel;
@property (copy) NSColor *textColor;

- (void)setObjectValue:(id)a0;
- (double)baselineOffsetFromBottom;
- (void)setStringValue:(id)a0;
- (void)setFont:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setAttributedStringValue:(id)a0;
- (id)objectValue;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)stringValue;
- (double)firstBaselineOffsetFromTop;
- (id)font;
- (id)attributedStringValue;

@end
