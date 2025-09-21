@class NSArray, NSDictionary, NSURL, NSData, FigCaptureSmartStyle;

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings {
    FigCaptureSmartStyle *smartStyle;
}

@property (copy, nonatomic) NSDictionary *videoSettings;
@property (copy, nonatomic) NSDictionary *audioSettings;
@property (copy, nonatomic) NSDictionary *cinematicAudioSettings;
@property (nonatomic) char videoMirrored;
@property (nonatomic) int videoOrientation;
@property (nonatomic) char recordVideoOrientationAndMirroringChanges;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieFragmentInterval;
@property (copy, nonatomic) NSArray *movieLevelMetadata;
@property (nonatomic) char sendPreviewIOSurface;
@property (nonatomic, getter=isIrisRecording) char irisRecording;
@property (nonatomic) char debugMetadataSidecarFileEnabled;
@property (nonatomic) char metadataIdentifiersEnabled;
@property (nonatomic) struct { char enabled; long long selectionBehavior; unsigned long long restrictedSelectionConditions; } bravoCameraSelectionConfigurationForRecording;
@property (nonatomic, getter=isIrisMovieRecording) char irisMovieRecording;
@property (copy, nonatomic) NSURL *spatialOverCaptureMovieURL;
@property (copy, nonatomic) NSArray *spatialOverCaptureMovieLevelMetadata;
@property (nonatomic) unsigned long long movieStartTimeOverride;
@property (nonatomic) char usesVirtualCaptureCard;
@property (nonatomic) char personSegmentationRenderingEnabled;
@property (retain, nonatomic) NSData *personSegmentationForegroundColorCube;
@property (retain, nonatomic) NSData *personSegmentationBackgroundColorCube;
@property (nonatomic) char videoSTFEnabled;
@property (nonatomic) char smartStyleReversibilitySupported;
@property (copy, nonatomic) FigCaptureSmartStyle *smartStyle;
@property (nonatomic) char smartStyleRenderingBypassed;
@property (nonatomic) char audioWasPlayingDuringCapture;
@property (nonatomic) char audioMixWithOthersEnabled;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
