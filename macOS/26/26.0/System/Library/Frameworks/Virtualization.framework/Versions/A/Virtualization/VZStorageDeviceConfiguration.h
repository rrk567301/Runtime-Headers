@class NSString, VZStorageDeviceAttachment;

@interface VZStorageDeviceConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying> {
    VZStorageDeviceAttachment *_attachment;
}

@property (readonly) VZStorageDeviceAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_setAttachment:(id)a0;
- (void)_getStorageDeviceWithQueue:(struct DispatchQueue { struct OpaqueId *x0; })a0 session:(const struct DispatchGroupSession { id x0; } *)a1 completionHandler:(id /* block */)a2;
- (id)_initWithAttachment:(id)a0;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)makeStorageDeviceForVirtualMachine:(id)a0 storageDeviceIndex:(unsigned long long)a1;

@end
