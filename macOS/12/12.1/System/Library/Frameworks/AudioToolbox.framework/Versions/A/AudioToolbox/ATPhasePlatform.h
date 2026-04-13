@class NSString;
@protocol PHASESessionInterface;

@interface ATPhasePlatform : NSObject <PHASEPlatform> {
    struct unique_ptr<Phase::ServerManager, std::default_delete<Phase::ServerManager>> { struct __compressed_pair<Phase::ServerManager *, std::default_delete<Phase::ServerManager>> { struct ServerManager *__value_; } __ptr_; } _serverManager;
    id _sessionInterface;
}

@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) BOOL running;
@property (readonly, nonatomic) unsigned int bufferFrameSize;
@property (readonly, nonatomic) id<PHASESessionInterface> sessionInterface;
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
- (BOOL)enableIO:(BOOL)a0 direction:(unsigned char)a1;
- (unsigned int)deviceLatencyInFramesForDirection:(unsigned char)a0;
- (unsigned int)numberOfStreamsForDirection:(unsigned char)a0;
- (id)streamInfoForIndex:(unsigned int)a0 direction:(unsigned char)a1;
- (BOOL)registerIOBlock:(id /* block */)a0;
- (BOOL)registerOverloadNotification:(id /* block */)a0;
- (BOOL)registerRouteChangeNotification:(id /* block */)a0;
- (void *)lazyInitServerManager;
- (id)lazyInitSessionInterface;

@end
