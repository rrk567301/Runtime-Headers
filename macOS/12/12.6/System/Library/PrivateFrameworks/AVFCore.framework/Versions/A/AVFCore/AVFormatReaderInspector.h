@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) struct OpaqueFigFormatReader { } *formatReader;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isReadable;
- (float)preferredRate;
- (float)preferredVolume;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (struct CGSize { double x0; double x1; })naturalSize;
- (int)naturalTimeScale;
- (BOOL)providesPreciseDurationAndTiming;
- (id)alternateTrackGroups;
- (id)trackReferences;
- (id)lyrics;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)a0;
- (long long)trackCount;
- (BOOL)isExportable;
- (BOOL)isComposable;
- (BOOL)canContainFragments;
- (BOOL)containsFragments;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (BOOL)_hasQTSaveRestriction;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;

@end
