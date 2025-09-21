@class MPModelMediaClip, MPModelGenericObject;

@interface MPCModelMediaClipAVItem : MPAVItem {
    MPModelGenericObject *_modelGenericObject;
}

@property (readonly, nonatomic) MPModelMediaClip *mediaClip;

+ (id)requiredMediaClipProperties;

- (id)description;
- (void).cxx_destruct;
- (char)isStreamable;
- (char)allowsExternalPlayback;
- (id)mainTitle;
- (char)isValidPlayerSubstituteForItem:(id)a0;
- (char)isAssetURLValid;
- (void)_applyLoudnessInfo;
- (char)allowsAirPlayFromCloud;
- (id /* block */)artworkCatalogBlock;
- (double)durationFromExternalMetadata;
- (void)loadAssetAndPlayerItemWithTask:(id)a0 completion:(id /* block */)a1;
- (id)modelGenericObject;
- (char)prefersSeekOverSkip;
- (void)reevaluateType;
- (id)rtcReportingServiceIdentifier;
- (char)supportsRateChange;
- (char)_allowsCellularPlayback;
- (id)_currentPreferredStaticAsset;
- (char)_isVideoAsset;
- (id)initWithMediaClip:(id)a0;

@end
