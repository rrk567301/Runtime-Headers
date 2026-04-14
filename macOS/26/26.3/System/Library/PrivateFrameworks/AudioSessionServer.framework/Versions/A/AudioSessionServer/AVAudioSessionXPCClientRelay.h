@class NSXPCConnection;
@protocol SessionManagerXPCServerCallbackProtocol;

@interface AVAudioSessionXPCClientRelay : NSObject {
    struct synchronized<avas::server::DeferredMessageState, caulk::mach::unfair_lock, caulk::empty_atomic_interface<avas::server::DeferredMessageState>> { struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } mMutex; struct DeferredMessageState { BOOL mMessagePending; unsigned int mDeferredMessageCount; id<SessionManagerXPCServerCallbackProtocol> proxy; struct ProcessToken { unsigned int mValue; } mToken; struct vector<avas::server::DeferredMessageState::EventType, std::allocator<avas::server::DeferredMessageState::EventType>> { int *__begin_; int *__end_; struct { int *__cap_; } ; } mFIFO; struct optional<avas::server::ConfigChangeSummary> { union { char __null_state_; struct ConfigChangeSummary { void /* function */ **_vptr$Base; struct vector<std::unique_ptr<avas::server::SessionUpdateSummary>, std::allocator<std::unique_ptr<avas::server::SessionUpdateSummary>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } _sessionChanges; struct unique_ptr<avas::server::ChangedObject, std::default_delete<avas::server::ChangedObject>> { struct { struct ChangedObject *__ptr_; } ; } _hardwareSystemChange; } __val_; } ; BOOL __engaged_; } mDeferredConfigChange; struct vector<avas::RouteIdentifier, std::allocator<avas::RouteIdentifier>> { struct RouteIdentifier *__begin_; struct RouteIdentifier *__end_; struct { struct RouteIdentifier *__cap_; } ; } mDeferredDefaultRouteChanges; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct { unsigned int *__cap_; } ; } mDeferredStopForAppStateChange; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct { unsigned int *__cap_; } ; } mDeferredNeedsStateSync; struct vector<std::pair<unsigned int, NSDictionary *>, std::allocator<std::pair<unsigned int, NSDictionary *>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } mDeferredInterruptions; struct vector<std::pair<unsigned int, bool>, std::allocator<std::pair<unsigned int, bool>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } mDeferredHasProxies; struct vector<avas::server::ControlValue, std::allocator<avas::server::ControlValue>> { struct ControlValue *__begin_; struct ControlValue *__end_; struct { struct ControlValue *__cap_; } ; } mDeferredControlValueChanges; } mObject; } guarded_impl;
    NSXPCConnection *connection;
    struct ProcessToken { unsigned int mValue; } token;
}

- (void)sendSessionNeedsStateSync:(unsigned int)a0;
- (void)sendDeferredMessages;
- (void)sendServerConfigurationChange:(const void *)a0;
- (id)initWithConnection:(id)a0 token:(struct ProcessToken { unsigned int x0; })a1;
- (void)sendControlValueChanged:(const void *)a0;
- (void)sendServerDefaultRouteChange:(const void *)a0;
- (void)sendSessionStoppedForAppStateChange:(unsigned int)a0;
- (void)sendSession:(unsigned int)a0 hasProxies:(BOOL)a1;
- (void).cxx_destruct;
- (void)sendInterruptionMessageForSession:(unsigned int)a0 userInfo:(id)a1;
- (void)setBarrierBlock;
- (id).cxx_construct;

@end
