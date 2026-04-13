@class SafariWebBookmarkList;

@interface TopLevelBookmarkHousekeeper : NSObject {
    SafariWebBookmarkList *_rootBookmark;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithRootBookmark:(id)a0;
- (BOOL)mergeTopLevelDuplicates;
- (BOOL)_removeRedundantReadingLists;
- (void)_reportNumberOfUserVisibleDuplicateBookmarkBarsAndMenus;
- (void)_getNumberOfVisibleDuplicateBookmarkBars:(unsigned long long *)a0 menus:(unsigned long long *)a1;
- (void)_collectVisibleBookmarksBars:(id *)a0 menus:(id *)a1;
- (id)_realReadingList;

@end
