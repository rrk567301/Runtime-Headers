@interface SMNUtilities : NSObject

+ (struct __IPConfigurationService { } *)createThunderboltIPService;
+ (id)UIReadableInterfaceType:(int)a0;
+ (void)acceptSocketConnection:(int *)a0 ofFamily:(int)a1 shouldAcceptBlock:(id /* block */)a2 didAcceptBlock:(id /* block */)a3;
+ (id)bsdNameForThunderboltBridgeInterface;
+ (int)connectSocketAddress:(id)a0;
+ (char)enableTimeout:(char)a0 onSocket:(int)a1;
+ (int)findAvailablePortFrom:(int)a0 addressFamily:(int)a1 keepBound:(char)a2 fd:(int *)a3;
+ (id)humanReadableIPAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)humanReadableIPAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 includePort:(char)a1;
+ (id)humanReadableInterfaceType:(int)a0;
+ (char)isBSDInterfaceNameThunderbolt:(id)a0;
+ (char)readCompletelyFromFd:(int)a0 buffer:(void *)a1 length:(unsigned long long)a2;
+ (char)writeCompletelyToFd:(int)a0 buffer:(const void *)a1 length:(unsigned long long)a2;

@end
