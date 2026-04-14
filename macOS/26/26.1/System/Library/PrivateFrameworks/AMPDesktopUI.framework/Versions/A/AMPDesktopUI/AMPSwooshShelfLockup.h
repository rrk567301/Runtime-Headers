@class NSString, NSScrollView, AMPCollectionView, NSCollectionViewDiffableDataSource, NSLayoutConstraint, NSLayoutDimension, NSButton;
@protocol AMPSwooshShelfLockupModel;

@interface AMPSwooshShelfLockup : AMPBindableView <NSAccessibilityGroup, NSCollectionViewDelegate>

@property (retain, nonatomic) Class cellClass;
@property (retain, nonatomic) AMPCollectionView *collection;
@property (retain, nonatomic) NSScrollView *scroller;
@property (retain, nonatomic) NSCollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSLayoutDimension *columnWidthDimension;
@property (retain, nonatomic) NSLayoutConstraint *columnWidthConstraint;
@property (retain, nonatomic) NSButton *sectionHeader;
@property (retain, nonatomic) id<AMPSwooshShelfLockupModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesInvalidatingConstraints;
+ (long long)columnCountForWidth:(double)a0;

- (void)startObserving;
- (id)accessibilityLabel;
- (void)layout;
- (void)commonInit;
- (void)mouseExited:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setHidden:(BOOL)a0;
- (void)updateConstraints;
- (void)mouseEntered:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)mouseMoved:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)generateSnapshot;
- (double)currentColumnWidth;
- (void)doScrollBackward:(id)a0;
- (void)doScrollForward:(id)a0;
- (void)handleModelContentsChanged;
- (id)initWithCellClass:(Class)a0;
- (void)reflectHeaderAction:(id)a0;
- (void)updateRolloverStates:(struct CGPoint { double x0; double x1; })a0;

@end
