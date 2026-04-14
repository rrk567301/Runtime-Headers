@interface SiriSharedUIStandardView : NSView

- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isFlipped;
- (BOOL)wantsLayer;
- (BOOL)isSemanticContentAttributeRightToLeft;

@end
