@interface VCPHandGestureMitigator : NSObject

@property int rotationInDegrees;
@property float minHandSize;

+ (float)getFaceExtensionRatio;
+ (float)getGestureTypeConsistencyLookBackDuration;
+ (float)getHandMotionLookBackDuration;
+ (float)getMinHandFaceRatio;
+ (float)getMinTiltingAngle;
+ (float)getMinTiltingThumbAngle;
+ (float)getPalmMoveDistanceThreshold;
+ (float)getPalmScaleChangeThreshold;

- (id)init;
- (char)checkHandGestureJitter:(id)a0 forHand:(id)a1;
- (void)adjustGestureForHand:(id)a0 withFace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)adjustGestureForHand:(id)a0 withFaceYaw:(id)a1;
- (char)checkHandGestureGlobalMotion:(id)a0 forHand:(id)a1;
- (char)checkHandGestureTemporalInconsistency:(id)a0 forHand:(id)a1;
- (char)checkHandHoldObject:(id)a0 forHand:(id)a1;
- (char)handInMitigationQuadrant:(id)a0 withFace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (char)handPalmFacingCamera:(id)a0 rotationInDegrees:(int)a1 useTips:(char)a2;
- (char)handTouchFace:(id)a0 andFace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotationInDegrees:(int)a2;
- (char)handsOverlap:(id)a0 pairedHand:(id)a1;
- (char)handsTooClose:(id)a0 pairedHand:(id)a1;
- (int)mitigate:(id)a0 rightHand:(id)a1 featureProvider:(id)a2 faceRects:(id)a3 faceYaws:(id)a4;
- (int)mitigateHand:(id)a0 handKey:(id)a1 pairedHand:(id)a2 featureProvider:(id)a3 faceRects:(id)a4 faceYaws:(id)a5;
- (char)mitigateWithFingerOpennessForHand:(id)a0;
- (char)mitigateWithFingerTiltingForHand:(id)a0;

@end
