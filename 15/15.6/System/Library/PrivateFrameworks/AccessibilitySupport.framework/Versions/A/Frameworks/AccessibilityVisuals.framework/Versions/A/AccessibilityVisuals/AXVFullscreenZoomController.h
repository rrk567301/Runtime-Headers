@class AXVCGFullscreenZoomController, NSMutableDictionary, NSLock, AXFScreen;

@interface AXVFullscreenZoomController : NSObject

@property (retain, nonatomic) AXVCGFullscreenZoomController *_legacyCGFullscreenZoomController;
@property (nonatomic) struct CGPoint { double x; double y; } _realMouseLocation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _zoomRegionFrame;
@property (nonatomic) double zoomFactor;
@property (retain, nonatomic) AXFScreen *_activeScreen;
@property (retain) NSMutableDictionary *_screenToZoomFactorMap;
@property (retain, nonatomic) NSLock *_ScreenToZoomFactorLock;
@property (nonatomic) unsigned long long zoomPanningMode;
@property (nonatomic) unsigned long long displayStyle;
@property (readonly, nonatomic) char isAnyMonitorZoomed;
@property (readonly, nonatomic) char isZoomed;
@property (readonly, nonatomic) char isZoomDisplay;
@property (readonly, nonatomic) int zoomDisplayID;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } zoomRegionCenter;
@property (nonatomic) char smoothImages;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomRegionFrameWithZoomOrigin:(struct CGPoint { double x0; double x1; })a0 zoomFactor:(double)a1 zoomDisplayID:(int)a2 displayStyle:(unsigned long long)a3;
+ (char)automaticallyNotifiesObserversOfZoomFactor;
+ (id)keyPathsForValuesAffectingIsAnyMonitorZoomed;
+ (id)keyPathsForValuesAffectingIsZoomed;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)_isAnyMonitorZoomed;
- (void)_repositionZoomRegionFrameWithRealMouseLocation:(struct CGPoint { double x0; double x1; })a0 movementDelta:(struct CGPoint { double x0; double x1; })a1 warped:(char)a2 animate:(char)a3 completion:(id /* block */)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomRegionFrameForDisplay:(int)a0;
- (void)handleRealMouseLocationMovedBy:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1 animate:(char)a2 completion:(id /* block */)a3;
- (void)handleRealMouseLocationWarpedTo:(struct CGPoint { double x0; double x1; })a0 animate:(char)a1 completion:(id /* block */)a2;
- (void)setZoomFactor:(double)a0 animate:(char)a1 completion:(id /* block */)a2;
- (void)setZoomFactor:(double)a0 forDisplay:(int)a1 animate:(char)a2 completion:(id /* block */)a3;
- (void)setZoomRegionCenter:(struct CGPoint { double x0; double x1; })a0 forDisplay:(int)a1 warpMouse:(char)a2 animate:(char)a3 completion:(id /* block */)a4;
- (void)setZoomRegionCenter:(struct CGPoint { double x0; double x1; })a0 warpMouse:(char)a1 animate:(char)a2 completion:(id /* block */)a3;
- (double)zoomFactorForDisplay:(int)a0;
- (void)zoomOutAllDisplays;
- (struct CGPoint { double x0; double x1; })zoomRegionCenterForDisplay:(int)a0;

@end
