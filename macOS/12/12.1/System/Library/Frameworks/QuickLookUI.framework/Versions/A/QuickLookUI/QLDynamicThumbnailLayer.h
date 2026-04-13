@class NSString, NSConditionLock, NSURL, CALayer;
@protocol QLPreviewItem;

@interface QLDynamicThumbnailLayer : CALayer {
    NSURL *_url;
    unsigned long long _requestIndex;
    struct __QLThumbnail { } *_thumbnail;
    CALayer *_backLayer;
    CALayer *_frontLayer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _thumbnailContentRect;
    BOOL _subthumbnailNeedsDisplayRequested;
    BOOL _isPaused;
    NSConditionLock *_pauseLock;
    BOOL _hasSubthumbnailToRemove;
    BOOL _hasSubthumbnailToShow;
    BOOL _loaded;
    struct CGSize { double width; double height; } _maxThumbnailSize;
    BOOL _needsPlaceHolder;
    BOOL _dark;
}

@property (retain) id<QLPreviewItem> previewItem;
@property (copy) NSURL *URL;
@property (copy) NSString *contentTypeUTIHint;
@property (readonly) BOOL loaded;
@property BOOL showPlaceholderAfterTimeout;
@property struct CGSize { double width; double height; } minThumbnailSize;
@property (readonly) struct CGSize { double x0; double x1; } thumbnailSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thumbnailContentFrame;
@property (readonly) struct CGImage { } *thumbnailImage;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (id)URL;
- (void)setURL:(id)a0;
- (void)pause;
- (BOOL)isPaused;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentsScale:(double)a0;
- (void)set_QLLayerAppearance:(id)a0;
- (void)_dispatchRequestInfo;
- (void)_updatePauseLock;
- (id)_subthumbnailLayers;
- (void)_reallyRemoveOldestSubthumbnail;
- (void)_ql_layoutSublayers;
- (void)_removeOldestSubthumbnail;
- (void)_showNewestSubthumbnail;
- (void)appendSubThumbnail:(struct CGImage { } *)a0;
- (void)_setPlaceHolder;
- (void)_updateSubthumbnails;
- (void)recomputeThumbnailIfNeeded;
- (void)_thumbnailDone:(id)a0;
- (struct CGSize { double x0; double x1; })_optimalThumbnailPointSize;
- (void)_computeThumbnail:(struct __QLThumbnail { } *)a0 forURL:(id)a1 withUTIHint:(id)a2 requestIndex:(unsigned long long)a3;
- (struct CGSize { double x0; double x1; })_realThumbnailSize;
- (void)_appendSubThumbnail:(id)a0;
- (void)_blockAndWaitIfNecessaryWithRequestIndex:(unsigned long long)a0;
- (void)handleMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
