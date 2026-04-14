@class NSString, _VZMailboxDeviceAttachment;

@interface _VZMailboxDeviceConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying>

@property (readonly) struct expected<VzCore::VirtualMachineConfiguration::CoprocessorMailbox, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<VzCore::VirtualMachineConfiguration::CoprocessorMailbox, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<VzCore::VirtualMachineConfiguration::CoprocessorMailbox, NSError *>::__union_t> { union __union_t { struct CoprocessorMailbox { struct optional<std::variant<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient>> { union { char x0; struct variant<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { struct __impl<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer> { struct XpcServer { struct Connection { struct OpaqueId *x0; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { struct XpcClient { struct Endpoint { struct OpaqueId *x0; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x1; } x0; BOOL x1; } x0; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x1; } x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; } _mailboxDevice;
@property (retain) _VZMailboxDeviceAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (BOOL)validateWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;

@end
