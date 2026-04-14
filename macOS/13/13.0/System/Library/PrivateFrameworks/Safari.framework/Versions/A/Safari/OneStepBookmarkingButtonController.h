@class NSString, OneStepBookmarkingButton, NSMenu;

@interface OneStepBookmarkingButtonController : NSObject <NSMenuDelegate, OneStepBookmarkingButtonController> {
    NSMenu *_dynamicOneStepBookmarkingMenu;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) OneStepBookmarkingButton *oneStepBookmarkingButton;

- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)a0;
- (void)menuDidClose:(id)a0;
- (void)updateOneStepBookmarkingButton;
- (BOOL)_canAddBookmark;
- (void)handleButtonDrag:(id)a0 mouseDownEvent:(id)a1;
- (void)oneClickAddBookmark:(id)a0;
- (void)_addBookmarkToReadingList:(id)a0;
- (void)_addBookmarkToFolder:(id)a0;
- (void)_addBookmarkToTopSites:(id)a0;
- (id)oneStepBookmarkingButtonActionDescription;
- (id)_dynamicOneStepBookmarkingMenu;
- (id)_oneStepBookmarkingReadingListMenuItemIcon;
- (id)_oneStepBookmarkingFavoritesMenuItemIcon;
- (id)_oneStepBookmarkingBookmarkMenuItemIcon;
- (id)_oneStepBookmarkingTopSiteMenuItemIcon;
- (void)_setUpOneStepBookmarkingMenu:(id)a0;
- (void)_addTopSitesMenuItemToMenu:(id)a0;
- (id)_representedObjectForOneStepBookmarkingMenuItemWithUserDefaultKey:(id)a0;
- (void)_addOneStepBookmarkingMenuItemsForBookmarkFolder:(id)a0 toMenu:(id)a1 indentationLevel:(unsigned long long)a2;
- (void)_addBookmarkToReadingListWithoutAskingAndMakeDefault:(BOOL)a0;
- (void)_addBookmarkToTopSitesWithoutAskingAndMakeDefault:(BOOL)a0;
- (void)_addBookmarkWithoutAskingToFolder:(id)a0 andMakeDefault:(BOOL)a1;
- (unsigned long long)_insertionLocationForNewBookmarkInFolder:(id)a0 destinationFolder:(id *)a1;
- (void)_didSelectOneStepBookmarkMenuItemWithIdentifier:(id)a0 makeDefault:(BOOL)a1;
- (unsigned long long)_bookmarkDestinationForRepresentedObject:(id)a0;
- (unsigned long long)_oneStepBookmarkingDefaultDestination;

@end
