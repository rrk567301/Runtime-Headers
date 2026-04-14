@class NSData;

@interface AVB17221AECPAddressAccessTLV : NSObject

@property unsigned char mode;
@property unsigned long long address;
@property (copy) NSData *memoryData;

- (void).cxx_destruct;
- (id)description;

@end
