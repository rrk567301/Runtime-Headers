@class VZVirtualMachine, NSObject, VZStorageDeviceAttachment;
@protocol OS_dispatch_queue;

@interface _VZStorageDevice : NSObject {
    VZVirtualMachine *_virtualMachine;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    VZStorageDeviceAttachment *_attachment;
    unsigned long long _storageDeviceIndex;
}

@property (readonly) VZStorageDeviceAttachment *attachment;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setAttachment:(id)a0 completionHandler:(id /* block */)a1;

@end
