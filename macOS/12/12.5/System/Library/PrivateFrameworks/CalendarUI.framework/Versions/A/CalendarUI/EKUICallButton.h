@interface EKUICallButton : NSButton

- (id)init;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawFocusRingMask;
- (id)callIconImageWithTint:(id)a0;

@end
