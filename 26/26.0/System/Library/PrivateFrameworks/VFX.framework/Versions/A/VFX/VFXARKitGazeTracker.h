@interface VFXARKitGazeTracker : NSObject

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } leftEyeTransform;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } centerTransform;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } rightEyeTransform;

- (void)start;
- (void)dealloc;
- (void)stop;
- (id)init;

@end
