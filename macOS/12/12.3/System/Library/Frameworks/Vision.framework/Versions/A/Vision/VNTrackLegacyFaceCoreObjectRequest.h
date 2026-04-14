@class NSNumber;

@interface VNTrackLegacyFaceCoreObjectRequest : VNTrackObjectRequest

@property (retain, nonatomic) NSNumber *faceCoreMinFaceSize;
@property (retain, nonatomic) NSNumber *faceCoreNumberOfDetectionAngles;
@property (nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) BOOL faceCoreExtractBlink;
@property (nonatomic) BOOL faceCoreExtractSmile;
@property (nonatomic) float faceCoreKalmanFilter;

+ (id)supportedPrivateRevisions;
+ (id)trackerTypeForRequestRevision:(unsigned long long)a0 error:(id *)a1;
+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)a0;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)populateDetectorProcessingOptions:(id)a0 session:(id)a1;
- (id)initWithDetectedObjectObservation:(id)a0;

@end
