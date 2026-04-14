@interface _VZGDBDebugStub : _VZDebugStub {
    struct FileDescriptor { int _fd; } _serverSocketFileDescriptor;
}

@property (readonly) unsigned short port;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct expected<VzCore::VirtualMachineConfiguration::DebugStub, NSError *> { union storage<VzCore::VirtualMachineConfiguration::DebugStub, NSError *> { char x0; struct DebugStub { int x0; struct FileDescriptor { int x0; } x1; } x1; id x2; } x0; BOOL x1; })_debugStub;

@end
