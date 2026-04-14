@class NSObject;
@protocol MFDeviceDriver;

@interface MFTransform : NSObject <NSCopying> {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } m_world;
    struct CGPoint { double x; double y; } m_windowOrg;
    struct CGPoint { double x; double y; } m_windowExt;
    struct CGPoint { double x; double y; } m_viewportOrg;
    struct CGPoint { double x; double y; } m_viewportExt;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } m_combinedTransform;
    int m_mapMode;
    NSObject<MFDeviceDriver> *m_deviceDriver;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDriver:(id)a0;
- (int)setMapMode:(int)a0;
- (int)setWindowExt:(int)a0 in_y:(int)a1;
- (int)setWindowOrg:(int)a0 in_y:(int)a1;
- (int)setViewportExt:(int)a0 in_y:(int)a1;
- (int)offsetWindowOrg:(int)a0 in_y:(int)a1;
- (int)offsetViewportOrg:(int)a0 in_y:(int)a1;
- (int)setViewportOrg:(int)a0 in_y:(int)a1;
- (int)scaleViewportExt:(int)a0 in_xDenom:(int)a1 in_yNum:(int)a2 in_yDenom:(int)a3;
- (int)scaleWindowExt:(int)a0 in_xDenom:(int)a1 in_yNum:(int)a2 in_yDenom:(int)a3;
- (int)setWorldTransform:(const struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0;
- (int)modifyWorldTransform:(const struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a0 in_command:(int)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getWorldMatrix;
- (void)setWorldMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (BOOL)isUpsideDown;
- (struct CGPoint { double x0; double x1; })getWindowExtent;
- (struct CGPoint { double x0; double x1; })getViewportExtent;
- (struct CGPoint { double x0; double x1; })getWindowOrg;
- (struct CGPoint { double x0; double x1; })getViewportOrg;
- (int)getMapMode;
- (void)setWindowOrg:(struct CGPoint { double x0; double x1; })a0;
- (void)setViewportOrg:(struct CGPoint { double x0; double x1; })a0;
- (void)setWindowExt:(struct CGPoint { double x0; double x1; })a0;
- (void)setViewportExt:(struct CGPoint { double x0; double x1; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getTransformMatrix;
- (void)setTransformMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (int)updateTransform;
- (struct CGPoint { double x0; double x1; })DPtoLP:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })LPtoDP:(struct CGPoint { double x0; double x1; })a0;

@end
