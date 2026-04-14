@interface EKUICallButton : NSButton

- (id)init;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawFocusRingMask;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)callIconImageWithTint:(id)a0;

@end
