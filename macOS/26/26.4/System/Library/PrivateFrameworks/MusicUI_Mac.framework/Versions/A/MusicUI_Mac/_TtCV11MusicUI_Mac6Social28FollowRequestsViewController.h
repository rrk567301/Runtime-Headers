@interface _TtCV11MusicUI_Mac6Social28FollowRequestsViewController : MusicUI_Mac.CollectionViewController <NSCollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ userDidUpdateFollowRequestsHandler;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ artworkCachingContext;
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ socialProfiles;
    void /* unknown type, empty encoding */ contentDescriptors;
    void /* unknown type, empty encoding */ closeButton;
}

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 canDragItemsAtIndexPaths:(id)a1 withEvent:(id)a2;
- (id)collectionView:(id)a0 shouldSelectItemsAtIndexPaths:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayout;
- (id)init;
- (void)dealloc;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;

@end
