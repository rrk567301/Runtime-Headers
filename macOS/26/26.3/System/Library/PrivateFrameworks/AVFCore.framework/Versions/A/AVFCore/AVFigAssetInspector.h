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

- (struct CGSize { double x0; double x1; })naturalSize;
- (float)preferredRate;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (id)lyrics;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (id)commonMetadata;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)metadataForFormat:(id)a0;
- (id)uniqueIdentifier;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (BOOL)isPlayable;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (float)preferredSoundCheckVolumeNormalization;
- (id)availableMetadataFormats;
- (BOOL)canContainFragments;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)httpSessionIdentifier;
- (BOOL)isComposable;
- (id)_mediaSelectionGroupDictionaries;
- (id)_assetAnalysisMessages;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (long long)firstFragmentSequenceNumber;
- (id)propertyListForProxy;
- (BOOL)_hasQTSaveRestriction;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (long long)trackCount;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0 propertyString:(id)a1;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (id)_customMediaSelectionScheme;
- (long long)_moovAtomSize;
- (int)naturalTimeScale;
- (id)sidecarURL;
- (id)identifyingTagClass;
- (id)alternateTrackGroups;
- (id)availableVideoDynamicRanges;
- (void)dealloc;
- (BOOL)isCompatibleWithAirPlayVideo;
- (long long)fragmentCount;
- (id)SHA1Digest;
- (BOOL)isEqual:(id)a0;
- (id)_nameForProxy;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (float)preferredVolume;
- (BOOL)providesPreciseDurationAndTiming;
- (BOOL)hasProtectedContentWithoutPropertyString;
- (id)identifyingTag;
- (unsigned long long)hash;
- (BOOL)supportsAnalysisReporting;
- (id)creationDate;
- (id)trackReferences;
- (BOOL)containsFragments;
- (BOOL)isExportable;
- (BOOL)isReadable;

@end
