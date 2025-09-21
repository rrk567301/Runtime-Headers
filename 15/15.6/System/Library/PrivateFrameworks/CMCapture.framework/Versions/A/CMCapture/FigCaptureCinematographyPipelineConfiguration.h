@class NSArray, FigCaptureSmartStyle, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureCinematographyPipelineConfiguration : NSObject {
    NSArray *_objectMetadataIdentifiers;
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    char _smartStyleLearningEnabled;
    FigCaptureSmartStyle *_smartStyle;
    char _preLTMThumbnailEnabled;
    char _postColorProcessingThumbnailEnabled;
    int _depthType;
}

- (void)dealloc;

@end
