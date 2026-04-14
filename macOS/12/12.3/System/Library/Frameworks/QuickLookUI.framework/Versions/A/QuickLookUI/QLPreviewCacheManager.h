@class QLPreviewView, NSArray, NSSet, NSMapTable, NSMutableArray;

@interface QLPreviewCacheManager : NSObject {
    NSMutableArray *_recentDocuments;
    NSSet *_preloadedItems;
    NSMapTable *_preloadedDocuments;
}

@property QLPreviewView *previewView;
@property (nonatomic) unsigned long long maxRecents;
@property (retain) NSArray *preloadedItems;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)flushCache;
- (void)preloadItemsNow;
- (id)cachedDocumentForItem:(id)a0;
- (BOOL)hasCachedDocumentForItem:(id)a0;
- (BOOL)cacheRecentDocument:(id)a0;
- (id)cachedDocumentForURL:(id)a0;
- (void)_invalidateRecentDocuments;
- (id)_documentForItem:(id)a0 url:(id)a1 remove:(BOOL)a2;
- (void)_invalidatePreloadedDocuments;

@end
