@class MSVABTestGenerator, ICEnvironmentMonitor, MPPlaybackUserDefaults;

@interface MPCAudioAssetTypeSelector : NSObject

@property (class, readonly, nonatomic) MPCAudioAssetTypeSelector *sharedSelector;

@property (retain, nonatomic) MPPlaybackUserDefaults *defaults;
@property (retain, nonatomic) ICEnvironmentMonitor *environmentMonitor;
@property (readonly, nonatomic) MSVABTestGenerator *outcomeGenerator;
@property (readonly, nonatomic) BOOL spatialIsAutomatic;
@property (readonly, nonatomic) BOOL prefersSpatialOverLossless;
@property (readonly, nonatomic) BOOL prefersHighResolutionLossless;
@property (readonly, nonatomic) BOOL prefersLossless;
@property (readonly, nonatomic) BOOL prefersHighQualityStereo;
@property (readonly, nonatomic) BOOL prefersLowQualityStereo;
@property (readonly, nonatomic) BOOL networkBandwidthIsHigh;
@property (readonly, nonatomic) BOOL spatialIsAlwaysOn;
@property (readonly, nonatomic) BOOL spatialIsOff;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)environmentDescription;
- (id)initWithPlaybackUsersDefaults:(id)a0 environmentMonitor:(id)a1 probabilityOfProgressiveDownloadAssets:(float)a2;
- (void)updateProbabilityOfProgressiveDownloadAssets:(float)a0;
- (BOOL)userPrefersMultichannelAudioOverStereo:(id)a0;
- (unsigned long long)audioFormatPreference;
- (id)preferredAudioAssetTypeForItem:(id)a0;
- (id)preferredAudioAssetTypeForSongWithTrait:(unsigned long long)a0;
- (id)preferredAudioFormatForAudioFormats:(id)a0 route:(id)a1;
- (id)preferredPlayerAudioFormatForItem:(id)a0 route:(id)a1;
- (id)audioFormatMatchingAudioAssetType:(long long)a0 formats:(id)a1 route:(id)a2;
- (BOOL)prefersSpatialOverStereo:(id)a0;
- (id)descriptionForTraits:(unsigned long long)a0;
- (id)descriptionForTiers:(unsigned long long)a0;
- (id)preferencesDescription;
- (long long)tierMatchingAudioAssetType:(long long)a0;

@end
