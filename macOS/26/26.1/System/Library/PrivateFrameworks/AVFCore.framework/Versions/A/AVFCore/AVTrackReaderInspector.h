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

- (id)metadataForFormat:(id)a0;
- (BOOL)isPlayable;
- (BOOL)isDecodable;
- (unsigned int)_figMediaType;
- (float)peakDataRate;
- (struct CGSize { double x0; double x1; })naturalSize;
- (int)trackID;
- (id)segments;
- (id)availableMetadataFormats;
- (float)nominalFrameRate;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (id)commonMetadata;
- (id)asset;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })dimensions;
- (int)decodabilityValidationResult;
- (id)extendedLanguageTag;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (BOOL)hasSeamSamples;
- (long long)layer;
- (long long)alternateGroupID;
- (float)estimatedDataRate;
- (unsigned long long)hash;
- (id)formatDescriptions;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (BOOL)requiresFrameReordering;
- (id)languageCode;
- (id)loudnessInfo;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (BOOL)isSelfContained;
- (BOOL)isEnabled;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })uneditedDuration;
- (long long)defaultAlternateGroupID;
- (struct OpaqueFigFormatReader { } *)_figFormatReader;
- (id)segmentsAsPresented;
- (void)dealloc;
- (int)playabilityValidationResult;
- (id)mediaType;
- (long long)totalSampleDataLength;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)_trackReferences;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (int)naturalTimeScale;
- (long long)provisionalAlternateGroupID;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (float)preferredVolume;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (id)_segmentsPreferringNominalDurations:(BOOL)a0;
- (BOOL)hasAudioSampleDependencies;
- (id)mediaCharacteristics;

@end
