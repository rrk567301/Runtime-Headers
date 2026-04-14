@interface PLModelingUtilities : NSObject

+ (BOOL)isiPad;
+ (BOOL)isARMMac;
+ (BOOL)isiPhone;
+ (BOOL)internalBuild;
+ (BOOL)isMac;
+ (BOOL)isAppleTV;
+ (BOOL)carrierBuild;
+ (BOOL)isHomePod;
+ (BOOL)isWatch;
+ (BOOL)isiPod;
+ (BOOL)isTVOS;
+ (BOOL)isAppleVision;
+ (int)criticalBatteryLevel;
+ (double)defaultBatteryEnergyCapacity;
+ (double)duetDiscretionaryBudget;
+ (double)fallbackDefaultBatteryEnergyCapacity;
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
