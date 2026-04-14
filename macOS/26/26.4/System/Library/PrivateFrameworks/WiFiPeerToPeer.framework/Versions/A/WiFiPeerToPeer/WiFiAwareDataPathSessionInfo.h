@class WiFiMACAddress;

@interface WiFiAwareDataPathSessionInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char dpId;
@property (readonly, nonatomic) unsigned long long dpRole;
@property (readonly, nonatomic) unsigned char serviceId;
@property (readonly, nonatomic) WiFiMACAddress *initiatorDataAddress;
@property (readonly, nonatomic) WiFiMACAddress *peerNmiMacAddress;
@property (readonly, nonatomic) WiFiMACAddress *peerDataAddress;
@property (readonly, nonatomic) unsigned long long sessionState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDpId:(unsigned char)a0 dpRole:(unsigned long long)a1 serviceId:(unsigned char)a2 initiatorDataAddress:(id)a3 peerNmiMacAddress:(id)a4 peerDataAddress:(id)a5 sessionState:(unsigned long long)a6;

@end
