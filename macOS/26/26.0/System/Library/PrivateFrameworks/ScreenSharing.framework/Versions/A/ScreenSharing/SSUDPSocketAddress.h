@class NSString;

@interface SSUDPSocketAddress : SSAddress

@property (copy) NSString *remoteIPPort;

- (id)displayString;
- (void)dealloc;
- (id)initWithUDPSocket:(int)a0;

@end
