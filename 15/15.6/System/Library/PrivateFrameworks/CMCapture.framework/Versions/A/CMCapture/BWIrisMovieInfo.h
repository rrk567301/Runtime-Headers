@class NSString, NSArray, NSURL, FigCaptureIrisStillImageSettings, BWMedianStats, BWStillImageCaptureSettings, NSDictionary, BWSubjectRelightingCalculatorResult, BWStats, FigCaptureSemanticStyle, FigCaptureMovieFileRecordingSettings, NSNumber;

@interface BWIrisMovieInfo : NSObject <NSCopying> {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillTimeOffsetToVideoPrerollStartInMilliseconds;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillTimeOffsetToVideoPrerollStopInMilliseconds;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillTimeOffsetToAudioPrerollStartInMilliseconds;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillTimeOffsetToAudioPrerollStopInMilliseconds;
}

@property (retain, nonatomic) NSURL *outputMovieURL;
@property (retain, nonatomic) NSURL *spatialOverCaptureOutputMovieURL;
@property (nonatomic, getter=isOriginalPhotoRecording) char originalPhotoRecording;
@property (readonly, nonatomic) FigCaptureMovieFileRecordingSettings *settings;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageCaptureTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageCaptureHostTime;
@property (readonly, nonatomic) double stillImageCaptureAbsoluteStartTime;
@property (readonly, nonatomic) BWStillImageCaptureSettings *stillImageCaptureSettings;
@property (readonly, nonatomic) FigCaptureIrisStillImageSettings *stillImageRequestSettings;
@property (readonly, nonatomic) int stillImageCaptureType;
@property (nonatomic, getter=isMomentCaptureMovieRecording) char momentCaptureMovieRecording;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } momentCaptureMovieRecordingMasterEndTime;
@property (nonatomic) struct CGSize { double width; double height; } nonDestructiveCropSize;
@property (nonatomic) char movieStartTimeRequiresCutting;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieStartTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieEndTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieEndingVideoPTS;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieTrimStartTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieTrimEndTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } beginTrimMasterPTS;
@property (readonly, nonatomic) char containsTrims;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } masterMovieStartTime;
@property (retain, nonatomic) NSURL *masterMovieURL;
@property (retain, nonatomic) NSURL *temporaryMovieURL;
@property (retain, nonatomic) NSURL *spatialOverCaptureMasterMovieURL;
@property (retain, nonatomic) NSURL *spatialOverCaptureTemporaryMovieURL;
@property (nonatomic) char spatialOverCaptureExpected;
@property (nonatomic, getter=isFinalReferenceMovie) char finalReferenceMovie;
@property (nonatomic) char stillImageEncoderKeyFrameEmitted;
@property (nonatomic) char stillImageVISKeyFrameTagged;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } audioOffset;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillTimeOffsetToVideoPrerollStartTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillTimeOffsetToVideoPrerollStopTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillTimeOffsetToAudioPrerollStartTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillTimeOffsetToAudioPrerollStopTime;
@property (nonatomic, getter=isFinalEnqueuedIrisRequest) char finalEnqueuedIrisRequest;
@property (nonatomic) char isOverlappingRequest;
@property (readonly, nonatomic) int numberOfRequestedVariants;
@property (nonatomic) unsigned int requestedSDOFVariants;
@property (copy, nonatomic) NSURL *temporaryURLForSDOFOriginalMovie;
@property (copy, nonatomic) NSURL *outputURLForSDOFOriginalMovie;
@property (copy, nonatomic) NSArray *movieLevelMetadataForSDOFOriginalMovie;
@property (nonatomic, getter=isVitalityScoreValid) char vitalityScoreValid;
@property (nonatomic) float vitalityScore;
@property (nonatomic) unsigned int vitalityScoringVersion;
@property (nonatomic) float transitionVitalityScoreV1;
@property (nonatomic, getter=isTransitionVitalityScoreValid) char transitionVitalityScoreValid;
@property (retain, nonatomic) NSDictionary *transitionVitalityFeatures;
@property (readonly, nonatomic) NSString *livePhotoMetadataStillImageKeyFrameSettingsID;
@property (nonatomic) char limitStillImageTransformDuringVitalityPlayback;
@property (readonly, nonatomic) char requiresSubjectRelightingCalculation;
@property (retain, nonatomic) BWSubjectRelightingCalculatorResult *subjectRelightingResult;
@property (copy, nonatomic) BWStats *stagingNodeOverallVideoFrameReceptionStats;
@property (copy, nonatomic) BWStats *stagingNodeValveActiveVideoFrameReceptionStats;
@property (copy, nonatomic) BWStats *fileCoordinatorToWriterMovingWindowLatencyStats;
@property (nonatomic) int stillImageCaptureLuxLevel;
@property (nonatomic) int maxSystemPressureLevel;
@property (copy, nonatomic) NSNumber *irisSequenceAdjusterRecipeIdentifier;
@property (nonatomic) float targetFrameRate;
@property (copy, nonatomic) BWMedianStats *videoFrameDurationStats;
@property (nonatomic) unsigned long long numberOfFramesDropped;
@property (nonatomic) long long enqueuedHostTime;
@property (nonatomic) double processingTimeInMilliseconds;
@property (readonly, nonatomic) FigCaptureSemanticStyle *semanticStyle;
@property (nonatomic) char isHardCut;

+ (id)emptyIrisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)a0;
+ (id)irisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)a0 stillImageCaptureTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 stillImageCaptureHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 stillImageCaptureAbsoluteStartTime:(double)a3 stillImageRequestSettings:(id)a4 stillImageCaptureSettings:(id)a5 originalPhotoRecording:(char)a6 semanticStyle:(id)a7;
+ (id)livePhotoMetadataStillImageKeyFrameSettingsIDForSettingsID:(long long)a0 isOriginalPhotoRecording:(char)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)copyMovieInfosForRequestedSDOFVariants;
- (id)copySpatialOverCaptureVariant;
- (void)setMomentCaptureRecordingStillImageCaptureHostTimeOverride:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 stillImageCaptureTimeOverride:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
