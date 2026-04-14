@class NSXPCListener, NSString, NSXPCInterface, NSMutableArray, MXSystemController;
@protocol AVAudioSessionServerDelegate, AuRA_ResourceArbitrator, NSObject;

@interface AVAudioSessionXPCServer : NSObject <NSXPCListenerDelegate> {
    NSMutableArray *_connections;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_callbackInterface;
    struct unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> { struct __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>> { void *__value_; } __ptr_; } _clientDeathPromise;
    struct unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> { struct __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>> { void *__value_; } __ptr_; } _deallocPromise;
    id<NSObject> _mxConfigurationChangeObserver;
    id<NSObject> _mxDefaultRouteChangeObserver;
    MXSystemController *_systemController;
    BOOL _needsDefaultWorldInit;
    struct World { struct shared_ptr<caulk::reactor<as::server::ISessionManager *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } mSessionManagerReactor; struct shared_ptr<caulk::reactor<as::server::IHardwareManager *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } mHardwareManagerReactor; id<AuRA_ResourceArbitrator> mResourceArbitrator; BOOL mInitialized; } _world;
    id<AVAudioSessionServerDelegate> _serverDelegate;
}

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (void)start;
- (void)init2;
- (id)initWithDelegate:(id)a0;
- (void)removeConnection:(id)a0;
- (void)handleBottomUpChangeNotification:(id)a0;
- (void)handleDefaultRouteChangeNotification:(id)a0;
- (void)registerSystemControllerListeners;

@end
