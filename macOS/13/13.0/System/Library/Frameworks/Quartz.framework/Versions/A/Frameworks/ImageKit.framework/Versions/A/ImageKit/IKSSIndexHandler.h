@class IKSSIndexSheetSelectionLayer, NSString, CAScrollLayer, IKSSContentLayer, IKSSIndexView, IKSSBackgroundWindow, IKSlideshowHandler, CAKeyframeAnimation;

@interface IKSSIndexHandler : NSObject <NSWindowDelegate> {
    IKSlideshowHandler *_slideshowHandler;
    IKSSBackgroundWindow *_backgroundWindow;
    CAScrollLayer *_bodyLayer;
    IKSSIndexSheetSelectionLayer *_selectionLayer;
    IKSSContentLayer *_contentLayer;
    struct CGImage { } *_missingSlide;
    CAKeyframeAnimation *_progressAnimation;
    IKSSIndexView *_view;
    id *_thumbnailLayers;
    long long _thumbnailLayersCount;
}

@property double thumbnailSize;
@property long long selectedThumbnailIndex;
@property int columns;
@property int rows;
@property BOOL thumbnailsFitOnScreen;
@property (readonly) IKSSBackgroundWindow *indexWindow;
@property BOOL switchedToIndexMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)finalize;
- (unsigned long long)itemCount;
- (void)cleanup;
- (void)select;
- (void)applicationDidChangeScreenParameters:(id)a0;
- (id)contentLayer;
- (void)itemCountChanged:(id)a0;
- (id)initWithSlideshow:(id)a0;
- (void)switchToIndexMode:(id)a0 currentIndex:(long long)a1;
- (void)switchToSingleMode;
- (void)calcThumbnailSize;
- (void)setupLayers;
- (void)setupResources;
- (void)thumbnailsDidChange;
- (void)updateThumbnails;
- (void)thumbnailDidLoad:(id)a0 index:(unsigned long long)a1 currentCount:(unsigned long long)a2;
- (void)thumbnailDidRotate:(id)a0 index:(unsigned long long)a1;
- (void)nextPage:(int)a0;
- (void)moveSelection:(int)a0 :(int)a1;
- (BOOL)layerCanBeSelected:(id)a0;
- (void)selectLayer:(id)a0;
- (void)updateSelection:(BOOL)a0;
- (unsigned long long)selectedThumbnail;

@end
