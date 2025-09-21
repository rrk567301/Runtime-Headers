@interface _VZForwardingDebugStub : _VZDebugStub {
    struct DebugStub { int type; struct FileDescriptor { int _fd; } server_socket_fd; } _debugStub;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct expected<VzCore::VirtualMachineConfiguration::DebugStub, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<VzCore::VirtualMachineConfiguration::DebugStub, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<VzCore::VirtualMachineConfiguration::DebugStub, NSError *>::__union_t> { union __union_t { struct DebugStub { int x0; struct FileDescriptor { int x0; } x1; } x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })_debugStub;
- (id)_initWithDebugStub:(struct DebugStub { int x0; struct FileDescriptor { int x0; } x1; } *)a0;

@end
