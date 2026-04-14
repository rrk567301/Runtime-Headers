@class FigVideoCaptureConnectionConfiguration, NSArray, FigMetadataObjectCaptureConnectionConfiguration;

@interface FigCaptureMetadataSinkPipelineConfiguration : NSObject {
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    BOOL _mrcLowPowerModeEnabled;
    BOOL _useSceneClassifierToGateMetadataDetectors;
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _smartCameraPipelineVersion;
    BOOL _vitalityScoringEnabled;
    BOOL _previewEnabled;
    int _motionAttachmentsSource;
    BOOL _boxedMetadataEnabled;
    BOOL _compressed8BitInputEnabled;
    int _pearlModuleType;
    NSArray *_detectedObjectMovieFileOutputMetadataConnectionConfigurations;
    struct BWLensSmudgeDetectionConfiguration { BOOL lensSmudgeDetectionEnabled; struct { long long value; int timescale; unsigned int flags; long long epoch; } lensSmudgeDetectionInterval; } _lensSmudgeDetectionConfiguration;
    BOOL _deferredPrepareEnabled;
    int _inputRotationRelativeToSource;
}

- (void)dealloc;

@end
