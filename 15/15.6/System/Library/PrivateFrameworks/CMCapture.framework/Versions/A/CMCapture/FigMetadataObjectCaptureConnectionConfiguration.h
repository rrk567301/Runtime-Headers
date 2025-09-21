@class NSArray;

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (copy, nonatomic) NSArray *metadataIdentifiers;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } metadataRectOfInterest;
@property (nonatomic) int faceTrackingMaxFaces;
@property (nonatomic) char faceTrackingUsesFaceRecognition;
@property (nonatomic) char faceTrackingPlusEnabled;
@property (nonatomic) float faceTrackingNetworkFailureThresholdMultiplier;
@property (nonatomic) float faceTrackingFailureFieldOfViewModifier;
@property (nonatomic) char attentionDetectionEnabled;
@property (nonatomic) char periocularForFaceIDReadinessEnabled;
@property (nonatomic) char attentionForFaceIDReadinessRequired;
@property (nonatomic) char faceOcclusionDetectionEnabled;
@property (nonatomic) float motionToWakeTargetFrameRate;
@property (nonatomic) float objectDetectionTargetFrameRate;
@property (nonatomic) char attachMetadataToVideoBuffers;
@property (nonatomic) char emitsEmptyObjectDetectionMetadata;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end
