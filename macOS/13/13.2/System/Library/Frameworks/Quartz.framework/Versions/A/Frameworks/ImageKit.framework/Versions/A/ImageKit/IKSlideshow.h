@interface IKSlideshow : NSObject {
    id _privateData;
}

@property double autoPlayDelay;

+ (id)sharedSlideshow;
+ (BOOL)canExportToApplication:(id)a0;
+ (void)exportSlideshowItem:(id)a0 toApplication:(id)a1;
+ (void)exportSlideshowItemToApplication:(id)a0 application:(id)a1;

- (void)dealloc;
- (id)init;
- (void)finalize;
- (void)reloadData;
- (void)disposeData;
- (id)slideshowHandler;
- (void)runSlideshowWithDataSource:(id)a0 inMode:(id)a1 options:(id)a2;
- (void)stopSlideshow:(id)a0;
- (void)reloadSlideshowItemAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfCurrentSlideshowItem;

@end
