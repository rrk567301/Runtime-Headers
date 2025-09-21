@class ICUserIdentity, ICUserIdentityStore;

@interface ICUserIdentityContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) ICUserIdentity *identity;
@property (readonly, nonatomic) ICUserIdentityStore *identityStore;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentity:(id)a0 identityStore:(id)a1;

@end
