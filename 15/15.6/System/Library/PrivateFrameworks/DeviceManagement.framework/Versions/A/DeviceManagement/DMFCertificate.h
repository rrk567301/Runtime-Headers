@class NSString, NSData;

@interface DMFCertificate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *commonName;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) char isIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCommonName:(id)a0 data:(id)a1 isIdentity:(char)a2;

@end
