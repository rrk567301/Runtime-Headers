@class NSString, NSMutableDictionary;

@interface WBSTabGroupTouchIconProvider : WBSBookmarkFolderTouchIconProvider <WBTabGroupManagerObserver> {
    NSMutableDictionary *_tabGroupIconMetadataCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)configuration;
- (id)backgroundColor;
- (BOOL)canHandleRequest:(id)a0;
- (id)iconForTabGroup:(id)a0;
- (id)bookmarkUUIDForRequest:(id)a0;
- (id)displayableFolderContentsForRequest:(id)a0;
- (id)touchIconRequestForBookmark:(id)a0 inFolderWithRequest:(id)a1;
- (id)defaultFolderIconForRequest:(id)a0;
- (void)tabGroupManager:(id)a0 didRemoveTabGroup:(id)a1;
- (void)tabGroupManager:(id)a0 didUpdateTabsInTabGroup:(id)a1;
- (void)updateIconForTabGroupIfNeeded:(id)a0;
- (void)_cancelRequestsAndClearCacheForTabGroup:(id)a0;
- (void)_cancelRequestsAndClearCacheForTabGroup:(id)a0 metadata:(id)a1;

@end
