@interface HCUtilities : NSObject

+ (BOOL)currentProcessIsSpringBoard;
+ (BOOL)currentProcessIsHeard;
+ (long long)systemBootTime;
+ (BOOL)isProtectedDataAvailable;
+ (double)roundToPercentageValue:(double)a0;
+ (BOOL)isBTLEAudioEnabled;
+ (BOOL)supportsLEA2;
+ (id)comfortSoundsAudioQueue;
+ (BOOL)currentProcessIsInCallService;
+ (id)bluetoothManagerQueue;
+ (BOOL)deviceHasHomeButton;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)isDeviceInDeveloperMode;
+ (BOOL)isInternalInstall;
+ (BOOL)isLEAudioEnabled;
+ (BOOL)currentProcessIsCarousel;
+ (BOOL)currentProcessIsAXUIServer;
+ (BOOL)deviceIsPad;
+ (BOOL)deviceIsPhone;
+ (BOOL)currentProcessIsRTTExternsion;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (BOOL)deviceIsWatch;
+ (BOOL)currentProcessIsSystemApp;
+ (BOOL)currentProcessIsHealth;

@end
