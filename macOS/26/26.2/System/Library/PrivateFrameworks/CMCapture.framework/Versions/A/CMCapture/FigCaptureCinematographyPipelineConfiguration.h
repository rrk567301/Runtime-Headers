@class NSArray, FigCaptureSourceConfiguration, FigCaptureSmartStyle;

@interface FigCaptureCinematographyPipelineConfiguration : NSObject {
    NSArray *_objectMetadataIdentifiers;
    NSArray *_videoCaptureConnectionConfigurations;
    NSArray *_previewConnectionConfigurations;
    FigCaptureSourceConfiguration *_sourceConfiguration;
    BOOL _smartStyleLearningEnabled;
    FigCaptureSmartStyle *_smartStyle;
    BOOL _smartStyleReversibilityEnabled;
    BOOL _preLTMThumbnailEnabled;
    BOOL _postColorProcessingThumbnailEnabled;
    BOOL _weightSegmentMapEnabled;
    int _depthType;
}

- (void)dealloc;

@end
