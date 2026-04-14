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

- (float)nominalFrameRate;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)availableMetadataFormats;
- (id)formatDescriptions;
- (id)metadataForFormat:(id)a0;
- (float)preferredVolume;
- (BOOL)isDecodable;
- (long long)provisionalAlternateGroupID;
- (int)naturalTimeScale;
- (id)commonMetadata;
- (id)segments;
- (id)loudnessInfo;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })naturalSize;
- (unsigned int)_figMediaType;
- (float)peakDataRate;
- (struct OpaqueFigFormatReader { } *)_figFormatReader;
- (struct CGSize { double x0; double x1; })dimensions;
- (id)extendedLanguageTag;
- (float)estimatedDataRate;
- (int)trackID;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (BOOL)hasSeamSamples;
- (BOOL)isSelfContained;
- (id)segmentsAsPresented;
- (long long)totalSampleDataLength;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)playabilityValidationResult;
- (int)decodabilityValidationResult;
- (long long)defaultAlternateGroupID;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (id)languageCode;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })uneditedDuration;
- (BOOL)requiresFrameReordering;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (BOOL)isPlayable;
- (BOOL)isEnabled;
- (long long)layer;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (id)_trackReferences;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (id)asset;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (long long)alternateGroupID;
- (id)mediaType;
- (void)dealloc;
- (id)_segmentsPreferringNominalDurations:(BOOL)a0;
- (BOOL)hasAudioSampleDependencies;
- (id)mediaCharacteristics;

@end
