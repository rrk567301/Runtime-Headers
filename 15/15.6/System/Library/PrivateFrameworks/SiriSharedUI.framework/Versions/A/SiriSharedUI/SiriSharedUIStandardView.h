@interface SiriSharedUIStandardView : NSView

- (void)setNeedsDisplay;
- (char)isFlipped;
- (void)setNeedsLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (char)wantsLayer;
- (char)isSemanticContentAttributeRightToLeft;

@end
