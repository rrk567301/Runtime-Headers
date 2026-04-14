@class QLPreviewBubble, QLPreviewPanel, QLSeamlessOpener;
@protocol QLSeamlessOpenerDelegate, QLPreviewItem;

@interface QLSeamlessItemOpener : NSObject {
    struct __QLSeamlessOpeningRequest { } *_request;
    QLPreviewPanel *_previewPanel;
    QLPreviewBubble *_bubble;
}

@property (retain) id<QLPreviewItem> item;
@property (retain) QLSeamlessOpener *opener;
@property (readonly) id<QLSeamlessOpenerDelegate> delegate;

+ (id)itemOpenerForPreviewItem:(id)a0 fromOpener:(id)a1;

- (void)dealloc;
- (id)description;
- (void)discard;
- (void)_performBlock:(id /* block */)a0;
- (int)openWithOptions:(int)a0 fromPreviewPanel:(id)a1 minWindowLevel:(long long)a2;
- (void)bindToPID:(int)a0;
- (id)_displayStateFromViewDisplayState:(id)a0 fullscreen:(BOOL)a1 screenFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (int)_supportWithMaxSupport:(int)a0;
- (void)_displayLegacyOpeningAnimationWithSourceImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromPreviewPanel:(id)a2;
- (void)_invalidateWithSuccess:(BOOL)a0;
- (id)_viewDisplayStateFromDisplayState:(id)a0;

@end
