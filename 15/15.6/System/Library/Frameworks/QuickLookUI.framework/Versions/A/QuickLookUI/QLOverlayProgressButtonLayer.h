@class NSObject, QLOverlayProgressLayer;
@protocol OS_dispatch_source;

@interface QLOverlayProgressButtonLayer : QLOverlayButtonLayer {
    QLOverlayProgressLayer *_progressLayer;
    char _expanded;
    NSObject<OS_dispatch_source> *_collapseTimer;
    char _ignoreNextProgressChange;
}

@property float progress;
@property char expanded;

+ (struct CGSize { double x0; double x1; })buttonSize;
+ (double)_shadowBlur;
+ (double)_shadowWidth;

- (id)init;
- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (void)_updateExpandedLook;

@end
