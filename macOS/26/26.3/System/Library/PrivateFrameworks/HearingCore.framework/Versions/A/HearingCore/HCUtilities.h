@interface HCUtilities : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)deviceHasHomeButton;
+ (BOOL)isProtectedDataAvailable;
+ (BOOL)supportsLEA2;
+ (BOOL)deviceIsPhone;
+ (BOOL)isBTLEAudioEnabled;
+ (BOOL)deviceIsWatch;
+ (BOOL)currentProcessIsInCallService;
+ (BOOL)currentProcessIsHealth;
+ (double)roundToPercentageValue:(double)a0;
+ (BOOL)isLEAudioEnabled;
+ (BOOL)currentProcessIsAXUIServer;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)isDeviceInDeveloperMode;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (BOOL)deviceIsPad;
+ (id)bluetoothManagerQueue;
+ (BOOL)currentProcessIsCarousel;
+ (BOOL)currentProcessIsSystemApp;
+ (BOOL)currentProcessIsHeard;
+ (BOOL)currentProcessIsRTTExternsion;
+ (long long)systemBootTime;
+ (BOOL)currentProcessIsSpringBoard;
+ (id)comfortSoundsAudioQueue;

@end
