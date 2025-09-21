@interface PLModelingUtilities : NSObject

+ (char)internalBuild;
+ (char)isMac;
+ (char)isiPad;
+ (char)isiPhone;
+ (char)isWatch;
+ (char)alsCurveHigherThanDefault;
+ (char)carrierBuild;
+ (double)defaultBatteryEnergyCapacity;
+ (double)duetDiscretionaryBudget;
+ (double)getDefaultL0bThresholdForDeviceType;
+ (char)isARMMac;
+ (char)isAppleTV;
+ (char)isAppleVision;
+ (char)isHeySiriAlwaysOn;
+ (char)isHomePod;
+ (char)isLowPowerModeSupported;
+ (char)isNarrowScreen;
+ (char)isPercentageSupported;
+ (char)isTVOS;
+ (char)isiPod;
+ (double)networkingEnergyWithBytes:(int)a0 withDuration:(double)a1;
+ (char)shouldShowBatteryGraphs;
+ (id)valueForMobileGestaltCapability:(id)a0;

@end
