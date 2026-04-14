@class NSArray, AVCaptureMetadataOutputInternal_Tundra, NSObject;
@protocol OS_dispatch_queue, AVCaptureMetadataOutputObjectsDelegate_Tundra;

@interface AVCaptureMetadataOutput_Tundra : AVCaptureOutput_Tundra {
    AVCaptureMetadataOutputInternal_Tundra *_internal;
}

@property (readonly, nonatomic) id<AVCaptureMetadataOutputObjectsDelegate_Tundra> metadataObjectsDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *metadataObjectsCallbackQueue;
@property (readonly, nonatomic) NSArray *availableMetadataObjectTypes;
@property (copy, nonatomic) NSArray *metadataObjectTypes;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectOfInterest;
@property (readonly, nonatomic) NSArray *requiredMetadataObjectTypesForCinematicVideoCapture;

+ (id)new;
+ (void)initialize;

- (BOOL)isFaceTrackingSuspended;
- (BOOL)isAttentionDetectionSupported;
- (void)setFaceTrackingNetworkFailureThresholdMultiplier:(float)a0;
- (BOOL)isAttentionForFaceIDReadinessRequired;
- (long long)faceTrackingMaxFaces;
- (id)connectionMediaTypes;
- (void)dealloc;
- (BOOL)isFaceOcclusionDetectionEnabled;
- (void)setPeriocularForFaceIDReadinessEnabled:(BOOL)a0;
- (BOOL)isFaceTrackingMetadataObjectTypesAvailable;
- (BOOL)isFaceTrackingSupported;
- (void)setFaceTrackingUsesFaceRecognition:(BOOL)a0;
- (float)faceTrackingFailureFieldOfViewModifier;
- (void)setFaceOcclusionDetectionEnabled:(BOOL)a0;
- (id)init;
- (void)setFaceTrackingMetadataObjectTypesAvailable:(BOOL)a0;
- (void)setAttentionForFaceIDReadinessRequired:(BOOL)a0;
- (void)setFaceTrackingMaxFaces:(long long)a0;
- (void)setAttentionDetectionEnabled:(BOOL)a0;
- (BOOL)isAttentionDetectionEnabled;
- (BOOL)isFaceTrackingUsingFaceRecognition;
- (void)setFaceTrackingPlusEnabled:(BOOL)a0;
- (BOOL)isPeriocularForFaceIDReadinessEnabled;
- (void)setMetadataObjectsDelegate:(id)a0 queue:(id)a1;
- (void)setFaceTrackingSuspended:(BOOL)a0;
- (BOOL)isFaceOcclusionDetectionSupported;
- (void)setFaceTrackingFailureFieldOfViewModifier:(float)a0;
- (BOOL)isFaceTrackingPlusEnabled;
- (float)faceTrackingNetworkFailureThresholdMultiplier;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (int)connectionGraphNodeForConnection:(id)a0;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (id)outputGraphNodeDescriptionForConnection:(id)a0;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;

@end
