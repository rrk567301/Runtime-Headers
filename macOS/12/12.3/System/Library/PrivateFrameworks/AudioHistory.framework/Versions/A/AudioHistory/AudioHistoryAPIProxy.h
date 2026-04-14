@class NSString, NSXPCListener;

@interface AudioHistoryAPIProxy : NSObject <NSXPCListenerDelegate, AudioHistoryAPIProxyProtocol> {
    struct optional<caulk::synchronized<std::shared_ptr<AudioHistory::API>, caulk::shared_ptr_mutex<std::recursive_mutex>>> { union { char __null_state_; struct synchronized<std::shared_ptr<AudioHistory::API>, caulk::shared_ptr_mutex<std::recursive_mutex>, caulk::empty_atomic_interface<std::shared_ptr<AudioHistory::API>>> { struct shared_ptr_mutex<std::recursive_mutex> { struct shared_ptr<std::recursive_mutex> { struct recursive_mutex *__ptr_; struct __shared_weak_count *__cntrl_; } mMutex; } mMutex; struct shared_ptr<AudioHistory::API> { struct API *__ptr_; struct __shared_weak_count *__cntrl_; } mObject; } __val_; } ; BOOL __engaged_; } _api;
    NSXPCListener *_xpcListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (void)getSystemStatusListWithResult:(id /* block */)a0;
- (void)connectToXPCService:(id)a0;
- (id)initWithAPI:(struct shared_ptr<AudioHistory::API> { struct API *x0; struct __shared_weak_count *x1; })a0 andAPIMutex:(struct shared_ptr<std::recursive_mutex> { struct recursive_mutex *x0; struct __shared_weak_count *x1; })a1;
- (void)startWritingHistoryForSystemWithName:(id)a0 withResult:(id /* block */)a1;
- (void)stopWritingHistoryForSystemWithName:(id)a0 withResult:(id /* block */)a1;

@end
