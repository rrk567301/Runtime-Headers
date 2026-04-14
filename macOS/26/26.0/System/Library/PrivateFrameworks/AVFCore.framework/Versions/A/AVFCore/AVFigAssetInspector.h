@class NSURL, NSArray, AVDispatchOnce;

@interface AVFigAssetInspector : AVAssetInspector {
    struct OpaqueFigAsset { } *_figAsset;
    AVDispatchOnce *_checkIsStreamingOnce;
    BOOL _isStreaming;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset { } *figAsset;
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

- (BOOL)isCompatibleWithAirPlayVideo;
- (float)preferredVolume;
- (id)commonMetadata;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)lyrics;
- (long long)_moovAtomSize;
- (BOOL)isComposable;
- (BOOL)canContainFragments;
- (float)preferredRate;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0 propertyString:(id)a1;
- (int)naturalTimeScale;
- (id)availableMetadataFormats;
- (id)_customMediaSelectionScheme;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)metadataForFormat:(id)a0;
- (id)_nameForProxy;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (void)dealloc;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)SHA1Digest;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (float)preferredSoundCheckVolumeNormalization;
- (id)sidecarURL;
- (BOOL)hasProtectedContentWithoutPropertyString;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)alternateTrackGroups;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (id)httpSessionIdentifier;
- (BOOL)supportsAnalysisReporting;
- (BOOL)providesPreciseDurationAndTiming;
- (id)propertyListForProxy;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (BOOL)isReadable;
- (id)creationDate;
- (id)availableVideoDynamicRanges;
- (id)identifyingTagClass;
- (long long)trackCount;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (id)_mediaSelectionGroupDictionaries;
- (id)_assetAnalysisMessages;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)_hasQTSaveRestriction;
- (id)uniqueIdentifier;
- (unsigned long long)hash;
- (id)identifyingTag;
- (BOOL)isEqual:(id)a0;
- (id)trackReferences;
- (BOOL)containsFragments;

@end
