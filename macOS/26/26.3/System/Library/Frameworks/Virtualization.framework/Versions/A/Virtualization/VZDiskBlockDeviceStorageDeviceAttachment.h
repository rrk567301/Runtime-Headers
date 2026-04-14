@class NSURL, NSFileHandle;

@interface VZDiskBlockDeviceStorageDeviceAttachment : VZStorageDeviceAttachment {
    NSURL *_url;
}

@property (readonly) NSURL *_url;
@property (readonly) NSFileHandle *fileHandle;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly) long long synchronizationMode;

- (void).cxx_destruct;
- (void)_getAttachmentWithQueue:(struct DispatchQueue { struct OpaqueId *x0; })a0 completionHandler:(id /* block */)a1;
- (id)_initWithURL:(id)a0 readOnly:(BOOL)a1 synchronizationMode:(long long)a2 error:(id *)a3;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)initWithFileHandle:(id)a0 readOnly:(BOOL)a1 synchronizationMode:(long long)a2 error:(id *)a3;

@end
