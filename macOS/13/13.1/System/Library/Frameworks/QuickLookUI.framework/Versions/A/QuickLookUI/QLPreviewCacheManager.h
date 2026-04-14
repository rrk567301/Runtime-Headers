@class QLPreviewView, NSArray, NSSet, NSMapTable, NSMutableArray;

@interface QLPreviewCacheManager : NSObject {
    NSMutableArray *_recentDocuments;
    NSSet *_preloadedItems;
    NSMapTable *_preloadedDocuments;
}

@property (weak) QLPreviewView *previewView;
@property (nonatomic) unsigned long long maxRecents;
@property (retain) NSArray *preloadedItems;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)flushCache;
- (void)preloadItemsNow;
- (BOOL)hasCachedDocumentForItem:(id)a0;
- (id)_documentForItem:(id)a0 url:(id)a1 remove:(BOOL)a2;
- (id)cachedDocumentForItem:(id)a0;
- (id)cachedDocumentForURL:(id)a0;
- (BOOL)cacheRecentDocument:(id)a0;
- (void)_invalidateRecentDocuments;
- (void)_invalidatePreloadedDocuments;

@end
