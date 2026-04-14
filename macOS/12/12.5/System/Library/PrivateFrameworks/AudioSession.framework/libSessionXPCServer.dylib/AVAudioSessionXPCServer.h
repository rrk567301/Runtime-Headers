@class NSXPCListener, NSString, NSXPCInterface, NSMutableArray, MXSystemController;
@protocol AuRA_ResourceArbitrator, NSObject;

@interface AVAudioSessionXPCServer : NSObject <NSXPCListenerDelegate> {
    NSMutableArray *_connections;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_callbackInterface;
    struct unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> { struct __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>> { void *__value_; } __ptr_; } _clientDeathPromise;
    struct unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> { struct __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>> { void *__value_; } __ptr_; } _deallocPromise;
    id<NSObject> _mxConfigurationChangeObserver;
    id<NSObject> _mxDefaultRouteChangeObserver;
    MXSystemController *_systemController;
    struct optional<std::tuple<as::ProcessToken, as::ClientProcess_MockState>> { union { char __null_state_; struct tuple<as::ProcessToken, as::ClientProcess_MockState> { struct __tuple_impl<std::__tuple_indices<0, 1>, as::ProcessToken, as::ClientProcess_MockState> { struct ProcessToken { unsigned int mValue; } __value_; struct ClientProcess_MockState { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } mName; BOOL mHasSessionProxyingEntitlement; BOOL mHasTelephonyEntitlement; BOOL mHasAssertionsToStartPlayback; } __value_; } __base_; } __val_; } ; BOOL __engaged_; } _fakeProcessForNextConnection;
    BOOL _needsDefaultWorldInit;
    struct World { struct shared_ptr<caulk::reactor<as::server::ISessionManager *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } mSessionManagerReactor; struct shared_ptr<caulk::reactor<as::server::IHardwareManager *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } mHardwareManagerReactor; id<AuRA_ResourceArbitrator> mResourceArbitrator; BOOL mInitialized; } _world;
    struct reply_watchdog_factory { BOOL mDebugging; int mDefaultTimeoutMS; struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } mTimeoutHandler; } _replyWatchdogFactory;
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
- (void)init2;
- (void)removeConnection:(id)a0;
- (void)registerSystemControllerListeners;
- (void)handleBottomUpChangeNotification:(id)a0;
- (void)handleDefaultRouteChangeNotification:(id)a0;

@end
