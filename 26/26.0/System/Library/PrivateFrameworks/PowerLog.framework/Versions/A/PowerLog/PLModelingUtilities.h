@interface PLModelingUtilities : NSObject

+ (BOOL)isiPod;
+ (BOOL)isMac;
+ (BOOL)isiPad;
+ (BOOL)isWatch;
+ (BOOL)isAppleVision;
+ (BOOL)isTVOS;
+ (BOOL)isARMMac;
+ (BOOL)internalBuild;
+ (BOOL)isAppleTV;
+ (BOOL)isHomePod;
+ (BOOL)isiPhone;
+ (BOOL)carrierBuild;
+ (int)criticalBatteryLevel;
+ (double)defaultBatteryEnergyCapacity;
+ (double)duetDiscretionaryBudget;
+ (BOOL)isHeySiriAlwaysOn;
+ (BOOL)isLowPowerModeSupported;
+ (BOOL)isNarrowScreen;
+ (BOOL)isPercentageSupported;
+ (double)networkingEnergyWithBytes:(int)a0 withDuration:(double)a1;
+ (BOOL)shouldShowBatteryGraphs;
+ (BOOL)supportsPhysicalSim;
+ (BOOL)supportsSlowCharging;
+ (id)valueForMobileGestaltCapability:(id)a0;

@end
