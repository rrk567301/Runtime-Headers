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

- (struct CGSize { double x0; double x1; })naturalSize;
- (id)segments;
- (float)nominalFrameRate;
- (BOOL)isEnabled;
- (int)trackID;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (id)commonMetadata;
- (id)formatDescriptions;
- (id)metadataForFormat:(id)a0;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (BOOL)isPlayable;
- (float)peakDataRate;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (unsigned int)_figMediaType;
- (float)estimatedDataRate;
- (id)availableMetadataFormats;
- (id)segmentsAsPresented;
- (id)loudnessInfo;
- (id)asset;
- (BOOL)isSelfContained;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })uneditedDuration;
- (id)languageCode;
- (long long)provisionalAlternateGroupID;
- (long long)totalSampleDataLength;
- (id)mediaType;
- (long long)layer;
- (id)_trackReferences;
- (struct OpaqueFigFormatReader { } *)_figFormatReader;
- (id)extendedLanguageTag;
- (int)playabilityValidationResult;
- (int)naturalTimeScale;
- (BOOL)isDecodable;
- (int)decodabilityValidationResult;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (long long)defaultAlternateGroupID;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (void)dealloc;
- (BOOL)requiresFrameReordering;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (struct CGSize { double x0; double x1; })dimensions;
- (BOOL)isEqual:(id)a0;
- (float)preferredVolume;
- (BOOL)hasSeamSamples;
- (unsigned long long)hash;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (long long)alternateGroupID;
- (id)_segmentsPreferringNominalDurations:(BOOL)a0;
- (BOOL)hasAudioSampleDependencies;
- (id)mediaCharacteristics;

@end
