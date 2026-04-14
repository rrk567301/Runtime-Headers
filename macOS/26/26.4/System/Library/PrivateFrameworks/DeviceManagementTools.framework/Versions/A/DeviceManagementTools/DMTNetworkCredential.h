@class NSString;

@interface DMTNetworkCredential : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSString *credential;

+ (id)credentialWithNetworkName:(id)a0 credential:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithNetworkName:(id)a0 credential:(id)a1;
- (BOOL)isEqualToCredential:(id)a0;

@end
