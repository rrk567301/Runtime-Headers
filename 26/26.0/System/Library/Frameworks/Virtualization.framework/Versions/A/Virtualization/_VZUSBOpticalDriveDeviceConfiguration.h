@interface _VZUSBOpticalDriveDeviceConfiguration : VZStorageDeviceConfiguration

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttachment:(id)a0;
- (void)_getStorageDeviceWithQueue:(struct DispatchQueue { struct OpaqueId *x0; })a0 session:(const struct DispatchGroupSession { id x0; } *)a1 completionHandler:(id /* block */)a2;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;

@end
