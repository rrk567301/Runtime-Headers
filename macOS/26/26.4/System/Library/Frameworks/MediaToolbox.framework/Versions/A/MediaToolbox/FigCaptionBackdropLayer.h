@class CAFilter;

@interface FigCaptionBackdropLayer : FigBaseCABackdropLayer {
    CAFilter *backdropFilter;
}

+ (void)initialize;
+ (unsigned char)isSupported;

- (void)configure;
- (void)removeBackdropFromSuperLayer;
- (void)applyRoundedCorners:(struct CGPath { } *)a0;
- (id)init;
- (void)insertBackdropAsSublayerToLayer:(id)a0 below:(id)a1;
- (void)dealloc;

@end
