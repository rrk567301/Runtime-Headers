@class NSNumber, NSString, NSDictionary, ACAccount, MPPlaybackEQSetting;

@interface MPPlaybackUserDefaults : NSObject {
    void /* unknown type, empty encoding */ _lastKnownPrivateListeningValue;
}

@property (class, nonatomic, readonly) MPPlaybackUserDefaults *standardUserDefaults;

@property (nonatomic, readonly) ACAccount *activeAccount;
@property (nonatomic, readonly) MPPlaybackEQSetting *musicEQSetting;
@property (nonatomic) long long musicRepeatType;
@property (nonatomic) long long musicShuffleType;
@property (nonatomic) BOOL soundCheckEnabled;
@property (nonatomic) BOOL crossFadeEnabled;
@property (nonatomic) double crossFadeDuration;
@property (nonatomic) long long transitionStyle;
@property (nonatomic) BOOL transitionsEnabled;
@property (nonatomic) float playbackRate;
@property (nonatomic, retain) NSNumber *privateListeningEnabled;
@property (nonatomic, retain) NSNumber *devicePrivateListeningEnabled;
@property (nonatomic, retain) NSNumber *focusModePrivateListeningEnabled;
@property (nonatomic) long long preferredMusicLowBandwidthResolution;
@property (nonatomic) long long preferredMusicHighBandwidthResolution;
@property (nonatomic) long long preferredVideoLowBandwidthResolution;
@property (nonatomic) long long preferredVideoHighBandwidthResolution;
@property (nonatomic) long long spatialAudioPreference;
@property (nonatomic) float defaultVocalLevel;
@property (nonatomic) float minVocalLevel;
@property (nonatomic, readonly) BOOL prefersAtmosHDMIPassthrough;
@property (nonatomic, readonly) BOOL allowScreenRecording;
@property (nonatomic, readonly) BOOL disableAssetCaching;
@property (nonatomic, readonly) BOOL disableHLSAssetCaching;
@property (nonatomic, readonly) NSNumber *progressiveDownloadAssetRatio;
@property (nonatomic, readonly) BOOL disableAudioAnalysis;
@property (nonatomic, readonly) BOOL disableAudioProcessing;
@property (nonatomic, readonly) BOOL disablePeriodicStateRestore;
@property (nonatomic, readonly) BOOL disableQHO;
@property (nonatomic, readonly) long long audioAnalysisRefreshRate;
@property (nonatomic, readonly) double activationDelay;
@property (nonatomic, readonly) double forwardBufferDuration;
@property (nonatomic, readonly) BOOL prerollEnabled;
@property (nonatomic, readonly) BOOL archiveSessionArtwork;
@property (nonatomic, readonly) NSNumber *forcedIntentDestination;
@property (nonatomic, readonly) NSNumber *delayQueueLoadDuration;
@property (nonatomic, readonly) NSNumber *delayAssetLoadDuration;
@property (nonatomic, readonly) double unloadingPlaybackAssetsOnIdleDuration;
@property (nonatomic, readonly) long long artworkCacheLimit;
@property (nonatomic, readonly) long long exportableArtworkCacheLimit;
@property (nonatomic, readonly) BOOL disableStateRestoration;
@property (nonatomic, readonly) BOOL showDebugUI;
@property (nonatomic, readonly) BOOL enableProcessTap;
@property (nonatomic, readonly) BOOL disableMiniSINF;
@property (nonatomic, readonly) BOOL forceLibrarySupplementalContexts;
@property (nonatomic, readonly) long long maximumQueueHandOffSize;
@property (nonatomic, readonly) double assetURLExpirationDuration;
@property (nonatomic, readonly) BOOL shouldPurgeSideLoadedVocalAttenuationModels;
@property (nonatomic, readonly) BOOL shouldRecordVocalAttenuationStatistics;
@property (nonatomic, readonly) NSString *vocalAttenuationStatisticsName;
@property (nonatomic, readonly) BOOL shouldBypassVocalAttenuationDenoising;
@property (nonatomic, readonly) BOOL shouldBypassVocalAttenuationSupportFlag;
@property (nonatomic, readonly) BOOL shouldUseRemoteVocalAttenuationModel;
@property (nonatomic, readonly) BOOL shouldUseSideLoadedVocalAttenuationModel;
@property (nonatomic, readonly) float audioTapTimeOutRatioForFailureDetection;
@property (nonatomic, readonly) double vocalAttenuationGracePeriodAfterPause;
@property (nonatomic, readonly) BOOL vocalAttenuationLogInputAndOuputRMSValues;
@property (nonatomic, readonly) BOOL forceDisableUpNext;
@property (nonatomic, readonly) BOOL ignoreDisableUpNext;
@property (nonatomic, readonly) double HomePodPFSQForcedLeaseRenewThreshold;
@property (nonatomic, readonly) NSDictionary *rewrittenAssetInfo;
@property (nonatomic, readonly) BOOL sonicHijack;
@property (nonatomic, readonly) BOOL shouldSkipNextStateRestoration;

- (id)init;
- (void)monitoredAccountStore:(id)a0 didUpdateAccount:(id)a1;
- (void).cxx_destruct;
- (BOOL)autoPlayEnabledForUserIdentity:(id)a0;
- (id)isDevicePrivateListeningEnabled;
- (BOOL)areTransitionsEnabled;
- (BOOL)areTransitionsEnabledForUserWithCatalogPlaybackCapability:(BOOL)a0;
- (void)clearShouldSkipNextStateRestoration;
- (BOOL)isCrossFadeEnabled;
- (id)isFocusModePrivateListeningEnabled;
- (id)isPrivateListeningEnabled;
- (void)resetAllInternalSettings;
- (void)setAutoPlayEnabled:(BOOL)a0 forUserIdentity:(id)a1;
- (long long)transitionStyleForUserWithCatalogPlaybackCapability:(BOOL)a0;

@end
