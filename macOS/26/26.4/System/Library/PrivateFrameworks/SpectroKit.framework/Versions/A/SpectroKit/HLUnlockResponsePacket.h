@class NSData;

@interface HLUnlockResponsePacket : HLResponsePacket

@property (retain, nonatomic) NSData *oemKey;

- (void).cxx_destruct;
- (void)convertFromLong:(unsigned long long)a0 eebuf:(char *)a1;
- (void)convertToLong:(char *)a0 outval:(unsigned long long *)a1;
- (id)createUnlockCode;
- (id)createUnlockCodeDC;
- (id)createUnlockCodeXRite;
- (id)initWithResponse:(id)a0 oemKey:(id)a1;

@end
