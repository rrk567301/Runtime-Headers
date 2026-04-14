@interface PLModelingUtilities : NSObject

+ (BOOL)internalBuild;
+ (BOOL)isMac;
+ (BOOL)isiPhone;
+ (BOOL)isiPad;
+ (double)duetDiscretionaryBudget;
+ (id)valueForMobileGestaltCapability:(id)a0;
+ (BOOL)isiPod;
+ (BOOL)isWatch;
+ (BOOL)isARMMac;
+ (BOOL)isTVOS;
+ (BOOL)isHomePod;
+ (BOOL)isAppleTV;
+ (BOOL)shouldShowBatteryGraphs;
+ (double)defaultBatteryEnergyCapacity;
+ (BOOL)carrierBuild;
+ (double)getDefaultL0bThresholdForDeviceType;
+ (BOOL)alsCurveHigherThanDefault;
+ (double)networkingEnergyWithBytes:(int)a0 withDuration:(double)a1;
+ (BOOL)isPercentageSupported;
+ (BOOL)isLowPowerModeSupported;
+ (BOOL)isNarrowScreen;
+ (BOOL)isHeySiriAlwaysOn;

@end
