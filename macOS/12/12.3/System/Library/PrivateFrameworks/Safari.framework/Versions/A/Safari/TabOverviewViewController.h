@class NSString, NSURL, NSScrollView, NSArray, NSCollectionViewFlowLayout, BrowserWindowTabViewController, CustomViewSnapshotCache, NSCollectionView;

@interface TabOverviewViewController : NSViewController <NSCollectionViewDataSource, NSCollectionViewDelegate> {
    NSCollectionView *_collectionView;
    NSCollectionViewFlowLayout *_flowLayout;
    NSScrollView *_scrollView;
    NSArray *_tabs;
    NSString *_title;
    BrowserWindowTabViewController *_browserWindowTabViewController;
    CustomViewSnapshotCache *_customViewSnapshotCache;
}

@property (class, readonly, nonatomic) NSURL *url;

@property (readonly, copy, nonatomic) NSString *pageTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillLayout;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (struct CGSize { double x0; double x1; })_calculatedItemSize;
- (void)updateWithTabGroup:(id)a0 tabViewController:(id)a1 customViewSnapshotCache:(id)a2;

@end
