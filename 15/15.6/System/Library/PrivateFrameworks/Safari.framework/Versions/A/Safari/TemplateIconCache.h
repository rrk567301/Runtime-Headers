@interface TemplateIconCache : WBSTemplateIconCache {
    char _didLoadBookmarks;
}

- (void)dealloc;
- (id)_imageForRequest:(id)a0 getThemeColor:(id *)a1;
- (void)_bookmarksWereReloaded:(id)a0;
- (char)_templateIconRetainerIsReadyForCleanUp;
- (void)_webBookmarkLeafURLStringDidChange:(id)a0;
- (id)initWithImageDirectoryURL:(id)a0;
- (char)shouldRequestTemplateIconForURL:(id)a0 allowRefresh:(char)a1;

@end
