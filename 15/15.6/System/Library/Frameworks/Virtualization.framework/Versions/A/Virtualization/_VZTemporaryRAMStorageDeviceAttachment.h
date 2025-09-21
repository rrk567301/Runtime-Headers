@class NSURL;

@interface _VZTemporaryRAMStorageDeviceAttachment : VZStorageDeviceAttachment

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isReadOnly) char readOnly;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 readOnly:(char)a1 error:(id *)a2;
- (void)_getAttachmentWithQueue:(struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { id x0; } x0; })a0 completionHandler:(id /* block */)a1;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
