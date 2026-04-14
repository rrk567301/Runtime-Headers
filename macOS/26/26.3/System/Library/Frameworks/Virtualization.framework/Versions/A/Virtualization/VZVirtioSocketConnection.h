@interface VZVirtioSocketConnection : NSObject {
    struct VirtioSocket { struct Address { unsigned int destination_port; unsigned int source_port; } address; struct FileDescriptor { int _fd; } file_descriptor; } _socket;
}

@property (readonly) unsigned int destinationPort;
@property (readonly) unsigned int sourcePort;
@property (readonly) int fileDescriptor;

- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;

@end
