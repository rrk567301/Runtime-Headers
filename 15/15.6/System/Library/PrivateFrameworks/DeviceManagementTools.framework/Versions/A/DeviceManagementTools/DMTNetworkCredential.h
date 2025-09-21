@class NSString;

@interface DMTNetworkCredential : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSString *credential;

+ (id)credentialWithNetworkName:(id)a0 credential:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNetworkName:(id)a0 credential:(id)a1;
- (char)isEqualToCredential:(id)a0;

@end
