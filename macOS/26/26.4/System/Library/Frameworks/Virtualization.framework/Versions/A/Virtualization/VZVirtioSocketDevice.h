@class , NSDictionary, VZVirtualMachine, NSObject, __end_;
@protocol OS_xpc_object, _VZVirtioSocketDeviceDelegate;

@interface VZVirtioSocketDevice : VZSocketDevice {
    unsigned long long _guestContextID;
    VZVirtualMachine *_virtualMachine;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
    struct map<unsigned int, VZVirtioSocketListener *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, VZVirtioSocketListener *>>> { struct __tree<std::__value_type<unsigned int, VZVirtioSocketListener *>, std::__map_value_compare<unsigned int, std::pair<const unsigned int, VZVirtioSocketListener *>, std::less<unsigned int>>, std::allocator<std::pair<const unsigned int, VZVirtioSocketListener *>>> { void *__begin_node_; struct { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; } ; struct { unsigned long long __size_; } ; } __tree_; } _listeners;
    struct vector<VZVirtioSocketConnection *__weak, std::allocator<VZVirtioSocketConnection *__weak>> { __end_ **__begin_;  **x0; struct { id *__cap_; } x1; } _guest_connections;
    struct vector<PendingGuestConnection, std::allocator<PendingGuestConnection>> { struct PendingGuestConnection *__begin_; struct PendingGuestConnection *__end_; struct { struct PendingGuestConnection *__cap_; } ; } _pending_guest_connections;
    id<_VZVirtioSocketDeviceDelegate> _delegate;
    NSObject<OS_xpc_object> *_xpcConnection;
    struct unique_ptr<SocketDeviceMessenger, std::default_delete<SocketDeviceMessenger>> { struct { struct SocketDeviceMessenger *__ptr_; } ; } _messenger;
    BOOL _invalidated;
    BOOL _constructedFromXpcObject;
    NSDictionary *_configurationOptions;
    struct optional<Base::AuditToken> { union { char __null_state_; struct AuditToken { struct { unsigned int val[8]; } _token; } __val_; } ; BOOL __engaged_; } _virtualMachineClientAuditToken;
}

- (void)_setDelegate:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct { unsigned int x0[8]; })_virtualMachineClientAuditToken;
- (id)_configurationOptions;
- (void)connectToPort:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)removeSocketListenerForPort:(unsigned int)a0;
- (void)setSocketListener:(id)a0 forPort:(unsigned int)a1;

@end
