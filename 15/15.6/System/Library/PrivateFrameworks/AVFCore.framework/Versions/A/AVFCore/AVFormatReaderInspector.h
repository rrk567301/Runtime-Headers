@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    char didCheckForSaveRestriction;
    char hasSaveRestriction;
}

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (long long)fragmentCount;
- (char)isReadable;
- (float)preferredVolume;
- (id)trackReferences;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (char)_hasQTSaveRestriction;
- (void)_setFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (char)canContainFragments;
- (id)commonMetadata;
- (char)containsFragments;
- (long long)firstFragmentSequenceNumber;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (char)isComposable;
- (char)isExportable;
- (id)lyrics;
- (id)metadataForFormat:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (struct CGSize { double x0; double x1; })naturalSize;
- (int)naturalTimeScale;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (char)providesPreciseDurationAndTiming;
- (long long)trackCount;

@end
