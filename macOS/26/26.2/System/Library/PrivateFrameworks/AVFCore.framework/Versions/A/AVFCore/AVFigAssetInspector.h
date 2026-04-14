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

- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)availableMetadataFormats;
- (id)uniqueIdentifier;
- (id)metadataForFormat:(id)a0;
- (float)preferredVolume;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0 propertyString:(id)a1;
- (int)naturalTimeScale;
- (id)commonMetadata;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (BOOL)isComposable;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)isCompatibleWithAirPlayVideo;
- (id)lyrics;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (id)creationDate;
- (unsigned long long)hash;
- (long long)firstFragmentSequenceNumber;
- (id)_assetAnalysisMessages;
- (BOOL)_hasQTSaveRestriction;
- (BOOL)isEqual:(id)a0;
- (BOOL)isReadable;
- (long long)_moovAtomSize;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (id)alternateTrackGroups;
- (long long)fragmentCount;
- (id)identifyingTagClass;
- (id)availableVideoDynamicRanges;
- (id)sidecarURL;
- (id)_customMediaSelectionScheme;
- (id)SHA1Digest;
- (id)_nameForProxy;
- (BOOL)isExportable;
- (BOOL)containsFragments;
- (BOOL)isPlayable;
- (float)preferredRate;
- (BOOL)supportsAnalysisReporting;
- (id)propertyListForProxy;
- (long long)trackCount;
- (id)_mediaSelectionGroupDictionaries;
- (id)identifyingTag;
- (BOOL)hasProtectedContentWithoutPropertyString;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (BOOL)providesPreciseDurationAndTiming;
- (id)trackReferences;
- (float)preferredSoundCheckVolumeNormalization;
- (id)httpSessionIdentifier;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)canContainFragments;
- (void)dealloc;

@end
