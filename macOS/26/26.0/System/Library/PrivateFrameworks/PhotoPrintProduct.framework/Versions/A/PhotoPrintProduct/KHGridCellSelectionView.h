@class UXImageView, UXView;

@interface KHGridCellSelectionView : UXView

@property (readonly, nonatomic) UXImageView *dragHandleImageView;
@property (readonly, nonatomic) UXView *selectionView;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;
- (void)setTarget:(id)a0 action:(SEL)a1;

@end
