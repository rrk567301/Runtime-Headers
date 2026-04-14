@interface QCDatagramSocket : NSObject {
    unsigned int _address;
    unsigned short _port;
    int _socketFD;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned long long)maxStringLength;
+ (unsigned long long)maxDataLength;

- (void)finalize;
- (void)dealloc;
- (unsigned short)port;
- (unsigned int)address;
- (id)initWithPort:(unsigned short)a0;
- (id)initWithAddress:(unsigned int)a0 port:(unsigned short)a1;

@end
