@class AVDispatchOnce, AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigTrackReader { } *_trackReader;
    AVDispatchOnce *_copySampleCursorServiceOnce;
    struct OpaqueFigSampleCursorService { } *_figSampleCursorService;
    BOOL _sampleCursorTimeAccuracyIsExact;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)languageCode;
- (BOOL)isEnabled;
- (long long)layer;
- (id)segments;
- (struct CGSize { double x0; double x1; })dimensions;
- (id)mediaType;
- (id)asset;
- (int)trackID;
- (float)nominalFrameRate;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (id)extendedLanguageTag;
- (float)preferredVolume;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct CGSize { double x0; double x1; })naturalSize;
- (int)naturalTimeScale;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)a0;
- (BOOL)isPlayable;
- (id)formatDescriptions;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (BOOL)isDecodable;
- (int)playabilityValidationResult;
- (BOOL)isSelfContained;
- (long long)totalSampleDataLength;
- (id)mediaCharacteristics;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (BOOL)requiresFrameReordering;
- (BOOL)hasAudioSampleDependencies;
- (float)estimatedDataRate;
- (float)peakDataRate;
- (id)loudnessInfo;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)alternateGroupID;
- (long long)defaultAlternateGroupID;
- (long long)provisionalAlternateGroupID;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (id)_trackReferences;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (unsigned int)_figMediaType;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (int)decodabilityValidationResult;

@end
