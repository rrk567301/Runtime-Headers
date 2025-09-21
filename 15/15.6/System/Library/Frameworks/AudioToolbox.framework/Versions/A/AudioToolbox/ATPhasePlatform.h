@class OS_os_workgroup, NSString;
@protocol PHASERoomCongruenceInterface, PHASESessionInterface;

@interface ATPhasePlatform : NSObject <PHASEPlatform> {
    struct unique_ptr<Phase::ServerManager, std::default_delete<Phase::ServerManager>> { struct __compressed_pair<Phase::ServerManager *, std::default_delete<Phase::ServerManager>> { struct ServerManager *__value_; } __ptr_; } _serverManager;
    id _sessionInterface;
    id _roomCongruenceInterface;
}

@property (readonly, nonatomic) id tapInterface;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) char running;
@property (readonly, nonatomic) unsigned int bufferFrameSize;
@property (readonly, nonatomic) id<PHASESessionInterface> sessionInterface;
@property (readonly, nonatomic) id<PHASERoomCongruenceInterface> roomCongruenceInterface;
@property (readonly, nonatomic) OS_os_workgroup *workgroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (char)start;
- (char)stop;
- (int)muteSessionInput:(unsigned int)a0 mute:(char)a1 fadeTime:(float)a2;
- (id)lazyInitRoomCongruenceInterface;
- (void)activateSession:(unsigned int)a0 activate:(char)a1;
- (char)applyVolumeOnAllSessions;
- (char)applyVolumeOnSession:(unsigned int)a0;
- (char)applyVolumeOnVolumeCategory:(id)a0 mode:(id)a1 value:(float)a2;
- (unsigned int)deviceLatencyInFramesForDirection:(unsigned char)a0;
- (char)enableIO:(char)a0 direction:(unsigned char)a1;
- (int)fadeClientsInSession:(unsigned int)a0 activating:(char)a1 fadeLevel:(float)a2 fadeTime:(float)a3;
- (void *)lazyInitServerManager;
- (id)lazyInitSessionInterface;
- (int)muteAudioSessionBidirectional:(unsigned int)a0 mute:(char)a1 inputFadeTime:(float)a2 outputFadeTime:(float)a3;
- (unsigned int)numberOfStreamsForDirection:(unsigned char)a0;
- (void)refreshInputMuteOnAllSessions:(float)a0;
- (char)registerIOBlock:(id /* block */)a0;
- (char)registerOverloadNotification:(id /* block */)a0;
- (char)registerRouteChangeNotification:(id /* block */)a0;
- (void)registerTapInterface:(id)a0;
- (id)streamInfoForIndex:(unsigned int)a0 direction:(unsigned char)a1;
- (float)volumeScalarMappedToHWCurve:(float)a0;

@end
