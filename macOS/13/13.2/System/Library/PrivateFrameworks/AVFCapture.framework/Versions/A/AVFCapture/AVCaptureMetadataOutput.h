@class NSArray, NSString, AVCaptureMetadataOutputInternal, NSObject;
@protocol AVCaptureMetadataOutputObjectsDelegate, OS_dispatch_queue;

@interface AVCaptureMetadataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureMetadataOutputInternal *_internal;
}

@property (readonly, nonatomic) id<AVCaptureMetadataOutputObjectsDelegate> metadataObjectsDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *metadataObjectsCallbackQueue;
@property (readonly, nonatomic) NSArray *availableMetadataObjectTypes;
@property (copy, nonatomic) NSArray *metadataObjectTypes;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectOfInterest;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)new;
+ (id)_metadataConstantValueToName:(id)a0;

- (void)dealloc;
- (id)init;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setDelegateOverride:(id)a0 delegateOverrideCallbackQueue:(id)a1;
- (id)connectionMediaTypes;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)_updateLocalQueue:(struct localQueueOpaque { } *)a0;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)setMetadataObjectsDelegate:(id)a0 queue:(id)a1;
- (long long)faceTrackingMaxFaces;
- (float)faceTrackingNetworkFailureThresholdMultiplier;
- (id)_metadataIdentifiers;
- (BOOL)isFaceTrackingSupported;
- (BOOL)isFaceTrackingMetadataObjectTypesAvailable;
- (void)setFaceTrackingMetadataObjectTypesAvailable:(BOOL)a0;
- (void)setFaceTrackingMaxFaces:(long long)a0;
- (void)setFaceTrackingUsesFaceRecognition:(BOOL)a0;
- (BOOL)isFaceTrackingUsingFaceRecognition;
- (void)setFaceTrackingPlusEnabled:(BOOL)a0;
- (BOOL)isFaceTrackingPlusEnabled;
- (void)setFaceTrackingNetworkFailureThresholdMultiplier:(float)a0;
- (BOOL)isOfflineVideoStabilizationMotionMetadataSupported;
- (BOOL)isOfflineVideoStabilizationMotionMetadataObjectTypesAvailable;
- (void)setOfflineVideoStabilizationMotionMetadataObjectTypesAvailable:(BOOL)a0;
- (BOOL)isVideoPreviewHistogramMetadataSupported;
- (BOOL)isVideoPreviewHistogramMetadataObjectTypesAvailable;
- (void)setVideoPreviewHistogramMetadataObjectTypesAvailable:(BOOL)a0;
- (BOOL)isAppClipCodeMetadataSupported;
- (BOOL)isAppClipCodeMetadataObjectTypeAvailable;
- (void)setAppClipCodeMetadataObjectTypeAvailable:(BOOL)a0;
- (BOOL)isTextRegionMetadataSupported;
- (BOOL)isTextRegionMetadataObjectTypeAvailable;
- (void)setTextRegionMetadataObjectTypeAvailable:(BOOL)a0;
- (BOOL)isHeadMetadataSupported;
- (BOOL)isHeadMetadataObjectTypesAvailable;
- (void)setHeadMetadataObjectTypesAvailable:(BOOL)a0;
- (id)_detectedObjectsCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1 facesArrayOut:(id *)a2;
- (id)_legacyFaceCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;
- (id)_trackedFacesCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;
- (id)_offlineVISMotionCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;
- (id)_barcodeCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;
- (id)_lumaHistogramDataCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;
- (id)_appClipCodesCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;
- (id)_textRegionsCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;

@end
