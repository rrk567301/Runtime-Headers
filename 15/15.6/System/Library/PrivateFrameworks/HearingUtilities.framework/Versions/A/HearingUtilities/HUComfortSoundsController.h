@class HUComfortSound, NSString, HUComfortSoundsAssetManager, AVAudioSession, AVAudioEngine, AVAudioPlayerNode, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface HUComfortSoundsController : NSObject <HUComfortSoundsAssetManagerDelegate> {
    id /* block */ _mixingBlock;
    id /* block */ _duckingBlock;
    id /* block */ _rampUpBlock;
    id /* block */ _rampDownBlock;
    double _fadeDuration;
    double _duckDuration;
    double _changeDuration;
    double _stepsPerSecond;
    double _stepDuration;
}

@property (retain, nonatomic) AVAudioSession *session;
@property (retain, nonatomic) AVAudioEngine *engine;
@property (retain, nonatomic) AVAudioPlayerNode *audioPlayerNodeA;
@property (retain, nonatomic) AVAudioPlayerNode *audioPlayerNodeB;
@property (retain, nonatomic) AVAudioPlayerNode *currentNode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue;
@property (retain, nonatomic) NSString *routeUID;
@property (nonatomic) char holdingForCall;
@property (nonatomic) char temporaryAirpodsDisconnect;
@property (nonatomic) char liveListenComfortSoundsSwitch;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) HUComfortSound *selectedSound;
@property (retain, nonatomic) HUComfortSoundsAssetManager *assetManager;
@property (nonatomic) double outputGain;
@property (nonatomic) char crossFading;
@property (nonatomic) char changingSounds;
@property (nonatomic) char changePending;
@property (nonatomic) char isScreenBlank;
@property (nonatomic) char isDeviceLockedWithPasscode;
@property (nonatomic) char isInContinuitySession;
@property (nonatomic) int blankScreenToken;
@property (nonatomic) int keybagLockStateToken;
@property (nonatomic) int lockStateNotifyToken;
@property (nonatomic) char systemLogoutInitiated;
@property (nonatomic) char systemLogoutContinued;
@property (nonatomic) char systemLogoutCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (char)isPlaying;
- (void)play;
- (void)registerNotifications;
- (void)mediaServerDied;
- (void)callStatusDidChange:(id)a0;
- (void)updateAnalytics;
- (void)scheduleNewFile;
- (void)activeUseDidChange:(id)a0;
- (void)assetDownloadDidUpdate;
- (void)audioEngineWasInterrupted:(id)a0;
- (void)audioSessionWasInterrupted:(id)a0;
- (void)availableAssetsDidUpdate;
- (void)clearActiveRoute;
- (void)clearEngine;
- (char)currentRouteSupported;
- (void)deviceScreenStatusDidChange:(int)a0 systemLocked:(int)a1;
- (char)hasCurrentCall;
- (char)isPlayingOnQueue;
- (void)mediaPlaybackDidChange:(id)a0;
- (id)nextFileToPlay;
- (void)playOnQueue;
- (id)processComfortSoundsAssetRequest:(id)a0;
- (void)rampNodeVolume:(id)a0 from:(double)a1 to:(double)a2 fadeDuration:(double)a3;
- (void)rampNodeVolume:(id)a0 from:(double)a1 to:(double)a2 fadeDuration:(double)a3 withProgress:(double)a4;
- (void)rampOutputGainFrom:(double)a0 to:(double)a1 withProgress:(double)a2;
- (void)routesDidChange:(id)a0;
- (void)scheduleFile;
- (void)setVolume:(double)a0 forNode:(id)a1 andRamp:(char)a2;
- (void)setupEngine;
- (char)shouldContinuePlayback;
- (void)startComfortSounds;
- (void)stopAndClearRoute:(char)a0;
- (void)stopOnQueueAndClearRoute:(char)a0;
- (void)systemLogoutStatusDidChange:(id)a0;
- (void)updateVolumeForSessionAndRamp:(char)a0;

@end
