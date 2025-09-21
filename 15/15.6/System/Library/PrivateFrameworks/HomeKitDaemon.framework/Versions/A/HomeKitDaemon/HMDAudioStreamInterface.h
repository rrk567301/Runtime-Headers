@class NSNumber, NSString, NSHashTable;
@protocol HMDAudioStreamInterfaceDataSource, HMDPHASESharedEngine, HMDAudioStreamInterfaceDelegate, HMDAVCAudioStream, HMDPHASEExternalOutputStreamController;

@interface HMDAudioStreamInterface : HMDStreamInterface <HMDAVCAudioStreamDelegate, HMFLogging>

@property (class, readonly) NSHashTable *mutedStreams;

@property (readonly) id<HMDAVCAudioStream> audioStream;
@property (readonly) id<HMDAudioStreamInterfaceDataSource> dataSource;
@property char streamStarted;
@property unsigned long long audioStreamSetting;
@property (getter=isMuted) char muted;
@property (retain) id<HMDPHASESharedEngine> engine;
@property (retain) id<HMDPHASEExternalOutputStreamController> outputStreamController;
@property (copy) id /* block */ stopStreamCompletionHandler;
@property (readonly, copy) NSNumber *syncSource;
@property (weak) id<HMDAudioStreamInterfaceDelegate> delegate;
@property (readonly) NSNumber *downlinkToken;
@property (readonly) NSNumber *uplinkToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_createAudioStreamWithSessionHandler:(id)a0 localNetworkConfig:(id)a1 localRTPSocket:(int *)a2 sessionID:(id)a3;
+ (int)_createLocalRTPSocketWithRemoteSender:(id)a0 localNetworkConfig:(id)a1;
+ (id)_createLocalStreamAndRTPSocket:(int *)a0 localNetworkConfig:(id)a1 sessionID:(id)a2;
+ (id)_createStreamWithRemoteDestinationReceiver:(id)a0 sessionID:(id)a1;
+ (id)_createStreamWithRemoteSocketReceiver:(id)a0 sessionID:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stream:(id)a0 didPause:(char)a1 error:(id)a2;
- (void)stream:(id)a0 didResume:(char)a1 error:(id)a2;
- (void)stream:(id)a0 didStart:(char)a1 error:(id)a2;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidRTPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;
- (void)streamDidStop:(id)a0;
- (id)logIdentifier;
- (void)stopStream;
- (void)addMutedStream:(id)a0;
- (void)_callPaused:(id)a0;
- (void)_callResumed:(id)a0;
- (void)_callStarted:(id)a0;
- (void)_callStopped:(id)a0;
- (void)_pauseStream;
- (void)_resumeStream;
- (void)_stopStreamWithCompletion:(id /* block */)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 sessionHandler:(id)a3 audioStream:(id)a4 localRTPSocket:(int)a5 dataSource:(id)a6;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 sessionHandler:(id)a3 localNetworkConfig:(id)a4;
- (char)removeMutedStream:(id)a0;
- (void)startPHASEEngineAndController;
- (void)startStreamWithConfig:(id)a0;
- (void)startSynchronizationWithVideoStreamToken:(long long)a0;
- (void)updateAudioSetting:(unsigned long long)a0;
- (void)updateAudioVolume:(id)a0 callback:(id /* block */)a1;

@end
