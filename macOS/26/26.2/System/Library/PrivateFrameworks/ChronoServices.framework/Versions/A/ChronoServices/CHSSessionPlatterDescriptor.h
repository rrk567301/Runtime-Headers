@class NSData;

@interface CHSSessionPlatterDescriptor : CHSBaseDescriptor <NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *activityAttributesType;

- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)widgetForFamily:(long long)a0 activityIdentifier:(id)a1;
- (id)_initWithDescriptor:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)description;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithExtensionIdentity:(id)a0 activityAttributesType:(id)a1;

@end
