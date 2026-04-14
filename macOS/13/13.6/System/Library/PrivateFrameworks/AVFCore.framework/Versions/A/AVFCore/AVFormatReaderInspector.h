@interface AVFormatReaderInspector : AVAssetInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) struct OpaqueFigFormatReader { } *formatReader;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isReadable;
- (float)preferredVolume;
- (id)trackReferences;
- (BOOL)_hasQTSaveRestriction;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (BOOL)canContainFragments;
- (id)commonMetadata;
- (BOOL)containsFragments;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader { } *)a0;
- (BOOL)isComposable;
- (BOOL)isExportable;
- (id)lyrics;
- (id)metadataForFormat:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (struct CGSize { double x0; double x1; })naturalSize;
- (int)naturalTimeScale;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (BOOL)providesPreciseDurationAndTiming;
- (long long)trackCount;

@end
