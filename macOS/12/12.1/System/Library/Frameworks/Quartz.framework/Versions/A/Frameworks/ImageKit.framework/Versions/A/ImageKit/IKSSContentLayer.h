@class IKSSIndexHandler, IKSlideshowHandler;

@interface IKSSContentLayer : CALayer {
    IKSSIndexHandler *_indexHandler;
    IKSlideshowHandler *_slideshow;
}

@property int thumbnailCount;
@property int thumbnailSize;
@property int itemsPerRow;
@property int rowsPerScreen;
@property int numberOfRows;

- (void)layoutSublayers;
- (void)layoutSublayers2;
- (id)initWithSlideshow:(id)a0 indexHandler:(id)a1;
- (id)visibleThumbnails;

@end
