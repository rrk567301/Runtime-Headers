@class FigVideoCaptureConnectionConfiguration, NSArray, FigMetadataObjectCaptureConnectionConfiguration;

@interface FigCaptureMetadataSinkPipelineConfiguration : NSObject {
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    char _mrcLowPowerModeEnabled;
    char _useSceneClassifierToGateMetadataDetectors;
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _smartCameraPipelineVersion;
    char _vitalityScoringEnabled;
    char _deferredPrepareEnabled;
    char _previewEnabled;
    int _motionAttachmentsSource;
    char _boxedMetadataEnabled;
    char _compressed8BitInputEnabled;
    int _pearlModuleType;
    NSArray *_detectedObjectMovieFileOutputMetadataConnectionConfigurations;
    int _inputRotationRelativeToSource;
}

- (void)dealloc;

@end
