@protocol _VZGDBDebugStubDelegate;

@interface _VZGDBDebugStub : _VZDebugStub {
    BOOL _listenOnAllNetworkInterfaces;
}

@property (readonly) unsigned short port;
@property (weak) id<_VZGDBDebugStubDelegate> delegate;

- (void).cxx_destruct;
- (struct expected<VzCore::VirtualMachineConfiguration::DebugStub, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<VzCore::VirtualMachineConfiguration::DebugStub, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<VzCore::VirtualMachineConfiguration::DebugStub, NSError *>::__union_t> { union __union_t { struct DebugStub { int x0; struct FileDescriptor { int x0; } x1; } x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })_debugStub;

@end
