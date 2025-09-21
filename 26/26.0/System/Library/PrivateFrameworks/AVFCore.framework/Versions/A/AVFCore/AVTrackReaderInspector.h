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
    BOOL _prefersNominalDurations;
}

- (float)preferredVolume;
- (id)commonMetadata;
- (struct CGSize { double x0; double x1; })naturalSize;
- (float)nominalFrameRate;
- (long long)totalSampleDataLength;
- (BOOL)isDecodable;
- (long long)provisionalAlternateGroupID;
- (id)_trackReferences;
- (id)segments;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (int)naturalTimeScale;
- (id)availableMetadataFormats;
- (long long)layer;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (BOOL)isPlayable;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)loudnessInfo;
- (struct OpaqueFigFormatReader { } *)_figFormatReader;
- (long long)defaultAlternateGroupID;
- (id)metadataForFormat:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (void)dealloc;
- (BOOL)isEnabled;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (unsigned int)_figMediaType;
- (id)formatDescriptions;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (float)peakDataRate;
- (int)trackID;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (float)estimatedDataRate;
- (struct CGSize { double x0; double x1; })dimensions;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })uneditedDuration;
- (id)languageCode;
- (id)extendedLanguageTag;
- (BOOL)isSelfContained;
- (id)mediaType;
- (int)decodabilityValidationResult;
- (id)segmentsAsPresented;
- (id)asset;
- (BOOL)hasSeamSamples;
- (int)playabilityValidationResult;
- (BOOL)requiresFrameReordering;
- (long long)alternateGroupID;
- (unsigned long long)hash;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (BOOL)isEqual:(id)a0;
- (id)_segmentsPreferringNominalDurations:(BOOL)a0;
- (BOOL)hasAudioSampleDependencies;
- (id)mediaCharacteristics;

@end
