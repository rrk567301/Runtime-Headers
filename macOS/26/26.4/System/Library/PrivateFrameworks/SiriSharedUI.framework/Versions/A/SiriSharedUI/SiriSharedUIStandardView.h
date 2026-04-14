@interface SiriSharedUIStandardView : NSView

- (void)setNeedsDisplay;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isFlipped;
- (void)setNeedsLayout;
- (BOOL)wantsLayer;
- (BOOL)isSemanticContentAttributeRightToLeft;

@end
