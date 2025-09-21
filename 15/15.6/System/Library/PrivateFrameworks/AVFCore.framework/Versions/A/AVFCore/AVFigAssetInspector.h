@class NSURL, NSArray, AVDispatchOnce;

@interface AVFigAssetInspector : AVAssetInspector {
    struct OpaqueFigAsset { } *_figAsset;
    AVDispatchOnce *_checkIsStreamingOnce;
    char _isStreaming;
    char didCheckForSaveRestriction;
    char hasSaveRestriction;
}

@property (readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset { } *figAsset;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSArray *figChapterGroupInfo;
@property (readonly, nonatomic) NSArray *figChapters;
@property (readonly, nonatomic) NSURL *resolvedURL;
@property (readonly, nonatomic) NSURL *originalNetworkContentURL;
@property (readonly, nonatomic) char hasProtectedContent;
@property (readonly, nonatomic, getter=_isStreaming) char streaming;
@property (readonly, nonatomic) unsigned long long downloadToken;
@property (readonly, nonatomic) NSArray *variants;
@property (readonly, nonatomic) NSArray *contentKeySpecifiersEligibleForPreloading;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)creationDate;
- (long long)fragmentCount;
- (char)isReadable;
- (id)SHA1Digest;
- (float)preferredVolume;
- (id)trackReferences;
- (id)_assetAnalysisMessages;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (char)_hasQTSaveRestriction;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)_mediaSelectionGroupDictionaries;
- (long long)_moovAtomSize;
- (id)_nameForProxy;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (id)availableVideoDynamicRanges;
- (char)canContainFragments;
- (id)commonMetadata;
- (char)containsFragments;
- (long long)firstFragmentSequenceNumber;
- (id)httpSessionIdentifier;
- (id)identifyingTag;
- (id)identifyingTagClass;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (char)isCompatibleWithAirPlayVideo;
- (char)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (char)isCompatibleWithSavedPhotosAlbum;
- (char)isComposable;
- (char)isExportable;
- (char)isPlayable;
- (id)lyrics;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (id)metadataForFormat:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (struct CGSize { double x0; double x1; })naturalSize;
- (int)naturalTimeScale;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (id)propertyListForProxy;
- (char)providesPreciseDurationAndTiming;
- (char)supportsAnalysisReporting;
- (long long)trackCount;

@end
