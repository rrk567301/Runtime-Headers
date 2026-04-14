@interface HCUtilities : NSObject

+ (BOOL)deviceIsPad;
+ (BOOL)isDeviceInDeveloperMode;
+ (BOOL)currentProcessIsSystemApp;
+ (BOOL)isLEAudioEnabled;
+ (BOOL)currentProcessIsAXUIServer;
+ (BOOL)isInternalInstall;
+ (BOOL)deviceIsWatch;
+ (BOOL)currentProcessIsHeard;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (BOOL)isProtectedDataAvailable;
+ (BOOL)currentProcessIsCarousel;
+ (BOOL)currentProcessIsInCallService;
+ (BOOL)currentProcessIsRTTExternsion;
+ (BOOL)isBTLEAudioEnabled;
+ (BOOL)supportsLEA2;
+ (id)comfortSoundsAudioQueue;
+ (double)roundToPercentageValue:(double)a0;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessIsHealth;
+ (BOOL)deviceHasHomeButton;
+ (long long)systemBootTime;
+ (id)bluetoothManagerQueue;
+ (BOOL)currentProcessIsSpringBoard;
+ (BOOL)deviceIsPhone;

@end
