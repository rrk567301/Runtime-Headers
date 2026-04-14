@class NSData;

@interface CHSLiveActivityDescriptor : CHSBaseDescriptor <NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *activityAttributesType;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithDescriptor:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)initWithExtensionIdentity:(id)a0 activityAttributesType:(id)a1;
- (id)widgetForFamily:(long long)a0 activityIdentifier:(id)a1;

@end
