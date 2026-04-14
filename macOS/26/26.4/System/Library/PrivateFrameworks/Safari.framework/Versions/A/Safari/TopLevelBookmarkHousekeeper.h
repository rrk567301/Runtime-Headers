@class SafariWebBookmarkList;

@interface TopLevelBookmarkHousekeeper : NSObject {
    SafariWebBookmarkList *_rootBookmark;
}

- (void).cxx_destruct;
- (id)init;
- (void)_collectVisibleBookmarksBars:(id *)a0 menus:(id *)a1;
- (void)_getNumberOfVisibleDuplicateBookmarkBars:(unsigned long long *)a0 menus:(unsigned long long *)a1;
- (id)_realReadingList;
- (BOOL)_removeRedundantReadingLists;
- (void)_reportNumberOfUserVisibleDuplicateBookmarkBarsAndMenus;
- (id)initWithRootBookmark:(id)a0;
- (BOOL)mergeTopLevelDuplicates;

@end
