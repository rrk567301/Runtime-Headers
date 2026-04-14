@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

- (struct CGSize { double x0; double x1; })naturalSize;
- (float)preferredRate;
- (id)lyrics;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (id)commonMetadata;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)metadataForFormat:(id)a0;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (float)preferredSoundCheckVolumeNormalization;
- (id)availableMetadataFormats;
- (BOOL)canContainFragments;
- (BOOL)isComposable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (long long)firstFragmentSequenceNumber;
- (BOOL)_hasQTSaveRestriction;
- (long long)trackCount;
- (int)naturalTimeScale;
- (id)sidecarURL;
- (id)alternateTrackGroups;
- (void)dealloc;
- (long long)fragmentCount;
- (BOOL)isEqual:(id)a0;
- (float)preferredVolume;
- (BOOL)providesPreciseDurationAndTiming;
- (unsigned long long)hash;
- (id)trackReferences;
- (BOOL)containsFragments;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (void)_setFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0;

@end
