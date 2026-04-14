@class NSString;

@interface CWFAWDLPeerContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *MACAddress;
@property (copy, nonatomic) NSString *interfaceName;

+ (id)AWDLPeerContextWithMACAddress:(id)a0 interfaceName:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAWDLPeerContext:(id)a0;

@end
