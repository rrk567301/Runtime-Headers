@class __end_, _VZCustomVirtioDeviceConfiguration, __cap_, NSObject;
@protocol OS_xpc_object, _VZPluginConnectionDelegate, OS_dispatch_queue, _VZCustomVirtioDeviceDelegate;

@interface _VZCustomVirtioDevice : NSObject {
    struct DispatchQueue { struct OpaqueId *_object; } _device_queue;
    struct DispatchQueue { struct OpaqueId *_object; } _messenger_queue;
    NSObject<OS_xpc_object> *_connection;
    BOOL _guestDidAcceptDriverOk;
    _VZCustomVirtioDeviceConfiguration *_configuration;
    struct unique_ptr<Vz::CustomVirtioDeviceManager, std::default_delete<Vz::CustomVirtioDeviceManager>> { struct CustomVirtioDeviceManager *__ptr_; } _device_manager;
    struct BitSet<unsigned int, 64UL> { struct array<unsigned int, 2UL> { unsigned int __elems_[2]; } _blocks; } _driverFeatures;
    struct vector<_VZVirtioQueue *, std::allocator<_VZVirtioQueue *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _queues;
    NSObject<OS_xpc_object> *_anonymous_connection;
    id<_VZCustomVirtioDeviceDelegate> _delegate;
    id<_VZPluginConnectionDelegate> _connectionDelegate;
}

@property (weak) id<_VZCustomVirtioDeviceDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *deviceQueue;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)driverFeaturesAt:(unsigned int)a0 error:(id *)a1;
- (id)guestMemoryAtPhysicalAddress:(unsigned long long)a0 length:(unsigned long long)a1;
- (id)queueAtIndex:(unsigned short)a0;
- (void)requestDeviceReset;
- (void)updateDeviceSpecificConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
