@class NSURL, _VZDiskImage;

@interface VZDiskImageStorageDeviceAttachment : VZStorageDeviceAttachment {
    _VZDiskImage *_diskImage;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly) long long cachingMode;
@property (readonly) long long synchronizationMode;

- (void).cxx_destruct;
- (struct Expected<std::variant<VzCore::VirtualMachineConfiguration::StorageDevice::Attachments::DiskImage>, NSError *> { union storage<std::variant<VzCore::VirtualMachineConfiguration::StorageDevice::Attachments::DiskImage>, NSError *> { char x0; struct variant<VzCore::VirtualMachineConfiguration::StorageDevice::Attachments::DiskImage> { struct __impl<VzCore::VirtualMachineConfiguration::StorageDevice::Attachments::DiskImage> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::StorageDevice::Attachments::DiskImage> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::StorageDevice::Attachments::DiskImage> { struct DiskImage { struct DiskImageReference { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct optional<Storage::DiskCapacity> { union { char x0; struct DiskCapacity { unsigned int x0; struct BlockNumber { unsigned long long x0; } x1; } x1; } x0; BOOL x1; } x1; struct vector<Storage::DiskImageStackedElement, std::allocator<Storage::DiskImageStackedElement>> { struct DiskImageStackedElement *x0; struct DiskImageStackedElement *x1; struct __compressed_pair<Storage::DiskImageStackedElement *, std::allocator<Storage::DiskImageStackedElement>> { struct DiskImageStackedElement *x0; } x2; } x2; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL> { } x2; } x0; unsigned int x1; } x0; } x1; id x2; } x0; BOOL x1; })_attachment;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 cachingMode:(long long)a2 synchronizationMode:(long long)a3 error:(id *)a4;
- (id)_initWithDiskImage:(id)a0;

@end
