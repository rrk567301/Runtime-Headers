@interface GKImageCache : NSCache

- (id)initWithName:(id)a0 maxCount:(unsigned long long)a1;
- (void)applicationDidEnterBackground:(id)a0;
- (void)greatestScreenScaleDidChange:(double)a0;

@end
