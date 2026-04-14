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

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (long long)layer;
- (BOOL)isDecodable;
- (struct CGSize { double x0; double x1; })naturalSize;
- (struct CGSize { double x0; double x1; })dimensions;
- (id)metadataForFormat:(id)a0;
- (float)preferredVolume;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (float)nominalFrameRate;
- (BOOL)isSelfContained;
- (int)trackID;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (BOOL)isPlayable;
- (int)playabilityValidationResult;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (BOOL)hasSeamSamples;
- (id)formatDescriptions;
- (id)mediaType;
- (id)segments;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (long long)totalSampleDataLength;
- (long long)provisionalAlternateGroupID;
- (float)estimatedDataRate;
- (BOOL)isEqual:(id)a0;
- (id)segmentsAsPresented;
- (long long)defaultAlternateGroupID;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (id)loudnessInfo;
- (BOOL)isEnabled;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (unsigned long long)hash;
- (id)_trackReferences;
- (int)decodabilityValidationResult;
- (unsigned int)_figMediaType;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })uneditedDuration;
- (id)asset;
- (id)extendedLanguageTag;
- (float)peakDataRate;
- (BOOL)requiresFrameReordering;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (int)naturalTimeScale;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (long long)alternateGroupID;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (void)dealloc;
- (id)languageCode;
- (struct OpaqueFigFormatReader { } *)_figFormatReader;
- (id)_segmentsPreferringNominalDurations:(BOOL)a0;
- (BOOL)hasAudioSampleDependencies;
- (id)mediaCharacteristics;

@end
