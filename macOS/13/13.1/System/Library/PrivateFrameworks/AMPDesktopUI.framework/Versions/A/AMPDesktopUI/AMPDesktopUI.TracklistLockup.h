@interface AMPDesktopUI.TracklistLockup : NSScrollView <NSCollectionViewDataSource, NSCollectionViewDelegate> {
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ trackIdent;
    void /* unknown type, empty encoding */ albumHeaderIdent;
    void /* unknown type, empty encoding */ artworkIdent;
    void /* unknown type, empty encoding */ pageHeaderLockup;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;

+ (id)lockup;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemsAtIndexPaths:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
