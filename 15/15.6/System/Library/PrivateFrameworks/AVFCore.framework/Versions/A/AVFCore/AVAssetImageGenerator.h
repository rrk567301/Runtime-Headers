@class AVAsset, NSString, AVAssetImageGeneratorInternal, AVVideoComposition;
@protocol AVVideoCompositing;

@interface AVAssetImageGenerator : NSObject {
    AVAssetImageGeneratorInternal *_priv;
}

@property (readonly, nonatomic) AVAsset *asset;
@property (nonatomic) char appliesPreferredTrackTransform;
@property (nonatomic) struct CGSize { double x0; double x1; } maximumSize;
@property (copy, nonatomic) NSString *apertureMode;
@property (copy, nonatomic) NSString *dynamicRangePolicy;
@property (copy, nonatomic) AVVideoComposition *videoComposition;
@property (readonly, nonatomic) id<AVVideoCompositing> customVideoCompositor;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } requestedTimeToleranceBefore;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } requestedTimeToleranceAfter;

+ (id)assetImageGeneratorWithAsset:(id)a0;

- (void)dealloc;
- (id)init;
- (long long)status;
- (struct CGImage { } *)copyCGImageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 actualTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 error:(id *)a2;
- (id)initWithAsset:(id)a0;
- (void)_invalidated;
- (void)setPrefersStandardDynamicRange:(char)a0;
- (id)_videoSettingWithSize:(struct CGSize { double x0; double x1; })a0 bitDepth:(unsigned int)a1;
- (id)_NSErrorForError:(int)a0;
- (struct CGImage { } *)_copyCGImageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingAssetReader:(id)a1 error:(id *)a2;
- (void)_didGenerateCGImage:(id)a0;
- (char)_ensureFigAssetImageGeneratorAllowingSynchronousPropertyLoad:(char)a0 error:(id *)a1;
- (void)_failedToGenerateCGImage:(id)a0;
- (id)_makeAutoreleasedAssetReader;
- (id)_optionsDictionary;
- (id)_requestWithRequestID:(id)a0;
- (struct CGSize { double x0; double x1; })_scaledSizeForRenderSize:(struct CGSize { double x0; double x1; })a0;
- (void)_serverDied;
- (char)allowsProfessionalVideoWorkflowVideoDecoders;
- (void)cancelAllCGImageGeneration;
- (void)generateCGImageAsynchronouslyForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (void)generateCGImagesAsynchronouslyForTimes:(id)a0 completionHandler:(id /* block */)a1;
- (char)prefersStandardDynamicRange;
- (void)setAllowsProfessionalVideoWorkflowVideoDecoders:(char)a0;
- (void)setUseSWDecoderForAV1:(char)a0;
- (char)useSWDecoderForAV1;

@end
