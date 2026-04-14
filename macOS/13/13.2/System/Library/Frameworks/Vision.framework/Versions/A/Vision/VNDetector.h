@class NSString, NSDictionary, VNMetalContext, VNControlledCapacityTasksQueue;

@interface VNDetector : NSObject <VNClassCodeProviding, VNDetectorKeyProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _detectorMultiSessionAccessLock;
}

@property (class, readonly) VNControlledCapacityTasksQueue *detectorCropCreationAsyncTasksQueue;
@property (class, readonly) VNControlledCapacityTasksQueue *detectorCropProcessingAsyncTasksQueue;

@property (retain, nonatomic) VNControlledCapacityTasksQueue *synchronizationQueue;
@property (readonly, nonatomic) unsigned long long signPostAdditionalParameter;
@property (readonly, copy) NSDictionary *configurationOptions;
@property (readonly, nonatomic) VNMetalContext *metalContext;
@property (readonly, nonatomic) unsigned long long backingStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationOptionKeysForDetectorKey;
+ (id)keyForDetectorWithConfigurationOptions:(id)a0;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (unsigned int)VNClassCode;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (BOOL)isReentrant;
+ (Class)detectorClassForDetectorType:(id)a0 error:(id *)a1;
+ (Class)detectorClassForDetectorType:(id)a0 configuredWithOptions:(id)a1 error:(id *)a2;
+ (id)detectorName;
+ (void)fullyPopulateConfigurationOptions:(id)a0;
+ (id)fullyPopulatedConfigurationOptionsWithOverridingOptions:(id)a0;
+ (id)detectorWithConfigurationOptions:(id)a0 forSession:(id)a1 error:(id *)a2;
+ (id)detectorKeyComponentForDetectorConfigurationOptionKey:(id)a0 value:(id)a1;
+ (id)supportedImageSizeSetForEspressoModelWithName:(id)a0 inputImageBlobName:(id)a1 analysisPixelFormatType:(unsigned int)a2 error:(id *)a3;
+ (void)runSuccessReportingBlockSynchronously:(id /* block */)a0 detector:(id)a1 qosClass:(unsigned int)a2 error:(id *)a3;
+ (id)primaryInferenceNetworkDescriptorForIdentifier:(id)a0 version:(id)a1 error:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 warningRecorder:(id)a2 pixelBuffer:(struct __CVBuffer **)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)inferenceNetworkIdentifiers;
- (BOOL)supportsProcessingDevice:(id)a0;
- (BOOL)needsMetalContext;
- (id)initWithConfigurationOptions:(id)a0;
- (BOOL)canBehaveAsDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (BOOL)shouldBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (BOOL)useGPU;
- (BOOL)warmUpSession:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (id)processUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (BOOL)currentQueueIsSynchronizationQueue;
- (BOOL)validateImageBuffer:(id)a0 error:(id *)a1;
- (id)validatedImageBufferFromOptions:(id)a0 error:(id *)a1;
- (id)newMetalContextForConfigurationOptions:(id)a0 error:(id *)a1;
- (BOOL)getOptionalCanceller:(id *)a0 inOptions:(id)a1 error:(id *)a2;
- (id)requiredCancellerInOptions:(id)a0 error:(id *)a1;
- (id)validatedProcessingDeviceInOptions:(id)a0 error:(id *)a1;
- (void)recordImageCropQuickLookInfoToOptions:(id)a0 cacheKey:(id)a1 imageBuffer:(id)a2;
- (void)recordImageCropQuickLookInfoFromOptions:(id)a0 toObservation:(id)a1;
- (void)recordImageCropQuickLookInfoToOptionsSafe:(id)a0 cacheKey:(id)a1 imageBuffer:(id)a2;
- (void)recordImageCropQuickLookInfoFromOptionsSafe:(id)a0 toObservation:(id)a1;

@end
