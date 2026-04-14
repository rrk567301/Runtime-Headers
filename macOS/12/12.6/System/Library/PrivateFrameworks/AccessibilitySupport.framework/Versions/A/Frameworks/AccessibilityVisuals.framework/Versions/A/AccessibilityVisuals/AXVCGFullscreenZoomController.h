@interface AXVCGFullscreenZoomController : NSObject

@property (nonatomic) unsigned int _mainCGSConnectionID;
@property (readonly, nonatomic) struct AXVCGFullscreenZoomParameters { double x0; struct CGPoint { double x0; double x1; } x1; BOOL x2; int x3; } zoomParameters;

- (id)init;
- (void)setCGZoomFactor:(double)a0 smoothImages:(BOOL)a1 velocity:(double)a2 completion:(id /* block */)a3;
- (void)setCGZoomOrigin:(struct CGPoint { double x0; double x1; })a0 zoomFactor:(double)a1 smoothImages:(BOOL)a2 warpMouse:(BOOL)a3 velocity:(double)a4 completion:(id /* block */)a5;

@end
