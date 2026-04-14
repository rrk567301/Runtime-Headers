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

- (id)connectionMediaTypes;
- (BOOL)isAttentionDetectionEnabled;
- (void)setFaceTrackingMetadataObjectTypesAvailable:(BOOL)a0;
- (BOOL)isPeriocularForFaceIDReadinessEnabled;
- (void)setFaceTrackingMaxFaces:(long long)a0;
- (void)setPeriocularForFaceIDReadinessEnabled:(BOOL)a0;
- (long long)faceTrackingMaxFaces;
- (void)setFaceTrackingNetworkFailureThresholdMultiplier:(float)a0;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)isFaceTrackingUsingFaceRecognition;
- (BOOL)isFaceTrackingSuspended;
- (BOOL)isAttentionForFaceIDReadinessRequired;
- (BOOL)isFaceTrackingSupported;
- (void)setAttentionDetectionEnabled:(BOOL)a0;
- (float)faceTrackingFailureFieldOfViewModifier;
- (void)setFaceTrackingFailureFieldOfViewModifier:(float)a0;
- (BOOL)isFaceTrackingMetadataObjectTypesAvailable;
- (void)setFaceTrackingUsesFaceRecognition:(BOOL)a0;
- (BOOL)isFaceOcclusionDetectionEnabled;
- (BOOL)isFaceOcclusionDetectionSupported;
- (id)init;
- (void)setFaceTrackingSuspended:(BOOL)a0;
- (BOOL)isFaceTrackingPlusEnabled;
- (void)setFaceOcclusionDetectionEnabled:(BOOL)a0;
- (void)setFaceTrackingPlusEnabled:(BOOL)a0;
- (float)faceTrackingNetworkFailureThresholdMultiplier;
- (void)setAttentionForFaceIDReadinessRequired:(BOOL)a0;
- (void)setMetadataObjectsDelegate:(id)a0 queue:(id)a1;
- (void)dealloc;
- (BOOL)isAttentionDetectionSupported;
- (BOOL)addOutputUnitsForConnection:(id)a0 toGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2 error:(id *)a3;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (int)connectionGraphNodeForConnection:(id)a0;
- (unsigned int)connectionUnitInputNumberForConnection:(id)a0;
- (id)outputGraphNodeDescriptionForConnection:(id)a0;
- (void)removeOutputUnitsForConnection:(id)a0 fromGraph:(struct OpaqueCMIOGraph { } *)a1 ofCaptureSession:(id)a2;

@end
