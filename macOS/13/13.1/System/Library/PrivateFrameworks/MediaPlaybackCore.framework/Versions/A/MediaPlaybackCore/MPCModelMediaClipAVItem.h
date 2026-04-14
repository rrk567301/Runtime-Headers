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
- (BOOL)supportsRateChange;
- (void)loadAssetAndPlayerItem;
- (BOOL)isValidPlayerSubstituteForItem:(id)a0;
- (BOOL)isAssetURLValid;
- (double)durationFromExternalMetadata;
- (void)_applyLoudnessInfo;
- (void)reevaluateType;
- (BOOL)prefersSeekOverSkip;
- (id)modelGenericObject;
- (id)rtcReportingServiceIdentifier;
- (BOOL)allowsAirPlayFromCloud;
- (id /* block */)artworkCatalogBlock;
- (id)initWithMediaClip:(id)a0;
- (BOOL)_allowsCellularPlayback;
- (id)_currentPreferredStaticAsset;
- (BOOL)_isVideoAsset;

@end
