@class NSDictionary, AVWeakReference, NSMutableArray;

@interface AVCaptureStillImageOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSMutableArray *stillImageRequests;
    char squareCropEnabled;
    struct CGSize { double width; double height; } previewImageSize;
    unsigned int imageDataFormatType;
    float jpegQuality;
    char jpegQualitySpecified;
    char noiseReductionEnabled;
    NSDictionary *outputSettings;
    char isCapturingPhoto;
    char SISSupported;
    char SISEnabled;
    char SISActive;
    char highResStillEnabled;
    unsigned int shutterSoundID;
    struct { unsigned int imageCount; int outputFormat; unsigned int outputWidth; unsigned int outputHeight; } preparedBracket;
    NSMutableArray *prepareRequests;
    unsigned long long maxBracketedCaptureCount;
    char lensStabilizationDuringBracketedCaptureSupported;
    char lensStabilizationDuringBracketedCaptureEnabled;
    char bravoImageFusionSupported;
}

- (void)dealloc;
- (id)init;

@end
