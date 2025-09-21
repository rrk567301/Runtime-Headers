@class NSString;

@interface CRKApplicationDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) char includeIcon;
@property (readonly, nonatomic) char includeBadgeIcon;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToApplicationDescriptor:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 includeIcon:(char)a1 includeBadgeIcon:(char)a2;

@end
