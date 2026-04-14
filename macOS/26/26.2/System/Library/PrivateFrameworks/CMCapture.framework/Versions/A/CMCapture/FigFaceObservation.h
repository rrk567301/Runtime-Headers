@class VNTrackObjectRequest, VNFaceObservation;

@interface FigFaceObservation : NSObject

@property (readonly) VNFaceObservation *faceObservation;
@property (readonly) VNTrackObjectRequest *faceTrackingRequest;
@property (readonly) unsigned long long faceID;
@property unsigned long long lastUpdatedTime;

- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)initWithFaceObservation:(id)a0 faceID:(unsigned long long)a1 time:(unsigned long long)a2;

@end
