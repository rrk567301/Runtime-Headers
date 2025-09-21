@class NSString, NSUICollectionViewLayout, NSUICollectionView;

@interface NSUICollectionViewController : UXViewController <NSUICollectionViewDelegate, NSUICollectionViewDataSource> {
    NSUICollectionViewLayout *_layout;
    NSUICollectionView *_collectionView;
    struct { unsigned char clearsSelectionOnViewWillAppear : 1; unsigned char useLayoutToLayoutNavigationTransitions : 1; } _collectionViewControllerFlags;
}

@property BOOL _usesSharedView;
@property (retain, nonatomic) NSUICollectionView *collectionView;
@property (nonatomic) BOOL clearsSelectionOnViewWillAppear;
@property (nonatomic) BOOL useLayoutToLayoutNavigationTransitions;
@property (readonly, nonatomic) NSUICollectionViewLayout *collectionViewLayout;
@property (nonatomic) BOOL allowsResizeOfWindowBasedOnContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)loadView;
- (void)dealloc;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)setView:(id)a0;
- (id)dataSource;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)_clearSharedView;
- (id)_newCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)_setSharedCollectionView:(id)a0;
- (id)_wrappingView;
- (id)contentScrollView;
- (BOOL)shouldCrossFadeBottomBars;
- (BOOL)shouldCrossFadeNavigationBar;
- (id)_NSUICollectionView;

@end
