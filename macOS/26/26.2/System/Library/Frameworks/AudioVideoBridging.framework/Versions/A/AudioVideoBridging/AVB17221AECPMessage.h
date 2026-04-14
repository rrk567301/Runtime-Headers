@class AVBMACAddress;

@interface AVB17221AECPMessage : NSObject <NSCopying>

@property unsigned char messageType;
@property unsigned char status;
@property unsigned long long targetEntityID;
@property unsigned long long controllerEntityID;
@property unsigned short sequenceID;
@property (copy) AVBMACAddress *sourceMAC;

+ (id)errorForStatusCode:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)errorForStatusCode;

@end
