@class VZVirtualMachine;

@interface _VZVirtualMachineAccessorManager : NSObject {
    VZVirtualMachine *_virtualMachine;
    struct _VZVirtualMachineProperties { struct optional<_VZVirtualMachineProperties::KeyboardProperties> { union { char __null_state_; struct KeyboardProperties { unsigned int device_id; long long type; } __val_; } ; BOOL __engaged_; } keyboard_properties; struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } multi_touch_device_id; struct optional<_VZVirtualMachineProperties::PointingDeviceProperties> { union { char __null_state_; struct PointingDeviceProperties { unsigned int device_id; long long type; } __val_; } ; BOOL __engaged_; } pointing_device_properties; long long state; unsigned int usb_passthrough_pointing_device_count; } _properties;
    struct vector<AccessorProperties, std::allocator<AccessorProperties>> { struct AccessorProperties *__begin_; struct AccessorProperties *__end_; struct AccessorProperties *__cap_; } _accessors;
    struct unique_ptr<_VZVirtualMachineAccessorManagerMessenger, std::default_delete<_VZVirtualMachineAccessorManagerMessenger>> { struct _VZVirtualMachineAccessorManagerMessenger *__ptr_; } _messenger;
    struct unordered_map<unsigned long, std::unique_ptr<Base::Xpc::Connection>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::unique_ptr<Base::Xpc::Connection>>>> { struct __hash_table<std::__hash_value_type<unsigned long, std::unique_ptr<Base::Xpc::Connection>>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, std::unique_ptr<Base::Xpc::Connection>>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, std::unique_ptr<Base::Xpc::Connection>>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, std::unique_ptr<Base::Xpc::Connection>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<Base::Xpc::Connection>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<Base::Xpc::Connection>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<Base::Xpc::Connection>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, std::unique_ptr<Base::Xpc::Connection>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _endpointListeners;
    unsigned int _displayPresenterIdentifierAllocationCount;
    BOOL _virtualMachineConnectionAvailable;
    BOOL _isSendingKeyboardEvents;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
