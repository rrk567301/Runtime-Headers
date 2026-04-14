@class NSURL, NSArray, AVDispatchOnce;

@interface AVFigAssetInspector : AVAssetInspector {
    struct OpaqueFigAsset { } *_figAsset;
    struct OpaqueFigFormatReader { } *_formatReader;
    AVDispatchOnce *_formatReaderOnce;
    AVDispatchOnce *_checkIsStreamingOnce;
    BOOL _isStreaming;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset { } *figAsset;
@property (readonly, nonatomic, getter=_formatReader) struct OpaqueFigFormatReader { } *formatReader;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSArray *figChapterGroupInfo;
@property (readonly, nonatomic) NSArray *figChapters;
@property (readonly, nonatomic) NSURL *resolvedURL;
@property (readonly, nonatomic) NSURL *originalNetworkContentURL;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic, getter=_isStreaming) BOOL streaming;
@property (readonly, nonatomic) unsigned long long downloadToken;
@property (readonly, nonatomic) NSArray *variants;
@property (readonly, nonatomic) NSArray *contentKeySpecifiersEligibleForPreloading;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)creationDate;
- (BOOL)isReadable;
- (float)preferredRate;
- (float)preferredVolume;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (id)availableVideoDynamicRanges;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (struct CGSize { double x0; double x1; })naturalSize;
- (int)naturalTimeScale;
- (BOOL)providesPreciseDurationAndTiming;
- (id)alternateTrackGroups;
- (id)_mediaSelectionGroupDictionaries;
- (id)trackReferences;
- (id)lyrics;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)a0;
- (long long)trackCount;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)canContainFragments;
- (BOOL)containsFragments;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (BOOL)supportsAnalysisReporting;
- (id)_assetAnalysisMessages;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (id)identifyingTagClass;
- (id)identifyingTag;
- (id)_instanceIdentifier;
- (id)SHA1Digest;
- (id)propertyListForProxy;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (BOOL)_hasQTSaveRestriction;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)_nameForProxy;

@end
