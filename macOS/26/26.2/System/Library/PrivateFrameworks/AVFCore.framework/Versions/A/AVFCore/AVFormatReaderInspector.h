@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)a0;
- (float)preferredVolume;
- (int)naturalTimeScale;
- (id)commonMetadata;
- (BOOL)isComposable;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)lyrics;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (unsigned long long)hash;
- (long long)firstFragmentSequenceNumber;
- (BOOL)_hasQTSaveRestriction;
- (BOOL)isEqual:(id)a0;
- (BOOL)isReadable;
- (id)alternateTrackGroups;
- (long long)fragmentCount;
- (id)sidecarURL;
- (BOOL)isExportable;
- (BOOL)containsFragments;
- (float)preferredRate;
- (long long)trackCount;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (BOOL)providesPreciseDurationAndTiming;
- (id)trackReferences;
- (float)preferredSoundCheckVolumeNormalization;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (BOOL)canContainFragments;
- (void)dealloc;
- (void)_setFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0;

@end
