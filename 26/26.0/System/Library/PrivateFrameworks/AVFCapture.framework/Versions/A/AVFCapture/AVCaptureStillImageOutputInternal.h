@class NSDictionary, AVWeakReference, NSMutableArray;

@interface AVCaptureStillImageOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSMutableArray *stillImageRequests;
    struct CGSize { double width; double height; } previewImageSize;
    unsigned int imageDataFormatType;
    float jpegQuality;
    BOOL jpegQualitySpecified;
    BOOL noiseReductionEnabled;
    NSDictionary *outputSettings;
    BOOL isCapturingPhoto;
    BOOL SISSupported;
    BOOL SISEnabled;
    BOOL SISActive;
    BOOL highResStillEnabled;
    unsigned int shutterSoundID;
    struct { unsigned int imageCount; int outputFormat; unsigned int outputWidth; unsigned int outputHeight; } preparedBracket;
    NSMutableArray *prepareRequests;
    unsigned long long maxBracketedCaptureCount;
    BOOL lensStabilizationDuringBracketedCaptureSupported;
    BOOL lensStabilizationDuringBracketedCaptureEnabled;
    BOOL bravoImageFusionSupported;
    BOOL cameraSensorOrientationCompensationSupported;
    BOOL cameraSensorOrientationCompensationEnabled;
    BOOL cameraSensorOrientationCompensationAutomaticallyEnabled;
}

- (void)dealloc;
- (id)init;

@end
