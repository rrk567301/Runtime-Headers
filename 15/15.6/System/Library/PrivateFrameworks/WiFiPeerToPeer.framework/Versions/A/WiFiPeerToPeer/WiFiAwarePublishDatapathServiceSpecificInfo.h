@class NSString;

@interface WiFiAwarePublishDatapathServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long protocolType;
@property (readonly, nonatomic) unsigned short servicePort;
@property (copy, nonatomic) NSString *hostname;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtocolType:(long long)a0 servicePort:(unsigned short)a1;
- (char)hostnameEquals:(id)a0;

@end
