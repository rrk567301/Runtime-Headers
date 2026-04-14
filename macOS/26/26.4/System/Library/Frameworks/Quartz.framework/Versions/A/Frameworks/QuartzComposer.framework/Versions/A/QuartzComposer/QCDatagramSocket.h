@interface QCDatagramSocket : NSObject {
    unsigned int _address;
    unsigned short _port;
    int _socketFD;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned long long)maxStringLength;
+ (unsigned long long)maxDataLength;

- (id)initWithPort:(unsigned short)a0;
- (void)finalize;
- (unsigned short)port;
- (unsigned int)address;
- (void)dealloc;
- (id)initWithAddress:(unsigned int)a0 port:(unsigned short)a1;

@end
