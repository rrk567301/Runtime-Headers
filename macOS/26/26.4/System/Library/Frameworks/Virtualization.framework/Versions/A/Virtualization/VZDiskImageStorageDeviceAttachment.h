@class NSURL, _VZDiskImage;

@interface VZDiskImageStorageDeviceAttachment : VZStorageDeviceAttachment {
    _VZDiskImage *_diskImage;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly) long long cachingMode;
@property (readonly) long long synchronizationMode;

+ (id)_diskImageStorageDeviceAttachmentWithDiskImage:(id)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;
- (void)_getAttachmentWithQueue:(struct DispatchQueue { struct OpaqueId *x0; })a0 completionHandler:(id /* block */)a1;
- (void)_updateDiskSize:(unsigned long long)a0;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 cachingMode:(long long)a2 synchronizationMode:(long long)a3 error:(id *)a4;

@end
