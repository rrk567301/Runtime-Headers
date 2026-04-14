@class NSString, WiFiMACAddress;

@interface WiFiAwareNDIInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *ndiName;
@property (readonly, nonatomic) WiFiMACAddress *ndiAddr;
@property (readonly, nonatomic) unsigned int sessionCount;
@property (readonly, nonatomic) unsigned char security;
@property (readonly, nonatomic) unsigned int qosType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNdiName:(id)a0 ndiAddr:(id)a1 sessionCount:(unsigned int)a2 security:(unsigned char)a3 qosType:(unsigned int)a4;

@end
