@protocol NSUserInterfaceItemSearching_Private, NSUserInterfaceItemSearching;

@interface SCTCustomSearchResultGRL : SCTGRL {
    id<NSUserInterfaceItemSearching, NSUserInterfaceItemSearching_Private> mSearchHandler;
    id mUserInterfaceItem;
    char mHasHideItem;
    char mHasIconForItem;
    char mHasLocalizedCategoryForItem;
    char mHasPerformActionForItem;
    char mHasShowItem;
    char mHasShowAllHelpTopicsForSearchString;
}

@property char isShowAllHelpTopicsItem;
@property (readonly) id<NSUserInterfaceItemSearching> searchHandler;

- (void)dealloc;
- (void)perform;
- (void)hide:(id)a0;
- (void)show;
- (id)fullTitle;
- (id)initWithItem:(id)a0 searchHandler:(id)a1;
- (id)localizedCategory;
- (id)representativeIconForSelectedState:(char)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRectForResource;
- (id)titlePathToString:(id)a0;

@end
