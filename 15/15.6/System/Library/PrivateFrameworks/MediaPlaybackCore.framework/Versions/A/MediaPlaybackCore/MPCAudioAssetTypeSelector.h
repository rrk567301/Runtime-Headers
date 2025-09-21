@class MSVABTestGenerator, MSVTrialExperiment, MPCPlaybackEngine, ICEnvironmentMonitor, MPPlaybackUserDefaults;

@interface MPCAudioAssetTypeSelector : NSObject

@property (retain, nonatomic) MPPlaybackUserDefaults *defaults;
@property (retain, nonatomic) ICEnvironmentMonitor *environmentMonitor;
@property (readonly, nonatomic) MSVABTestGenerator *outcomeGenerator;
@property (readonly, nonatomic) char spatialIsAutomatic;
@property (readonly, nonatomic) char prefersSpatialOverLossless;
@property (readonly, nonatomic) char prefersHighResolutionLossless;
@property (readonly, nonatomic) char prefersLossless;
@property (readonly, nonatomic) char prefersHighQualityStereo;
@property (readonly, nonatomic) char prefersLowQualityStereo;
@property (readonly, nonatomic) char networkBandwidthIsHigh;
@property (retain, nonatomic) MSVTrialExperiment *trialExperiment;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly, nonatomic) char spatialIsAlwaysOn;
@property (readonly, nonatomic) char spatialIsOff;
@property (readonly, nonatomic) long long maxResolution;
@property (readonly, nonatomic) long long spatialPreference;

- (id)description;
- (void).cxx_destruct;
- (id)environmentDescription;
- (id)preferredAudioAssetTypeForItem:(id)a0;
- (id)audioFormatMatchingAudioAssetType:(long long)a0 formats:(id)a1 route:(id)a2;
- (unsigned long long)audioFormatPreference;
- (id)descriptionForTiers:(unsigned long long)a0;
- (id)descriptionForTraits:(unsigned long long)a0;
- (id)experimentDescription;
- (void)handleExperimentDidReceiveUpdateNotification:(id)a0;
- (id)initWithPlaybackEngine:(id)a0;
- (id)initWithPlaybackEngine:(id)a0 userDefaults:(id)a1 environmentMonitor:(id)a2;
- (long long)nextAssetTypeOutcomeWithIsStartItem:(char)a0;
- (id)preferencesDescription;
- (id)preferredAudioAssetTypeForSongWithTrait:(unsigned long long)a0 isStartItem:(char)a1;
- (id)preferredAudioAssetTypeForSongWithTrait:(unsigned long long)a0 isStartItem:(char)a1 supportsVocalAttenuation:(char)a2;
- (id)preferredAudioFormatForAudioFormats:(id)a0 route:(id)a1;
- (id)preferredPlayerAudioFormatForItem:(id)a0 route:(id)a1;
- (char)prefersSpatialOverStereo:(id)a0;
- (long long)tierMatchingAudioAssetType:(long long)a0;
- (void)updateOutcomeGenerator;
- (void)updateProbabilityOfProgressiveDownloadAssets:(float)a0;
- (char)userPrefersMultichannelAudioOverStereo:(id)a0;

@end
