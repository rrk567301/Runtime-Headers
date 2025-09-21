@class NSString;

@interface CWFNetworkSignature : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *IPv4NetworkSignature;
@property (copy, nonatomic) NSString *IPv6NetworkSignature;

+ (id)createHexStringFromBytes:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIPv4NetworkSignature:(id)a0;
- (id)initWithIPv4NetworkSignature:(id)a0 IPv6NetworkSignature:(id)a1;
- (id)initWithIPv4NetworkSignatureBytes:(id)a0 IPv6NetworkSignatureBytes:(id)a1;
- (id)initWithIPv6NetworkSignature:(id)a0;
- (id)initWithNetworkSignatureWithString:(id)a0;

@end
