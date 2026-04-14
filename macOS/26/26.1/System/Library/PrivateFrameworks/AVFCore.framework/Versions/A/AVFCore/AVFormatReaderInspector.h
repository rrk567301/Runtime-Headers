@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

- (id)metadataForFormat:(id)a0;
- (BOOL)isComposable;
- (id)lyrics;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)availableMetadataFormats;
- (id)trackReferences;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (id)sidecarURL;
- (id)commonMetadata;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (unsigned long long)hash;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (id)alternateTrackGroups;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (BOOL)_hasQTSaveRestriction;
- (float)preferredSoundCheckVolumeNormalization;
- (void)dealloc;
- (BOOL)canContainFragments;
- (long long)trackCount;
- (BOOL)isExportable;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)providesPreciseDurationAndTiming;
- (float)preferredRate;
- (int)naturalTimeScale;
- (long long)fragmentCount;
- (BOOL)isEqual:(id)a0;
- (float)preferredVolume;
- (long long)firstFragmentSequenceNumber;
- (BOOL)isReadable;
- (BOOL)containsFragments;
- (void)_setFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0;

@end
