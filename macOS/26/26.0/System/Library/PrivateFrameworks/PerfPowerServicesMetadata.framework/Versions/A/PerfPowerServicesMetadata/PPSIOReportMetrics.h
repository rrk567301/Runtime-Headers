@class NSString;

@interface PPSIOReportMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)ans2Msp0Metrics;
+ (id)allDeclMetrics;
+ (id)amcStatsPerfCountersMetrics;
+ (id)aop2PerformanceMetrics;
+ (id)aop2PowerMetrics;
+ (id)dcpScanoutStatsMetrics;
+ (id)gpuStatsGpuPowerControllerStatesMetrics;
+ (id)ispIopStateMetrics;
+ (id)ispIspEventsMetrics;
+ (id)pmpDcsCeilingMetrics;
+ (id)pmpDcsFloorMetrics;
+ (id)pmpPmcAveFloorMetrics;
+ (id)pmpPmcDcsFloorMetrics;
+ (id)pmpPmcDispFloorMetrics;
+ (id)pmpPmcRmbsMetrics;
+ (id)pmpPmcSocFloorMetrics;
+ (id)pmpSocFloorMetrics;
+ (id)socStatsDeviceStatesMetrics;
+ (id)socStatsEventsMetrics;
+ (id)socStatsIdsFuseMetrics;
+ (id)socStatsOprtpMetrics;
+ (id)socStatsPmgrCountersMetrics;


@end
