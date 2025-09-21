@class OITSUBezierPath, NSString;

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
    OITSUBezierPath *mPath;
    char mHasAngle;
    double mAngle;
    NSString *mPointsTypes;
    char mHasOriginType;
    int mOriginType;
    char mHasRotationCenter;
    struct CGPoint { double x; double y; } mRotationCenter;
    char mHasPathEditMode;
    int mPathEditMode;
}

+ (id)NSStringForBezierPath:(id)a0;
+ (id)bezierPathFromNSString:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)path;
- (void)setPath:(id)a0;
- (double)angle;
- (void)setAngle:(double)a0;
- (int)originType;
- (char)hasAngle;
- (char)hasPath;
- (char)hasPathEditMode;
- (void)setPointsTypes:(id)a0;
- (char)hasOriginType;
- (char)hasRotationCenter;
- (int)pathEditMode;
- (id)pointsTypes;
- (struct CGPoint { double x0; double x1; })rotationCenter;
- (void)setOriginType:(int)a0;
- (void)setPathEditMode:(int)a0;
- (void)setRotationCenter:(struct CGPoint { double x0; double x1; })a0;

@end
