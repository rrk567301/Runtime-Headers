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

- (id)metadataForFormat:(id)a0;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isPlayable;
- (BOOL)isComposable;
- (id)lyrics;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)availableMetadataFormats;
- (id)trackReferences;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (id)sidecarURL;
- (id)commonMetadata;
- (id)identifyingTagClass;
- (id)creationDate;
- (BOOL)hasProtectedContentWithoutPropertyString;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (id)httpSessionIdentifier;
- (unsigned long long)hash;
- (id)_assetAnalysisMessages;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0 propertyString:(id)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (id)alternateTrackGroups;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (id)_nameForProxy;
- (id)_mediaSelectionGroupDictionaries;
- (id)identifyingTag;
- (id)uniqueIdentifier;
- (BOOL)_hasQTSaveRestriction;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (float)preferredSoundCheckVolumeNormalization;
- (id)_customMediaSelectionScheme;
- (void)dealloc;
- (BOOL)canContainFragments;
- (long long)trackCount;
- (id)propertyListForProxy;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (long long)_moovAtomSize;
- (BOOL)isExportable;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)providesPreciseDurationAndTiming;
- (float)preferredRate;
- (BOOL)supportsAnalysisReporting;
- (int)naturalTimeScale;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (long long)fragmentCount;
- (BOOL)isEqual:(id)a0;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (float)preferredVolume;
- (long long)firstFragmentSequenceNumber;
- (id)availableVideoDynamicRanges;
- (id)SHA1Digest;
- (BOOL)isReadable;
- (BOOL)containsFragments;

@end
