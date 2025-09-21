@interface HCUtilities : NSObject

+ (char)isProtectedDataAvailable;
+ (char)isInternalInstall;
+ (char)currentProcessIsPreferences;
+ (char)currentProcessIsHeard;
+ (char)deviceIsPhone;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (char)deviceIsPad;
+ (id)bluetoothManagerQueue;
+ (char)currentProcessIsAXUIServer;
+ (char)currentProcessIsCarousel;
+ (char)currentProcessIsHealth;
+ (char)currentProcessIsInCallService;
+ (char)currentProcessIsRTTExternsion;
+ (char)currentProcessIsSpringBoard;
+ (char)currentProcessIsSystemApp;
+ (char)deviceHasHomeButton;
+ (char)deviceIsWatch;
+ (double)roundToPercentageValue:(double)a0;
+ (char)supportsLEA2;
+ (long long)systemBootTime;

@end
