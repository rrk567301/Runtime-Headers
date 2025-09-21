@interface AXVCGFullscreenZoomController : NSObject

@property (nonatomic) unsigned int _mainCGSConnectionID;
@property (readonly, nonatomic) struct AXVCGFullscreenZoomParameters { double x0; struct CGPoint { double x0; double x1; } x1; BOOL x2; int x3; } zoomParameters;

- (id)init;
- (struct AXVCGFullscreenZoomParameters { double x0; struct CGPoint { double x0; double x1; } x1; BOOL x2; int x3; })zoomParametersForLocation:(struct CGPoint { double x0; double x1; })a0;
- (int)_zoomDisplayID;
- (void)setCGZoomFactor:(double)a0 smoothImages:(char)a1 velocity:(double)a2 completion:(id /* block */)a3;
- (void)setCGZoomForDisplay:(int)a0 origin:(struct CGPoint { double x0; double x1; })a1 zoomFactor:(double)a2 smoothImages:(char)a3 warpMouse:(char)a4 velocity:(double)a5 completion:(id /* block */)a6;
- (void)setCGZoomForDisplay:(int)a0 zoomFactor:(double)a1 smoothImages:(char)a2 velocity:(double)a3 completion:(id /* block */)a4;
- (void)setCGZoomOrigin:(struct CGPoint { double x0; double x1; })a0 zoomFactor:(double)a1 smoothImages:(char)a2 warpMouse:(char)a3 velocity:(double)a4 completion:(id /* block */)a5;
- (struct AXVCGFullscreenZoomParameters { double x0; struct CGPoint { double x0; double x1; } x1; BOOL x2; int x3; })zoomParametersForDisplay:(int)a0;

@end
