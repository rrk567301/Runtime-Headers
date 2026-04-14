@class NSString, NSOrderedSet, _NSQuickActionTouchBarItem, NSCollectionView;
@protocol _NSQuickActionTouchBarCollectionViewControllerDelegate;

@interface _NSQuickActionTouchBarCollectionViewController : NSViewController <_NSQuickActionTouchBarItemDelegate, NSCollectionViewDataSource, NSCollectionViewDelegateFlowLayout> {
    NSOrderedSet *_orderedDataSources;
    NSCollectionView *_collectionView;
    _NSQuickActionTouchBarItem *_prototypeItem;
    BOOL _collectionViewIsVisible;
}

@property (weak) id<_NSQuickActionTouchBarCollectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)loadView;
- (void)viewDidAppear;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)invokeQuickActionForItem:(id)a0;
- (void)updateOrderedDataSources:(id)a0;
- (void)viewDidDisappear;

@end
