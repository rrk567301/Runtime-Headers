@class NSURL;

@interface _VZTemporaryRAMStorageDeviceAttachment : VZStorageDeviceAttachment

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isReadOnly) BOOL readOnly;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;
- (void)_getAttachmentWithQueue:(struct DispatchQueue { struct OpaqueId *x0; })a0 completionHandler:(id /* block */)a1;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;

@end
