@class NSData;

@interface AVB17221AECPVendorMessage : AVB17221AECPMessage

@property unsigned long long protocolID;
@property (copy) NSData *protocolSpecificData;

+ (id)commandMessageForProtocolID:(unsigned long long)a0 protocolSpecificData:(id)a1;
+ (id)responseMessageForProtocolID:(unsigned long long)a0 protocolSpecificData:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_makeItMutableWithMinimumSize:(unsigned long long)a0;

@end
