@interface APSTimeSyncNetworkClock : NSObject

@property (readonly, nonatomic) struct OpaqueCM8021ASClock { } *cm8021ASClock;

- (void)dealloc;
- (id)init;
- (int)addIPv4PortAndGetIdentity:(struct __CFString { } *)a0 destinationAddress:(unsigned int)a1 clockIdentity:(unsigned long long *)a2 localPortNumber:(unsigned short *)a3;
- (int)addIPv6PortAndGetIdentity:(struct __CFString { } *)a0 destinationAddress:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a1 clockIdentity:(unsigned long long *)a2 localPortNumber:(unsigned short *)a3;
- (int)createClockForSystemDomainClockIdentifier:(struct OpaqueCMClock **)a0;
- (int)disablePort:(unsigned short)a0;
- (int)enablePort:(unsigned short)a0;
- (int)overridePortReceiveMatching:(unsigned short)a0 clockIdentity:(unsigned long long)a1 remotePort:(unsigned short)a2;
- (int)removeIPv4Port:(struct __CFString { } *)a0 destinationAddress:(unsigned int)a1;
- (int)removeIPv6Port:(struct __CFString { } *)a0 destinationAddress:(struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; })a1;
- (int)setAllPortRemoteSyncMessageIntervals:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)setupClock;

@end
