@interface VFXARKitGazeTracker : NSObject

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } leftEyeTransform;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } centerTransform;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } rightEyeTransform;

- (void)stop;
- (id)init;
- (void)start;
- (void)dealloc;

@end
