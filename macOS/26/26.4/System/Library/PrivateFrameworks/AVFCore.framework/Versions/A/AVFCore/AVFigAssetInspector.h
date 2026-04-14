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

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (id)lyrics;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (id)uniqueIdentifier;
- (id)metadataForFormat:(id)a0;
- (float)preferredVolume;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (id)trackReferences;
- (BOOL)supportsAnalysisReporting;
- (float)preferredRate;
- (BOOL)isPlayable;
- (id)commonMetadata;
- (BOOL)hasProtectedContentWithoutPropertyString;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)creationDate;
- (id)_customMediaSelectionScheme;
- (float)preferredSoundCheckVolumeNormalization;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)containsFragments;
- (id)availableVideoDynamicRanges;
- (long long)trackCount;
- (id)_nameForProxy;
- (BOOL)_hasQTSaveRestriction;
- (id)_assetAnalysisMessages;
- (id)httpSessionIdentifier;
- (BOOL)isEqual:(id)a0;
- (long long)firstFragmentSequenceNumber;
- (BOOL)isExportable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (id)SHA1Digest;
- (id)identifyingTagClass;
- (BOOL)canContainFragments;
- (id)sidecarURL;
- (unsigned long long)hash;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0 propertyString:(id)a1;
- (long long)fragmentCount;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (id)propertyListForProxy;
- (int)naturalTimeScale;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)identifyingTag;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (void)dealloc;
- (id)_mediaSelectionGroupDictionaries;
- (BOOL)isReadable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (long long)_moovAtomSize;
- (BOOL)providesPreciseDurationAndTiming;

@end
