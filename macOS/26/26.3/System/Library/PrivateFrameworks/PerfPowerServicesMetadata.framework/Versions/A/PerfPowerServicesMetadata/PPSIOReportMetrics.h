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
+ (id)aopExclavePowerMetrics;
+ (id)dcpScanoutStatsMetrics;
+ (id)gpuStatsGpuPowerControllerStatesMetrics;
+ (id)ispIopStateMetrics;
+ (id)ispIspEventsMetrics;
+ (id)pmpDcsCeilingMetrics;
+ (id)pmpDcsFloorMetrics:(id)a0;
+ (id)pmpPmcAveFloorMetrics;
+ (id)pmpPmcDcsFloorMetrics:(id)a0;
+ (id)pmpPmcDispFloorMetrics;
+ (id)pmpPmcRmbsMetrics;
+ (id)pmpPmcSocFloorMetrics:(id)a0;
+ (id)pmpSocFloorMetrics:(id)a0;
+ (id)socStatsDeviceStatesMetrics;
+ (id)socStatsEventsMetrics;
+ (id)socStatsIdsFuseMetrics;
+ (id)socStatsOprtpMetrics;
+ (id)socStatsPmgrCountersMetrics;


@end
