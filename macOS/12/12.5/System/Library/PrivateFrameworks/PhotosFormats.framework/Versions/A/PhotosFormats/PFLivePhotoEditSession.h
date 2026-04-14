@class NSString, CIContext, AVAssetExportSession, NSURL, NSDictionary, CIImage, NSObject, AVAsset;
@protocol OS_dispatch_queue;

@interface PFLivePhotoEditSession : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
    AVAsset *_videoAsset;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _inputVideoDuration;
    struct CGImageSource { } *_inputImageSource;
    unsigned int _inputOrientation;
    NSDictionary *_inputImageProperties;
    CIContext *_renderContext;
    AVAssetExportSession *_exportSession;
    CIImage *_inputImage;
    CIImage *_subsampledInputImage;
    long long _subsampleFactor;
    CIImage *_outputImage;
    CIImage *_scaledOutputImage;
    double _inputVideoScale;
    struct CGSize { double width; double height; } _inputVideoScaleRoundingError;
    id /* block */ _frameProcessor;
    NSString *_temporaryDirectory;
    NSURL *_lastTemporaryVideoURL;
    NSString *_uniqueIdentifier;
    BOOL _isExporting;
}

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } photoTime;
@property (readonly) unsigned int orientation;
@property (readonly) CIImage *inputImage;
@property (copy) id /* block */ frameProcessor;
@property float audioVolume;
@property (readonly) struct CGSize { double x0; double x1; } outputImageSize;
@property (readonly) struct CGSize { double x0; double x1; } outputVideoSize;

+ (id)temporaryDirectory;
+ (id)_createTemporaryDirectory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (id)outputImage;
- (id)imageProperties;
- (id)_inputImage;
- (id)initWithPhotoURL:(id)a0 videoURL:(id)a1 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 photoOrientation:(unsigned int)a3;
- (void)prepareForPlaybackWithTargetSize:(struct CGSize { double x0; double x1; })a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)exportToDestination:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)_outputImage;
- (unsigned int)_inputOrientation;
- (struct CGSize { double x0; double x1; })_inputImageSize;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_inputVideoDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_loadInputVideoDuration;
- (unsigned int)_loadInputImageOrientation;
- (id)_inputImageProperties;
- (id)_loadInputImageProperties;
- (id)_loadInputImage;
- (id)_loadInputImageWithSubsampleFactor:(long long)a0;
- (id)_scaledInputImageForTargetScale:(double)a0;
- (id)_inputVideoTrack;
- (struct CGSize { double x0; double x1; })_inputVideoSize;
- (id)_processImage:(id)a0 scale:(double)a1 error:(id *)a2;
- (struct CGSize { double x0; double x1; })_outputImageSize;
- (struct CGSize { double x0; double x1; })_outputVideoSize;
- (double)_inputVideoScale;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_inputVideoTransform;
- (double)_targetScaleForTargetSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_outputVideoSizeForScale:(double)a0;
- (void)_cancelCurrentExportIfNeeded;
- (void)_prepareForPlaybackWithTargetSize:(struct CGSize { double x0; double x1; })a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_canRenderAtPlaybackTime;
- (void)_renderImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (id)_videoCompositionForTargetSize:(struct CGSize { double x0; double x1; })a0;
- (id)_temporaryURLOfType:(id)a0;
- (void)_renderVideoToURL:(id)a0 fileType:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 volume:(float)a3 completionHandler:(id /* block */)a4;
- (id)_outputImageProperties;
- (id)_outputVideoMetadata;
- (void)_exportToDestination:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)_renderImageToURL:(id)a0 fileType:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (id)inputImageForRenderScale:(double)a0;

@end
