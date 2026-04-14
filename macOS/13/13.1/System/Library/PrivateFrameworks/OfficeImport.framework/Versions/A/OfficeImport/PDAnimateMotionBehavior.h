@class OITSUBezierPath, NSString;

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
    OITSUBezierPath *mPath;
    BOOL mHasAngle;
    double mAngle;
    NSString *mPointsTypes;
    BOOL mHasOriginType;
    int mOriginType;
    BOOL mHasRotationCenter;
    struct CGPoint { double x; double y; } mRotationCenter;
    BOOL mHasPathEditMode;
    int mPathEditMode;
}

+ (id)bezierPathFromNSString:(id)a0;
+ (id)NSStringForBezierPath:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)path;
- (void)setPath:(id)a0;
- (double)angle;
- (void)setAngle:(double)a0;
- (BOOL)hasAngle;
- (BOOL)hasPath;
- (id)pointsTypes;
- (void)setPointsTypes:(id)a0;
- (BOOL)hasOriginType;
- (int)originType;
- (void)setOriginType:(int)a0;
- (BOOL)hasRotationCenter;
- (struct CGPoint { double x0; double x1; })rotationCenter;
- (void)setRotationCenter:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hasPathEditMode;
- (int)pathEditMode;
- (void)setPathEditMode:(int)a0;

@end
