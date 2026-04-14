@class LNUserIdentity, NSArray;

@interface LNConnectionContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNUserIdentity *userIdentity;
@property (readonly, copy, nonatomic) NSArray *requiredBundleURLs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUserIdentity:(id)a0 requiredBundleURLs:(id)a1;

@end
