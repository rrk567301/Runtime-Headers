@class VNFaceBBoxAligner;

@interface VNFaceDetectorRevision2 : VNFaceDetector {
    struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector_v2> { struct ObjectDetector_DCNFaceDetector_v2 *__ptr_; struct __shared_weak_count *__cntrl_; } _faceDetector;
    VNFaceBBoxAligner *_faceBBoxAligner;
    BOOL _preferBackgroundProcessing;
}

+ (id)computeStagesToBindForConfigurationOptions:(id)a0;
+ (id)supportedImageSizeSetForOptions:(id)a0 error:(id *)a1;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)configurationOptionKeysForDetectorKey;

- (void)purgeIntermediates;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (id).cxx_construct;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (void).cxx_destruct;

@end
