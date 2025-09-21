@class NSString, AFSettingsConnection, AFInstanceContext, AFMyriadInstrumentation, NSObject, AFPreferences;
@protocol OS_dispatch_queue;

@interface AFMyriadGoodnessScoreEvaluator : NSObject <AFSettingsDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _scoreEvaluationLock;
    unsigned char _myriadPlatformBias;
    unsigned char _mediaPlaybackBoost;
    char _isRecentSiriBoostTrialEnabled;
    char _isExponentialBoostDefined;
    double _recentSiriSecondDegreeCoefficient;
    double _recentSiriFirstDegreeCoefficient;
    double _recentSiriIntercept;
    AFInstanceContext *_deviceInstanceContext;
    unsigned long long _platformBiasAcquisitionState;
    AFPreferences *_pref;
    AFSettingsConnection *_settingsConnection;
    AFMyriadInstrumentation *_myriadInstrumentation;
    char _isSpeakerEndpoint;
    NSString *_endpointModelName;
}

@property (readonly, nonatomic) char evaluateForAudioAccessory;
@property (nonatomic) double lastActivationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)preheat;
- (unsigned char)getPlatformBias;
- (unsigned char)_bumpGoodnessScore:(id)a0 lastActivationTime:(double)a1 mediaPlaybackInterruptedTime:(double)a2 ignoreAdjustedBoost:(char)a3 recentlyWonBySmallAmount:(char)a4;
- (id)_createSettingsConnectionIfRequired;
- (void)_fetchDevicePlatformBiasIfRequired;
- (unsigned long long)_findSidekickBoost:(id)a0 isSpeaker:(char)a1 model:(id)a2;
- (unsigned char)_getRecentBump:(double)a0 ignoreAdjustedBoost:(char)a1 recentlyWonBySmallAmount:(char)a2;
- (id)_readSidekickBoostsFile:(id)a0;
- (void)_reloadTrialConfiguredBoostValues;
- (void)_setSidekickPlatformBiasForSpeaker:(char)a0 model:(id)a1;
- (void)_settingsConnectionDidDisconnect;
- (void)_updateMediaPlaybackBoost:(unsigned char)a0;
- (void)_updatePlatformBias:(unsigned char)a0;
- (void)_updateRecentSiriBoostTrialEnabled:(char)a0;
- (void)_updateRecentSiriExponentialBoostDefined:(char)a0 withSecondDegree:(double)a1 andFirstDegree:(double)a2 andIntercept:(double)a3;
- (void)_updateSidekickBoosts:(id)a0;
- (unsigned char)getMyriadAdjustedBoostForGoodnessScoreContext:(id)a0;
- (id)initWithDeviceInstanceContext:(id)a0 preferences:(id)a1 queue:(id)a2;
- (id)initWithDeviceInstanceContext:(id)a0 preferences:(id)a1 queue:(id)a2 instrumentation:(id)a3;
- (id)initWithDeviceInstanceContext:(id)a0 queue:(id)a1;
- (void)myriadTrialBoostsUpdated:(id)a0;

@end
