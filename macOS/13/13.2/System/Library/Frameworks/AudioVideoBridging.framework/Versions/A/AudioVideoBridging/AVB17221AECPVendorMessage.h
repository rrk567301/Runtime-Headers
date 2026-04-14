@class NSData;

@interface AVB17221AECPVendorMessage : AVB17221AECPMessage

@property unsigned long long protocolID;
@property (copy) NSData *protocolSpecificData;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
