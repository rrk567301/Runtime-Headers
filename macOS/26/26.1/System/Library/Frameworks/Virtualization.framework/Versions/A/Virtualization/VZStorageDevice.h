@class VZVirtualMachine, VZStorageDeviceAttachment;

@interface VZStorageDevice : NSObject {
    VZVirtualMachine *_virtualMachine;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
    VZStorageDeviceAttachment *_attachment;
    struct optional<unsigned long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _storageDeviceIndex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_attachment;
- (id)_initWithAttachment:(id)a0;
- (id)_initWithVirtualMachine:(id)a0 attachment:(id)a1;
- (id)_initWithVirtualMachine:(id)a0 storageDeviceIndex:(unsigned long long)a1 attachment:(id)a2;
- (void)_setAttachment:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setVirtualMachine:(id)a0;

@end
