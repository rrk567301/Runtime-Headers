@class CNLikenessSelectionView, CNRecentLikenessesViewController, NSTextField;

@interface CNLikenessCollectionItem : NSCollectionViewItem

@property (retain, nonatomic) CNLikenessSelectionView *selectionView;
@property (weak) CNRecentLikenessesViewController *recentsViewController;
@property (weak) NSTextField *label;

- (void).cxx_destruct;
- (id)contentView;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)loadView;
- (BOOL)accessibilityPerformPress;
- (void)showSelectionImage:(id)a0;

@end
