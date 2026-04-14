@class LNUserIdentity, LNEffectiveBundleIdentifier;

@interface LNConnectionContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNUserIdentity *userIdentity;
@property (readonly, copy, nonatomic) LNEffectiveBundleIdentifier *effectiveBundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithUserIdentity:(id)a0 effectiveBundleIdentifier:(id)a1;

@end
