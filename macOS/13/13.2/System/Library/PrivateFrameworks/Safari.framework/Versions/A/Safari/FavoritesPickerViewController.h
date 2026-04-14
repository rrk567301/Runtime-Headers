@class NSString, NSMapTable, NSPointerArray;
@protocol FavoritesPickerViewControllerDelegate, FavoritesPickerViewControllerDataSource;

@interface FavoritesPickerViewController : NSViewController <FavoritesPickerCellViewAccessibilityDelegate, NSScrubberDataSource, NSScrubberDelegate, NSScrubberFlowLayoutDelegate> {
    NSMapTable *_cellViewsToTokens;
    NSPointerArray *_cellViews;
    BOOL _ignoreSelectionChange;
}

@property (weak, nonatomic) id<FavoritesPickerViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<FavoritesPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)numberOfItemsForScrubber:(id)a0;
- (void)scrubber:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)didFinishInteractingWithScrubber:(id)a0;
- (void)reloadData;
- (id)_scrubber;
- (void)loadView;
- (id)scrubber:(id)a0 viewForItemAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })scrubber:(id)a0 layout:(id)a1 sizeForItemAtIndex:(long long)a2;
- (void)_goBack;
- (void)viewDidReceiveAccessibilityInteraction:(id)a0;
- (id)_enqueuedSiteMetadataRequestForCellView:(id)a0 favorite:(id)a1;
- (BOOL)_isBackButtonAtIndex:(unsigned long long)a0;
- (unsigned long long)_favoriteIndexForScrubberIndex:(unsigned long long)a0;
- (int)_styleForFavoriteAtIndex:(unsigned long long)a0;
- (BOOL)_shouldShowBackButton;

@end
