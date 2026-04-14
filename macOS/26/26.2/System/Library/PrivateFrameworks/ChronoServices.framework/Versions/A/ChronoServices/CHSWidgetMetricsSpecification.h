@class NSDictionary, NSString;

@interface CHSWidgetMetricsSpecification : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *metricsByFamily;
@property (readonly, copy, nonatomic) NSDictionary *alternatesByFamily;
@property (readonly, nonatomic) unsigned long long families;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithMetricsByFamily:(id)a0 alternates:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)metricsForFamily:(long long)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)alternateMetricsForFamily:(long long)a0;
- (id)succinctDescription;
- (id)initWithMetricsSpecification:(id)a0;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)allMetricsForFamily:(long long)a0;

@end
