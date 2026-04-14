@protocol NSUserInterfaceItemSearching_Private, NSUserInterfaceItemSearching;

@interface SCTCustomSearchResultGRL : SCTGRL {
    id<NSUserInterfaceItemSearching, NSUserInterfaceItemSearching_Private> mSearchHandler;
    id mUserInterfaceItem;
    BOOL mHasHideItem;
    BOOL mHasIconForItem;
    BOOL mHasLocalizedCategoryForItem;
    BOOL mHasPerformActionForItem;
    BOOL mHasShowItem;
    BOOL mHasShowAllHelpTopicsForSearchString;
}

@property BOOL isShowAllHelpTopicsItem;
@property (readonly) id<NSUserInterfaceItemSearching> searchHandler;

- (void)dealloc;
- (void)hide:(id)a0;
- (void)perform;
- (void)show;
- (id)localizedCategory;
- (id)initWithItem:(id)a0 searchHandler:(id)a1;
- (id)representativeIconForSelectedState:(BOOL)a0;
- (id)fullTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRectForResource;
- (id)titlePathToString:(id)a0;

@end
