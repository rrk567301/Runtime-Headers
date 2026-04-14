@interface BKUIUtils : NSObject

+ (BOOL)isInClamshellMode;
+ (BOOL)isMacBook;
+ (id)nameForMessage:(unsigned int)a0;
+ (void)resetScreenDimming;
+ (id)identitiesForUID:(unsigned int)a0;
+ (void)vibrateWithIntensity:(float)a0 withPattern:(id)a1;
+ (void)vibrateForBiometricEvent:(BOOL)a0;

@end
