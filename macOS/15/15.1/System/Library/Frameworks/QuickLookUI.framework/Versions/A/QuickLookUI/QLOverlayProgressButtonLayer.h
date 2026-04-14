@class NSObject, QLOverlayProgressLayer;
@protocol OS_dispatch_source;

@interface QLOverlayProgressButtonLayer : QLOverlayButtonLayer {
    QLOverlayProgressLayer *_progressLayer;
    BOOL _expanded;
    NSObject<OS_dispatch_source> *_collapseTimer;
    BOOL _ignoreNextProgressChange;
}

@property float progress;
@property BOOL expanded;

+ (double)_shadowBlur;
+ (struct CGSize { double x0; double x1; })buttonSize;
+ (double)_shadowWidth;

- (id)init;
- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (void)_updateExpandedLook;

@end
