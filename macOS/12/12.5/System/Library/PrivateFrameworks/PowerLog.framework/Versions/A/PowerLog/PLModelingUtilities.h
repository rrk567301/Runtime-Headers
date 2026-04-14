@interface PLModelingUtilities : NSObject

+ (BOOL)internalBuild;
+ (BOOL)isMac;
+ (BOOL)isiPhone;
+ (BOOL)isiPad;
+ (double)duetDiscretionaryBudget;
+ (double)defaultBatteryEnergyCapacity;
+ (BOOL)isWatch;
+ (double)getDefaultL0bThresholdForDeviceType;
+ (id)valueForMobileGestaltCapability:(id)a0;
+ (BOOL)isiPod;
+ (BOOL)isARMMac;
+ (BOOL)isTVOS;
+ (BOOL)isHomePod;
+ (BOOL)isAppleTV;
+ (BOOL)shouldShowBatteryGraphs;
+ (BOOL)carrierBuild;
+ (BOOL)alsCurveHigherThanDefault;
+ (double)networkingEnergyWithBytes:(int)a0 withDuration:(double)a1;
+ (BOOL)isPercentageSupported;
+ (BOOL)isLowPowerModeSupported;
+ (BOOL)isNarrowScreen;
+ (BOOL)isHeySiriAlwaysOn;

@end
