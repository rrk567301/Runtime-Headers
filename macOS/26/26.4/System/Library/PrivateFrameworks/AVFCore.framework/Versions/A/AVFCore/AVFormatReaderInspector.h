@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (id)lyrics;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)isComposable;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (id)metadataForFormat:(id)a0;
- (float)preferredVolume;
- (id)trackReferences;
- (float)preferredRate;
- (id)commonMetadata;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (float)preferredSoundCheckVolumeNormalization;
- (BOOL)containsFragments;
- (long long)trackCount;
- (BOOL)_hasQTSaveRestriction;
- (BOOL)isEqual:(id)a0;
- (long long)firstFragmentSequenceNumber;
- (BOOL)isExportable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (BOOL)canContainFragments;
- (id)sidecarURL;
- (unsigned long long)hash;
- (long long)fragmentCount;
- (int)naturalTimeScale;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (void)dealloc;
- (BOOL)isReadable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (BOOL)providesPreciseDurationAndTiming;
- (void)_setFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0;

@end
