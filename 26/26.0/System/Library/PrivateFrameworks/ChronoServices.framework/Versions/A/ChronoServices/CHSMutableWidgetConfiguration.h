@class NSArray, CHSWidgetMetricsSpecification, NSSet, CHSRemoteDevicePredicate;

@interface CHSMutableWidgetConfiguration : CHSWidgetConfiguration

@property (copy, nonatomic) NSArray *containerDescriptors;
@property (copy, nonatomic) CHSWidgetMetricsSpecification *metricsSpecification;
@property (copy, nonatomic) NSSet *rateLimitPolicies;
@property (copy, nonatomic) CHSRemoteDevicePredicate *replicationPredicate;
@property (nonatomic) BOOL automaticallyOrphaned;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setReplicationPredicate:(id)a0;
- (void)setRateLimitPolicies:(id)a0;
- (void)setContainerDescriptors:(id)a0;
- (void)setMetricsSpecification:(id)a0;
- (void)setAutomaticallyOrphaned:(BOOL)a0;

@end
