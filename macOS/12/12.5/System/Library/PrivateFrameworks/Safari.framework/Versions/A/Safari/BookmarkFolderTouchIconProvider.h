@interface BookmarkFolderTouchIconProvider : WBSBookmarkFolderTouchIconProvider

+ (id)_defaultFolderIcon;

- (id)init;
- (id)backgroundColor;
- (BOOL)canHandleRequest:(id)a0;
- (void)_bookmarksWereRemoved:(id)a0;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;
- (id)bookmarkUUIDForRequest:(id)a0;
- (id)displayableFolderContentsForRequest:(id)a0;
- (id)touchIconRequestForBookmark:(id)a0 inFolderWithRequest:(id)a1;
- (id)defaultFolderIconForRequest:(id)a0;

@end
