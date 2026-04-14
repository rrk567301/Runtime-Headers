@class NSArray;

@interface AVB17221AECPAddressAccessMessage : AVB17221AECPMessage

@property (copy) NSArray *tlvs;

+ (id)responseMessage;
+ (id)errorForStatusCode:(unsigned char)a0;
+ (id)commandMessage;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
