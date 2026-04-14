@class NSArray, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureCinematographyPipelineConfiguration : NSObject {
    NSArray *_objectMetadataIdentifiers;
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    int _depthType;
}

- (void)dealloc;

@end
