@interface FI_IActionButtonCell : FI_TButtonCell

@property (readonly, nonatomic) BOOL inRollOverState;

- (BOOL)isSelected;
- (void)setHighlighted:(BOOL)a0;
- (void)initCommon;
- (void)mouseExited:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (BOOL)isOpaque;
- (void)mouseEntered:(id)a0;
- (id)init;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)imageForActionButtonState:(int)a0;
- (void)updateActionButtonImage;

@end
