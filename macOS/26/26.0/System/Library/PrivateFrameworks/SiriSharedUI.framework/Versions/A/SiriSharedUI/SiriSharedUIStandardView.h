@interface SiriSharedUIStandardView : NSView

- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsLayer;
- (BOOL)isSemanticContentAttributeRightToLeft;

@end
