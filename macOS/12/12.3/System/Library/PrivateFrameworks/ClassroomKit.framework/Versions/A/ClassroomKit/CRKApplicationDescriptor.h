@class NSString;

@interface CRKApplicationDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL includeIcon;
@property (readonly, nonatomic) BOOL includeBadgeIcon;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 includeIcon:(BOOL)a1 includeBadgeIcon:(BOOL)a2;
- (BOOL)isEqualToApplicationDescriptor:(id)a0;

@end
