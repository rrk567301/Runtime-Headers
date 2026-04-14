@class MPModelMediaClip, MPModelGenericObject;

@interface MPCModelMediaClipAVItem : MPAVItem {
    MPModelGenericObject *_modelGenericObject;
}

@property (readonly, nonatomic) MPModelMediaClip *mediaClip;

+ (id)requiredMediaClipProperties;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isStreamable;
- (BOOL)allowsExternalPlayback;
- (id)mainTitle;
- (BOOL)isAssetURLValid;
- (BOOL)isValidPlayerSubstituteForItem:(id)a0;
- (void)_applyLoudnessInfo;
- (BOOL)allowsAirPlayFromCloud;
- (id /* block */)artworkCatalogBlock;
- (double)durationFromExternalMetadata;
- (void)loadAssetAndPlayerItem;
- (id)modelGenericObject;
- (BOOL)prefersSeekOverSkip;
- (void)reevaluateType;
- (id)rtcReportingServiceIdentifier;
- (BOOL)supportsRateChange;
- (BOOL)_allowsCellularPlayback;
- (id)_currentPreferredStaticAsset;
- (BOOL)_isVideoAsset;
- (id)initWithMediaClip:(id)a0;

@end
