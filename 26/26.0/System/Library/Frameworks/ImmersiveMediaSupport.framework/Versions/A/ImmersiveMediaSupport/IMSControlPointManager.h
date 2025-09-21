@class IMSRayCaster, NSMutableArray;
@protocol MTLDevice, MTLBuffer;

@interface IMSControlPointManager : NSObject {
    IMSRayCaster *rayCaster;
    NSMutableArray *controlPoints;
    NSMutableArray *innerCurveInterpolatedPoints;
    NSMutableArray *outerCurveInterpolatedPoints;
    NSMutableArray *uvSpaceInterpolationTangents;
    unsigned long long interpolatedPointCount;
    unsigned long long roundCornerInterpolatedPointCount;
    unsigned long long roundCornersOffset;
    float featheringAngleRadians;
    float almostEqualEpsilon;
    int interpolationUsed;
    BOOL isUseAngularInterpolation;
    BOOL isUseEquirectMask;
    BOOL isUseCubicHermite;
    BOOL isUseRoundedCornersForLinearInterpolation;
    id<MTLDevice> device;
    id<MTLBuffer> vertexBuffer;
    id<MTLBuffer> indexBuffer;
    unsigned int indexCount;
    BOOL isLeftEye;
}

+ (void /* unknown type, empty encoding */)convertPoint3DToSimdFloat3:(struct { double x0; double x1; double x2; })a0;
+ (struct { double x0; double x1; double x2; })convertSimdFloat3ToPoint3D:(SEL)a0;
+ (struct { double x0; double x1; double x2; })normalizePoint3D:(struct { double x0; double x1; double x2; })a0;
+ (struct { double x0; double x1; double x2; })point3DMake:(double)a0 y:(double)a1 z:(double)a2;

- (void)addPoint:(SEL)a0;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)indicesCount;
- (float)distanceBetweenCGPoints:(struct CGPoint { double x0; double x1; })a0 point2:(struct CGPoint { double x0; double x1; })a1;
- (void)generateCurves:(int)a0;
- (id)getVertexBuffer;
- (void)generateBuffers;
- (id)getInterpolatedPoints:(id)a0 tangents:(id)a1;
- (void)add3DControlPoints:(id)a0;
- (void)addPoint:(id)a0 uvPoint:(SEL)a1;
- (BOOL)almostEqual:(id)a0 vec2:(SEL)a1;
- (struct CGPoint { double x0; double x1; })convert3DPositionToPolarCoordinate:(SEL)a0;
- (struct CGPoint { double x0; double x1; })convert3DSpherePositionToEquirect:(SEL)a0;
- (struct CGPoint { double x0; double x1; })convertAngleToComplexNumber:(float)a0;
- (float)convertComplexNumberToAngle:(struct CGPoint { double x0; double x1; })a0;
- (struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; float x4; })convertNSValueToControlPoint:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPointToUVSpace:(struct { double x0; double x1; double x2; })a0;
- (struct CGPoint { double x0; double x1; })convertPolarCoordToEquirect:(struct CGPoint { double x0; double x1; })a0;
- (void /* unknown type, empty encoding */)convertPolarCoordinateTo3DPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)generateCurvesAngularInterpolation;
- (void)generateCurvesInEQRSpaceUsing3DInterpolation;
- (void)generateCurvesInEQRSpaceUsingAngularInterpolation;
- (void)generateInnerCurve;
- (void)generateOuterCurve;
- (void)generateTangents;
- (id)get3DCubicBezierInterpolatedPoints:(id)a0;
- (id)get3DLinearInterpolatedPoints:(id)a0;
- (id)get3DLinearInterpolatedPointsRoundedCorners:(id)a0;
- (id)get3DQuadraticBezierInterpolatedPoints:(id)a0;
- (double)getCubicBezierComponent:(double)a0 b0:(double)a1 b1:(double)a2 b2:(double)a3 b3:(double)a4;
- (double)getCubicHermiteInterpolatedComponent:(double)a0 p0:(double)a1 p1:(double)a2 v0:(double)a3 v1:(double)a4;
- (id)getGeneratedTangents:(id)a0;
- (id)getIndexBuffer;
- (id)getInterpolatedAngles:(id)a0;
- (float)getInterpolatedMoveDistance:(unsigned long long)a0;
- (double)getLinearInterpolatedComponent:(double)a0 p0:(double)a1 p1:(double)a2;
- (void /* unknown type, empty encoding */)getPerpendicular2D:(SEL)a0;
- (double)getQuadraticBezierComponent:(double)a0 b0:(double)a1 b1:(double)a2 b2:(double)a3;
- (BOOL)isCGPointZero:(struct CGPoint { double x0; double x1; })a0;
- (struct { double x0; double x1; double x2; })rotatePoint:(struct { double x0; double x1; double x2; })a0;
- (void)setFeatheringAngleDegrees:(float)a0;
- (void)setIMSRayCaster:(id)a0;
- (void)setIsUseCubicInterpolation:(BOOL)a0;
- (id)wrapControlPointInNSValue:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; float x4; })a0;

@end
