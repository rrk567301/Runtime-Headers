@class NSTableView, NSLayoutConstraint;

@interface _MKTableViewControllerRootView : _MKUIViewControllerRootView {
    BOOL _performedInitialTableReload;
}

@property (readonly, nonatomic) NSLayoutConstraint *heightConstraint;
@property (weak, nonatomic) NSTableView *tableView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)updateConstraints;
- (void).cxx_destruct;
- (double)tableViewTotalHeight;
- (void)updateTableHeightConstraintAnimated:(BOOL)a0;

@end
