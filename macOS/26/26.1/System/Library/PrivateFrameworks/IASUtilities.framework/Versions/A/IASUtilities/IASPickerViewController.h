@class NSArray, NSArrayController, IASMagicPocketScrollView, NSLayoutConstraint, NSButton, NSCollectionView;

@interface IASPickerViewController : NSViewController

@property (weak) NSLayoutConstraint *scrollerButtonWidthConstraint;
@property (weak) NSLayoutConstraint *collectionViewWidthConstraint;
@property (weak) NSCollectionView *collectionView;
@property (weak) NSArrayController *itemArrayController;
@property (weak) IASMagicPocketScrollView *scroller;
@property (weak) NSButton *scrollLeftButton;
@property (weak) NSButton *scrollRightButton;
@property (retain) NSArray *content;

+ (void)initialize;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)awakeFromNib;
- (void)pressedScrollLeftButton:(id)a0;
- (void)pressedScrollRightButton:(id)a0;
- (void)recalculateCollectionWidthConstraint;

@end
