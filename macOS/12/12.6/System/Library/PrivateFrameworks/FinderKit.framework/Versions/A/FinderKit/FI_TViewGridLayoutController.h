@class FI_TViewGridLayoutControllerDelegate;

@interface FI_TViewGridLayoutController : FI_TGridLayoutController {
    FI_TViewGridLayoutControllerDelegate *_delegate;
}

@property (nonatomic) BOOL layoutInRows;
@property (nonatomic) BOOL isLTRLayout;

- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isLTRLayout;
- (void)setAnchoredCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLayoutBounds:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)setLayoutInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a0;
- (BOOL)layoutInRows;
- (void)setLayoutInRows:(BOOL)a0;
- (void)setIsLTRLayout:(BOOL)a0;

@end
