@class NSObject;
@protocol OS_dispatch_queue, _VZCustomMMIODeviceDelegate, _VZPluginConnectionDelegate;

@interface _VZCustomMMIODevice : NSObject {
    BOOL _writeSynchronously;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
    struct SharedRamManager { struct shared_ptr<Vz::SharedMemoryMap> { struct SharedMemoryMap *__ptr_; struct __shared_weak_count *__cntrl_; } _shared_memory_map; } _ram_manager;
    id<_VZCustomMMIODeviceDelegate> _delegate;
    struct unique_ptr<CustomMmioDeviceMessenger, std::default_delete<CustomMmioDeviceMessenger>> { struct CustomMmioDeviceMessenger *__ptr_; } _messenger;
    struct optional<Base::Xpc::Connection> { union { char __null_state_; struct Connection { struct OpaqueId *_object; } __val_; } ; BOOL __engaged_; } _listener;
    struct optional<Base::Xpc::Connection> { union { char __null_state_; struct Connection { struct OpaqueId *_object; } __val_; } ; BOOL __engaged_; } _connection;
    id<_VZPluginConnectionDelegate> _connectionDelegate;
    BOOL _supports_save_restore;
}

@property (weak) id<_VZCustomMMIODeviceDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *deviceQueue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)guestRAMRegions;
- (id)guestMemoryAtPhysicalAddress:(unsigned long long)a0 length:(unsigned long long)a1;
- (void)pulseIRQ:(unsigned long long)a0;
- (void)setIRQ:(unsigned long long)a0 value:(BOOL)a1;
- (void)sharedInitializationWithDeviceQueue:(id)a0 fromConfiguration:(id)a1;

@end
