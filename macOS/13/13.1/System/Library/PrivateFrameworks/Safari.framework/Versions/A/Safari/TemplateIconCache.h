@interface TemplateIconCache : WBSTemplateIconCache {
    BOOL _didLoadBookmarks;
}

- (void)dealloc;
- (void)_bookmarksWereReloaded:(id)a0;
- (id)initWithImageDirectoryURL:(id)a0;
- (void)_webBookmarkLeafURLStringDidChange:(id)a0;
- (BOOL)shouldRequestTemplateIconForURL:(id)a0 allowRefresh:(BOOL)a1;
- (id)_imageForRequest:(id)a0 getThemeColor:(id *)a1;
- (BOOL)_templateIconRetainerIsReadyForCleanUp;

@end
