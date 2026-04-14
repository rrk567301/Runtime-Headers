@interface PLModelingUtilities : NSObject

+ (BOOL)isHomePod;
+ (BOOL)isWatch;
+ (BOOL)isiPad;
+ (BOOL)isAppleTV;
+ (BOOL)isAppleVision;
+ (BOOL)internalBuild;
+ (BOOL)isiPhone;
+ (BOOL)carrierBuild;
+ (BOOL)isARMMac;
+ (BOOL)isTVOS;
+ (BOOL)isMac;
+ (BOOL)isiPod;
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
