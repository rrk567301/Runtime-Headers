@class SOCorrectionCollectionHeaderView, NSString, NSCollectionViewFlowLayout, NSTrackingArea, SOCorrectionCollectionViewItem, NSMutableArray, NSCollectionView;

@interface SOCorrectionViewController : NSViewController <NSCollectionViewDataSource, NSCollectionViewDelegate, NSCollectionViewDelegateFlowLayout, NSWindowDelegate>

@property NSMutableArray *suggestedStrings;
@property NSCollectionView *collectionView;
@property NSCollectionViewFlowLayout *collectionLayout;
@property NSTrackingArea *correctionsTrackingArea;
@property NSString *selectedString;
@property NSString *selectedAlternativeString;
@property SOCorrectionCollectionHeaderView *sizingCollectionViewHeaderItem;
@property SOCorrectionCollectionViewItem *sizingCollectionViewItem;
@property NSMutableArray *badgeWidths;
@property double smallTextViewWidth;
@property double mediumTextViewWidth;
@property double largeTextViewWidth;
@property (copy) id /* block */ completionBlock;
@property BOOL keyInWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLayout;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)loadView;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithSelectedString:(id)a0 alternativeStrings:(id)a1 emojiStrings:(id)a2;
- (void)_processAlternativeStrings:(id)a0 emojiStrings:(id)a1;
- (void)_computeSizingForBadges;

@end
