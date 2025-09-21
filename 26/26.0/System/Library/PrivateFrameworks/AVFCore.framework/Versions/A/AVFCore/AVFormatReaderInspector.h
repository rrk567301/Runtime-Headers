@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

- (float)preferredVolume;
- (id)commonMetadata;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)lyrics;
- (BOOL)isComposable;
- (BOOL)canContainFragments;
- (float)preferredRate;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (int)naturalTimeScale;
- (id)availableMetadataFormats;
- (BOOL)isExportable;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)metadataForFormat:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (void)dealloc;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (float)preferredSoundCheckVolumeNormalization;
- (id)sidecarURL;
- (id)alternateTrackGroups;
- (BOOL)providesPreciseDurationAndTiming;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (BOOL)isReadable;
- (long long)trackCount;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)_hasQTSaveRestriction;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)trackReferences;
- (BOOL)containsFragments;
- (void)_setFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0;

@end
