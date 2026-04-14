@class NSArray, CHSWidgetMetricsSpecification, NSSet, CHSRemoteDevicePredicate, NSString;

@interface CHSWidgetConfiguration : NSObject <BSDescriptionProviding, NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *containerDescriptors;
@property (readonly, copy, nonatomic) CHSWidgetMetricsSpecification *metricsSpecification;
@property (readonly, copy, nonatomic) NSSet *rateLimitPolicies;
@property (readonly, copy, nonatomic) CHSRemoteDevicePredicate *replicationPredicate;
@property (readonly, nonatomic) BOOL automaticallyOrphaned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)defaultRemoteDevicePredicate;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContainerDescriptors:(id)a0 metricsSpecification:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
