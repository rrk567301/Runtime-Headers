@interface GFTooltipWindow : NSPanel

+ (id)sharedWindow;

- (void)setContentView:(id)a0;
- (id)init;
- (void)hide;
- (void)showAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
