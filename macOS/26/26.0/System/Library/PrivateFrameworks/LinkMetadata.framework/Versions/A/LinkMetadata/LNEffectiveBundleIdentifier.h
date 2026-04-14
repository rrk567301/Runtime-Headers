@class NSString, NSURL;

@interface LNEffectiveBundleIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 bundleIdentifier:(id)a1 url:(id)a2;
- (id)bundleMetadataForURLs:(id)a0;
- (id)initWithType:(long long)a0 bundleIdentifier:(id)a1;

@end
