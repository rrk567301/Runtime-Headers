@class NSString;

@interface CHSTimelineReloadRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) char allowCostOverride;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKind:(id)a0 extensionBundleIdentifier:(id)a1 reason:(id)a2 allowCostOverride:(char)a3;

@end
