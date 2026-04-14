@interface PLModelingUtilities : NSObject

+ (BOOL)isAppleTV;
+ (BOOL)isiPad;
+ (BOOL)isMac;
+ (BOOL)isiPhone;
+ (BOOL)isAppleVision;
+ (BOOL)carrierBuild;
+ (BOOL)isARMMac;
+ (BOOL)internalBuild;
+ (BOOL)isTVOS;
+ (BOOL)isiPod;
+ (BOOL)isHomePod;
+ (BOOL)isWatch;
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
