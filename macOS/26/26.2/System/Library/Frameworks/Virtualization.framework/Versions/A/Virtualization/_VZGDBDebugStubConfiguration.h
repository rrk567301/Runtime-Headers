@interface _VZGDBDebugStubConfiguration : _VZDebugStubConfiguration

@property unsigned short port;
@property BOOL listensOnAllNetworkInterfaces;

- (id)initWithPort:(unsigned short)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)makeDebugStubForVirtualMachine:(id)a0;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)makeDebugStubForCoprocessor;

@end
