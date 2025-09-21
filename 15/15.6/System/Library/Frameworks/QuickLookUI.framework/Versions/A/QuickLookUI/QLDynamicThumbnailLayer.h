@class QLThumbnailGenerationRequest, NSString, NSURL, CALayer;
@protocol QLPreviewItem;

@interface QLDynamicThumbnailLayer : CALayer {
    NSURL *_url;
    QLThumbnailGenerationRequest *_thumbnailRequest;
    CALayer *_backLayer;
    CALayer *_frontLayer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _thumbnailContentRect;
    char _subthumbnailNeedsDisplayRequested;
    char _isPaused;
    char _hasSubthumbnailToRemove;
    char _hasSubthumbnailToShow;
    char _loaded;
    struct CGSize { double width; double height; } _maxThumbnailSize;
    char _needsPlaceHolder;
    char _dark;
}

@property (retain) id<QLPreviewItem> previewItem;
@property (copy) NSURL *URL;
@property (copy) NSString *contentTypeUTIHint;
@property (readonly) char loaded;
@property char showPlaceholderAfterTimeout;
@property struct CGSize { double width; double height; } minThumbnailSize;
@property (readonly) struct CGSize { double x0; double x1; } thumbnailSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thumbnailContentFrame;
@property (readonly) struct CGImage { } *thumbnailImage;
@property char iconOnly;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)URL;
- (void)resume;
- (void)setURL:(id)a0;
- (void)pause;
- (char)isPaused;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentsScale:(double)a0;
- (void)_reallyRemoveOldestSubthumbnail;
- (void)_setPlaceHolder;
- (void)_dispatchRequestInfo;
- (void)_generateThumbnailForRequest:(id)a0 url:(id)a1 previewItem:(id)a2 contentTypeUTIHint:(id)a3;
- (struct CGSize { double x0; double x1; })_optimalThumbnailPointSize;
- (void)_ql_layoutSublayers;
- (struct CGSize { double x0; double x1; })_realThumbnailSize;
- (void)_removeOldestSubthumbnail;
- (void)_showNewestSubthumbnail;
- (char)_skipGenerationForContentType:(id)a0;
- (id)_subthumbnailLayers;
- (void)_thumbnailDoneForRequest:(id)a0 parameters:(id)a1;
- (void)_updateSubthumbnails;
- (void)appendSubThumbnail:(struct CGImage { } *)a0;
- (void)handleMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)recomputeThumbnailIfNeeded;
- (void)set_QLLayerAppearance:(id)a0;

@end
