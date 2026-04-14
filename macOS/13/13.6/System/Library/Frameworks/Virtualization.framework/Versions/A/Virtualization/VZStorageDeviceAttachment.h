@class NSString;

@interface VZStorageDeviceAttachment : NSObject <_VZVirtualMachineConfigurationEncodable>

@property (readonly) struct Expected<std::variant<VzCore::VirtualMachineConfiguration::StorageDevice::Attachments::DiskImage>, NSError *> { union storage<std::variant<VzCore::VirtualMachineConfiguration::StorageDevice::Attachments::DiskImage>, NSError *> { char x0; struct variant<VzCore::VirtualMachineConfiguration::StorageDevice::Attachments::DiskImage> { struct __impl<VzCore::VirtualMachineConfiguration::StorageDevice::Attachments::DiskImage> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::StorageDevice::Attachments::DiskImage> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::StorageDevice::Attachments::DiskImage> { struct DiskImage { struct DiskImageReference { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct optional<Storage::DiskCapacity> { union { char x0; struct DiskCapacity { unsigned int x0; struct BlockNumber { unsigned long long x0; } x1; } x1; } x0; BOOL x1; } x1; struct vector<Storage::DiskImageStackedElement, std::allocator<Storage::DiskImageStackedElement>> { struct DiskImageStackedElement *x0; struct DiskImageStackedElement *x1; struct __compressed_pair<Storage::DiskImageStackedElement *, std::allocator<Storage::DiskImageStackedElement>> { struct DiskImageStackedElement *x0; } x2; } x2; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL> { } x2; } x0; unsigned int x1; } x0; } x1; id x2; } x0; BOOL x1; } _attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
