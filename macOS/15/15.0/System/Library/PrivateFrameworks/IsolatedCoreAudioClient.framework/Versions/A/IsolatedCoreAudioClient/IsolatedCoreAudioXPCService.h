@class NSString, NSMutableSet;

@interface IsolatedCoreAudioXPCService : NSObject <IsolatedCoreAudioServerProtocol, NSXPCListenerDelegate>

@property (nonatomic) struct shared_ptr<ServerSideAudioSwitchboard> { struct ServerSideAudioSwitchboard *__ptr_; struct __shared_weak_count *__cntrl_; } mServerSideSwitchboard;
@property (retain, nonatomic) NSMutableSet *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (void)checkInForIsolatedAudioSharedResources:(unsigned int)a0 with:(id /* block */)a1;
- (void)checkOutForIsolatedAudioSharedResources:(unsigned int)a0;
- (void)getWorkgroupForIsolatedAudio:(unsigned int)a0 with:(id /* block */)a1;
- (void)startIsolatedAudioForUseCase:(unsigned int)a0 atTime:(unsigned long long)a1 with:(id /* block */)a2;
- (void)startIsolatedAudioForUseCase:(unsigned int)a0 with:(id /* block */)a1;
- (void)stopIsolatedAudioForUseCase:(unsigned int)a0 with:(id /* block */)a1;

@end
