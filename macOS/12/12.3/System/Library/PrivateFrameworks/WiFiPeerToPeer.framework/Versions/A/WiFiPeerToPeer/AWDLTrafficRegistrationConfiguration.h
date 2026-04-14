@class NSString, WiFiMACAddress;

@interface AWDLTrafficRegistrationConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) WiFiMACAddress *peerAddress;
@property (nonatomic) long long options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0 peerAddress:(id)a1;

@end
