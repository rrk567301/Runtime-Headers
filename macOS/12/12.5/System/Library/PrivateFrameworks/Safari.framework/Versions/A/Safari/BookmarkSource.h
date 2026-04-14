@interface BookmarkSource : NSObject <BookmarkSource>

- (void)refreshContents;
- (BOOL)contentItemCanHaveChildren:(id)a0;
- (unsigned int)numberOfChildrenOfContentItem:(id)a0;
- (id)imageForContentItem:(id)a0;
- (id)imageURLStringForContentItem:(id)a0;
- (id)bookmarkFromContentItem:(id)a0;
- (id)contentItemsToInitiallyExpand;
- (id)addressStringForContentItem:(id)a0;
- (BOOL)canCopyContents;
- (BOOL)canDeleteContents;
- (id)child:(unsigned int)a0 ofContentItem:(id)a1;
- (void)didCollapseContentItem:(id)a0;
- (void)didExpandContentItem:(id)a0;
- (BOOL)contentItemCanBeSearchResult:(id)a0;
- (id)contentItemsToExpandOnReload;
- (id)parentOfContentItem:(id)a0;
- (id)titleStringForContentItem:(id)a0;
- (BOOL)deleteContentItems:(id)a0;
- (BOOL)canGoToContentItem:(id)a0;
- (void)goToContentItem:(id)a0 tabPlacementHint:(const struct TabPlacementHint { id x0; BOOL x1; } *)a1;
- (void)goToContentItemInNewWindow:(id)a0;
- (void)goToContentItemInNewTab:(id)a0 tabPlacementHint:(const struct TabPlacementHint { id x0; BOOL x1; } *)a1;
- (void)goToContentItemInNewTab:(id)a0 windowPolicy:(long long)a1 tabPlacementHint:(const struct TabPlacementHint { id x0; BOOL x1; } *)a2;
- (void)replaceTabsWithDescendantsOfContentItem:(id)a0 tabPlacementHint:(const struct TabPlacementHint { id x0; BOOL x1; } *)a1;
- (void)openDescendantsOfContentItemInNewTabs:(id)a0 tabPlacementHint:(const struct TabPlacementHint { id x0; BOOL x1; } *)a1;
- (id)bookmarksFromContentItems:(id)a0;
- (id)bookmarkSourceImage;
- (id)bookmarksFromHistoryItems:(id)a0;

@end
