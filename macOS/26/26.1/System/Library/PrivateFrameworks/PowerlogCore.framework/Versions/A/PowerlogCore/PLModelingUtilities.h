@interface PLModelingUtilities : NSObject

+ (BOOL)isiPod;
+ (BOOL)isWatch;
+ (BOOL)internalBuild;
+ (BOOL)isiPad;
+ (BOOL)isAppleTV;
+ (BOOL)isMac;
+ (BOOL)isiPhone;
+ (BOOL)isTVOS;
+ (BOOL)isARMMac;
+ (BOOL)isAppleVision;
+ (BOOL)isHomePod;
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
