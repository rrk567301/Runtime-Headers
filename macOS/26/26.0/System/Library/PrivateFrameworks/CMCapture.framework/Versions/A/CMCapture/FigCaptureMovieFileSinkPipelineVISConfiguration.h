@class NSObject;
@protocol OS_dispatch_semaphore;

@interface FigCaptureMovieFileSinkPipelineVISConfiguration : NSObject {
    struct { int width; int height; } _visOutputDimensions;
    int _videoStabilizationType;
    int _videoStabilizationStrength;
    int _motionAttachmentsSource;
    NSObject<OS_dispatch_semaphore> *_visProcessingSemaphore;
    float _videoStabilizationOverscanOverride;
}

- (void)dealloc;

@end
