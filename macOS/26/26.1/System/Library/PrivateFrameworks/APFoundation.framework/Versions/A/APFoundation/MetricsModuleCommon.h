@interface MetricsModuleCommon : NSObject

@property (class, readonly, nonatomic) Class metricClass;
@property (class, readonly, nonatomic) Class daemonDeliveryClass;
@property (class, readonly, nonatomic) Class notificationRegistrarClass;

+ (void)setNotificationRegistrarClass:(Class)a0;
+ (void)initialize;
+ (void)setDaemonDeliveryClass:(Class)a0;
+ (void)setMetricClass:(Class)a0;

@end
