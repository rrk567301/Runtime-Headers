@interface VNTrackObjectRequest : VNTrackingRequest

@property (nonatomic) struct CGSize { double width; double height; } trackingFrameSizeInPixels;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)trackerTypeForRequestRevision:(unsigned long long)a0 error:(id *)a1;
+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)a0;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;

- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)_trackingLevelOptionFromTrackingLevelEnum;
- (id)initWithDetectedObjectObservation:(id)a0 completionHandler:(id /* block */)a1;
- (void)setTrackingLevel:(unsigned long long)a0;
- (id)initWithDetectedObjectObservation:(id)a0;

@end
