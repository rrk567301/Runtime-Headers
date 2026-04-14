@class VNFaceObservation, NSString, NSNumber, VNDetectedObjectObservation;

@interface ODMGTimedVNObservation : NSObject {
    NSNumber *_yawAngle;
    NSNumber *_rollAngle;
}

@property (readonly) VNDetectedObjectObservation *observation;
@property (readonly) VNFaceObservation *faceObservation;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly) NSString *kind;
@property unsigned long long objectID;
@property (copy) NSNumber *yawAngle;
@property (copy) NSNumber *rollAngle;
@property BOOL hasBeenAttachedToSampleBuffer;

+ (id)ODMGTimedVNObservationWithObservation:(id)a0 kind:(id)a1 overrideTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

- (void)dealloc;
- (id)_initWithObservation:(id)a0 kind:(id)a1 overrideTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
