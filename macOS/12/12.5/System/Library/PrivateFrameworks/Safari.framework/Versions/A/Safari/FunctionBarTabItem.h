@class TabSnapshotCacheWithPersistence, NSString, NSView, BrowserTabViewItem;

@interface FunctionBarTabItem : NSObject <VisualScrubberItem> {
    long long _currentThumbnailMode;
    NSView *_currentContentView;
}

@property (weak, nonatomic) BrowserTabViewItem *tabViewItem;
@property (readonly, nonatomic) TabSnapshotCacheWithPersistence *tabSnapshotCacheWithPersistence;
@property (readonly, copy, nonatomic) NSString *thumbnailSizeObservationKey;
@property (readonly, nonatomic) NSView *contentView;
@property (readonly, copy, nonatomic) NSString *accessibilityDescription;

- (void).cxx_destruct;
- (id)initWithTabViewItem:(id)a0 tabSnapshotCacheWithPersistence:(id)a1;
- (BOOL)_willGenerateWKThumbnailView;
- (void)_refreshWebViewThumbnail;
- (id)_generateStartPageThumbnail;
- (id)_generateTabOverviewThumbnail;
- (id)_generateGenericThumbnail;
- (id)_generateWebViewThumbnail;
- (id)_generateThumbnailImageViewWithImageNamed:(id)a0;
- (void)_requestTabSnapshotWithCompletionHandler:(id /* block */)a0;

@end
