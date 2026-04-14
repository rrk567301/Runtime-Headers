@interface _VZGDBDebugStubConfiguration : _VZDebugStubConfiguration

@property unsigned short port;
@property BOOL listensOnAllNetworkInterfaces;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithPort:(unsigned short)a0;
- (id)makeDebugStubForVirtualMachine:(id)a0;

@end
