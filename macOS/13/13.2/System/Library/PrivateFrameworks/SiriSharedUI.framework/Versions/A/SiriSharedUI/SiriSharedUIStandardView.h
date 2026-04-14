@interface SiriSharedUIStandardView : NSView

- (BOOL)wantsLayer;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (BOOL)isSemanticContentAttributeRightToLeft;

@end
