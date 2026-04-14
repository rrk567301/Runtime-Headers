@class NSString, NSArray;

@interface LNTargetMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) LNTargetMetadata *defaultTarget;
@property (class, readonly, nonatomic) LNTargetMetadata *mainTarget;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSArray *conditions;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 conditions:(id)a1;
- (id)initWithType:(long long)a0 bundleIdentifier:(id)a1 conditions:(id)a2;

@end
