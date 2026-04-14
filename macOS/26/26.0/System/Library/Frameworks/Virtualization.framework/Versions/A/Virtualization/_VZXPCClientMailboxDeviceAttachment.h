@class NSString;

@interface _VZXPCClientMailboxDeviceAttachment : _VZMailboxDeviceAttachment <_VZVirtualMachineConfigurationEncodable> {
    struct optional<VzCore::VirtualMachineConfiguration::Coprocessor::MailboxHandle> { union { char __null_state_; struct MailboxHandle { struct Endpoint { struct OpaqueId *_object; } endpoint; } __val_; } ; BOOL __engaged_; } _mailbox_handle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct expected<std::variant<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient>, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<std::variant<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient>, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<std::variant<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient>, NSError *>::__union_t> { union __union_t { struct variant<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { struct __impl<VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcServer> { struct XpcServer { struct Connection { struct OpaqueId *x0; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::CoprocessorMailbox::Backends::XpcClient> { struct XpcClient { struct Endpoint { struct OpaqueId *x0; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })_attachment;
- (id)_initWithMailboxHandle:(struct MailboxHandle { struct Endpoint { struct OpaqueId *x0; } x0; })a0;

@end
