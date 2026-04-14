@class NSString, MPModelMediaClip, MPModelGenericObject;

@interface MPCModelMediaClipAVItem : MPAVItem <MPRTCReportingItemSessionCreating> {
    MPModelGenericObject *_modelGenericObject;
}

@property (readonly, nonatomic) MPModelMediaClip *mediaClip;
@property (readonly, nonatomic) long long rtcReportingAssetType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredMediaClipProperties;

- (void).cxx_destruct;
- (BOOL)isStreamable;
- (BOOL)allowsExternalPlayback;
- (id)mainTitle;
- (void)loadAssetAndPlayerItem;
- (double)durationFromExternalMetadata;
- (id)modelGenericObject;
- (BOOL)supportsRateChange;
- (BOOL)isValidPlayerSubstituteForItem:(id)a0;
- (BOOL)isAssetURLValid;
- (void)_applyLoudnessInfo;
- (void)reevaluateType;
- (BOOL)prefersSeekOverSkip;
- (id)rtcReportingServiceIdentifier;
- (BOOL)allowsAirPlayFromCloud;
- (id /* block */)artworkCatalogBlock;
- (BOOL)_allowsCellularPlayback;
- (id)_currentPreferredStaticAsset;
- (BOOL)_isVideoAsset;
- (id)initWithMediaClip:(id)a0;

@end
