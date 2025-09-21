@class NSDictionary;

@interface CIFaceFeature : CIFeature

@property (readonly) NSDictionary *landmarks;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly) char hasLeftEyePosition;
@property (readonly) struct CGPoint { double x; double y; } leftEyePosition;
@property (readonly) char hasRightEyePosition;
@property (readonly) struct CGPoint { double x; double y; } rightEyePosition;
@property (readonly) char hasMouthPosition;
@property (readonly) struct CGPoint { double x; double y; } mouthPosition;
@property (readonly) char hasTrackingID;
@property (readonly) int trackingID;
@property (readonly) char hasTrackingFrameCount;
@property (readonly) int trackingFrameCount;
@property (readonly) char hasFaceAngle;
@property (readonly) float faceAngle;
@property (readonly) char hasSmile;
@property (readonly) char leftEyeClosed;
@property (readonly) char rightEyeClosed;

- (void)dealloc;
- (id)debugDescription;
- (id)type;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hasLeftEyePosition:(char)a1 leftEyePosition:(struct CGPoint { double x0; double x1; })a2 hasRightEyePosition:(char)a3 rightEyePosition:(struct CGPoint { double x0; double x1; })a4 hasMouthPosition:(char)a5 mouthPosition:(struct CGPoint { double x0; double x1; })a6 hasFaceAngle:(char)a7 faceAngle:(float)a8 hasTrackingID:(char)a9 trackingID:(int)a10 hasTrackingFrameCount:(char)a11 trackingFrameCount:(int)a12 hasSmile:(char)a13 leftEyeClosed:(char)a14 rightEyeClosed:(char)a15 landmarks:(id)a16;

@end
