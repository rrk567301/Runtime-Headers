@interface BookmarkFolderTouchIconProvider : WBSBookmarkFolderTouchIconProvider

+ (id)_defaultFolderIcon;

- (id)backgroundColor;
- (id)configurationForRequest:(id)a0;
- (id)init;
- (BOOL)canHandleRequest:(id)a0;
- (void)_bookmarksWereRemoved:(id)a0;
- (id)defaultFolderIconForRequest:(id)a0;
- (id)folderUUIDForRequest:(id)a0;
- (id)subrequestsForRequest:(id)a0 maximumNumberOfSubrequests:(unsigned long long)a1;

@end
