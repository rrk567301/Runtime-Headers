@class OS_os_workgroup, NSString;
@protocol PHASESessionInterface;

@interface ATPhasePlatform : NSObject <PHASEPlatform> {
    struct unique_ptr<Phase::ServerManager, std::default_delete<Phase::ServerManager>> { struct __compressed_pair<Phase::ServerManager *, std::default_delete<Phase::ServerManager>> { struct ServerManager *__value_; } __ptr_; } _serverManager;
    id _sessionInterface;
    id _roomCongruenceInterface;
}

@property (readonly, nonatomic) id tapInterface;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) BOOL running;
@property (readonly, nonatomic) unsigned int bufferFrameSize;
@property (readonly, nonatomic) id<PHASESessionInterface> sessionInterface;
@property (readonly, nonatomic) OS_os_workgroup *workgroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)start;
- (BOOL)stop;
- (unsigned int)deviceLatencyInFramesForDirection:(unsigned char)a0;
- (unsigned int)numberOfStreamsForDirection:(unsigned char)a0;
- (id)streamInfoForIndex:(unsigned int)a0 direction:(unsigned char)a1;
- (BOOL)registerIOBlock:(id /* block */)a0;
- (BOOL)registerOverloadNotification:(id /* block */)a0;
- (BOOL)registerRouteChangeNotification:(id /* block */)a0;
- (BOOL)enableIO:(BOOL)a0 direction:(unsigned char)a1;
- (void)registerTapInterface:(id)a0;
- (void *)lazyInitServerManager;
- (id)lazyInitSessionInterface;
- (int)fadeClientsInSession:(unsigned int)a0 activating:(BOOL)a1 fadeLevel:(float)a2 fadeTime:(float)a3;
- (void)activateSession:(unsigned int)a0 activate:(BOOL)a1;
- (void)muteSession:(unsigned int)a0 mute:(BOOL)a1;
- (BOOL)applyVolumeOnVolumeCategory:(id)a0 mode:(id)a1 value:(float)a2;
- (BOOL)applyVolumeOnSession:(unsigned int)a0;
- (BOOL)applyVolumeOnAllSessions;
- (float)volumeScalarMappedToHWCurve:(float)a0;

@end
