@class NSString;

@interface _VZCoprocessorConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct expected<VzCore::VirtualMachineConfiguration::Coprocessor, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<VzCore::VirtualMachineConfiguration::Coprocessor, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<VzCore::VirtualMachineConfiguration::Coprocessor, NSError *>::__union_t> { union __union_t { struct Coprocessor { int x0; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x1; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x2; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x3; struct optional<Base::FileDescriptor> { union { char x0; struct FileDescriptor { int x0; } x1; } x0; BOOL x1; } x4; struct FileDescriptor { int x0; } x5; struct optional<VzCore::VirtualMachineConfiguration::DebugStub> { union { char x0; struct DebugStub { int x0; struct FileDescriptor { int x0; } x1; } x1; } x0; BOOL x1; } x6; struct vector<VzCore::VirtualMachineConfiguration::Coprocessor::MailboxHandle, std::allocator<VzCore::VirtualMachineConfiguration::Coprocessor::MailboxHandle>> { struct MailboxHandle *x0; struct MailboxHandle *x1; struct MailboxHandle *x2; } x7; struct vector<HvCore::SharedRamEntry, std::allocator<HvCore::SharedRamEntry>> { struct SharedRamEntry *x0; struct SharedRamEntry *x1; struct SharedRamEntry *x2; } x8; struct ApConfiguration { unsigned long long x0; unsigned int x1; BOOL x2; } x9; } x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })_coprocessor;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)makeCoprocessorForVirtualMachine:(id)a0 coprocessorIndex:(unsigned long long)a1;

@end
