@class MPCPlaybackIntent, _MPCPlaybackAccountManager, _MPCMediaRemotePublisher, NSString, _MPCReportingController, MPCPlayerPath, MPProtocolProxy, MPCAudioSpectrumAnalyzer, _MPCMusicPlayerControllerServer, _MPCLeaseManager, NSXPCListenerEndpoint, _MPCPlaybackEngineSessionManager, MPCPlaybackEngineEventStream, _MPCFairPlayPerformanceController;
@protocol MPCPlaybackEngineInitializationParameters, MPCPlaybackEngineEventObserving, MPCPlaybackEngineDelegate, MPCVideoOutput, MPCPlaybackEngineImplementation;

@interface MPCPlaybackEngine : NSObject <MPCExplicitContentAuthorizationDelegate>

@property (class, readonly, nonatomic) BOOL requiresMainThread;

@property (nonatomic, getter=hasScheduledPlaybackStatePreservation) BOOL scheduledPlaybackStatePreservation;
@property (nonatomic) BOOL needsUISnapshot;
@property (readonly, nonatomic) MPProtocolProxy<MPCPlaybackEngineEventObserving> *eventObserver;
@property (readonly, nonatomic) id<MPCPlaybackEngineImplementation> implementation;
@property (readonly, nonatomic) _MPCMediaRemotePublisher *mediaRemotePublisher;
@property (readonly, nonatomic) _MPCMusicPlayerControllerServer *musicPlayerControllerServer;
@property (readonly, nonatomic) _MPCReportingController *reportingController;
@property (readonly, nonatomic) _MPCPlaybackEngineSessionManager *sessionManager;
@property (readonly, nonatomic) _MPCLeaseManager *leaseManager;
@property (readonly, nonatomic) _MPCPlaybackAccountManager *accountManager;
@property (readonly, nonatomic) _MPCFairPlayPerformanceController *fairPlayPerformanceController;
@property (readonly, nonatomic) id<MPCVideoOutput> videoOutput;
@property (readonly, nonatomic) id<MPCPlaybackEngineInitializationParameters> initializationParameters;
@property (nonatomic, getter=isSystemMusicApplication) BOOL systemMusicApplication;
@property (copy, nonatomic) NSString *audioSessionCategory;
@property (nonatomic) unsigned long long audioSessionOptions;
@property (nonatomic, getter=isAudioAnalyzerEnabled) BOOL audioAnalyzerEnabled;
@property (readonly, nonatomic) MPCAudioSpectrumAnalyzer *audioAnalyzer;
@property (readonly, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (readonly, nonatomic) MPCPlayerPath *playerPath;
@property (readonly, nonatomic) NSXPCListenerEndpoint *serverEndpoint;
@property (readonly, copy, nonatomic) NSString *playerID;
@property (readonly, copy, nonatomic) NSString *engineID;
@property (weak, nonatomic) id<MPCPlaybackEngineDelegate> delegate;
@property (readonly, nonatomic, getter=isStarted) BOOL started;
@property (nonatomic, getter=isPictureInPictureSupported) BOOL pictureInPictureSupported;
@property (nonatomic, getter=isVideoSupported) BOOL videoSupported;
@property (retain, nonatomic) MPCPlaybackIntent *fallbackPlaybackIntent;
@property (nonatomic, getter=isStateRestorationSupported) BOOL stateRestorationSupported;
@property (nonatomic, getter=isQueueHandoffSupported) BOOL queueHandoffSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preheatPlayback;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)start;
- (id)initWithParameters:(id)a0;
- (void)becomeActive;
- (id)initWithPlayerID:(id)a0;
- (void)reportUserBackgroundedApplication;
- (void)requestAuthorizationForExplicitItem:(id)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)restoreStateWithCompletion:(id /* block */)a0;
- (void)addEngineObserver:(id)a0;
- (void)removeEngineObserver:(id)a0;
- (void)reportUserSeekFromTime:(double)a0 toTime:(double)a1;
- (void)schedulePlaybackStatePreservation;
- (void)_detectCrashLoopForSessionIdentifier:(id)a0 block:(id /* block */)a1;
- (void)_initializePlaybackStack;
- (BOOL)_shouldIgnorePlaybackSessionError:(id)a0;
- (void)_updateUISnapshotIfNeeded;

@end
