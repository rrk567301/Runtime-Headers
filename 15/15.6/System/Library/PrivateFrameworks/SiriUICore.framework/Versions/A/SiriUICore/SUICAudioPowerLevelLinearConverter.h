@interface SUICAudioPowerLevelLinearConverter : NSObject

+ (float)linearValueForOutputPowerLevel:(float)a0;
+ (float)_adjustedLinearPowerLevel:(float)a0 isInput:(char)a1;
+ (float)_expectedLinearInputPowerLevelMaximum;
+ (float)_linearValueForPowerLevel:(float)a0 shouldAdjustForDeviceType:(char)a1 isInput:(char)a2;
+ (float)linearValueForInputPowerLevel:(float)a0;

@end
