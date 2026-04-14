@class QLOverlayProgressLayer;

@interface QLOverlayProgressButtonLayer : QLOverlayButtonLayer {
    QLOverlayProgressLayer *_progressLayer;
    BOOL _expanded;
}

@property float progress;
@property BOOL expanded;

+ (struct CGSize { double x0; double x1; })buttonSize;
+ (double)_shadowBlur;
+ (double)_shadowWidth;

- (void)setContentsScale:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_updateExpandedLook;

@end
