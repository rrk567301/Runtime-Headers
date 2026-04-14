@class LNUserIdentity, LNEffectiveBundleIdentifier;

@interface LNConnectionContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNUserIdentity *userIdentity;
@property (readonly, copy, nonatomic) LNEffectiveBundleIdentifier *effectiveBundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserIdentity:(id)a0 effectiveBundleIdentifier:(id)a1;

@end
