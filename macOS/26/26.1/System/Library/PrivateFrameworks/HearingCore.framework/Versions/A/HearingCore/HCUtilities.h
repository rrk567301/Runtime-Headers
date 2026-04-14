@interface HCUtilities : NSObject

+ (long long)systemBootTime;
+ (BOOL)isLEAudioEnabled;
+ (BOOL)currentProcessIsAXUIServer;
+ (id)bluetoothManagerQueue;
+ (BOOL)deviceIsWatch;
+ (BOOL)deviceIsPhone;
+ (BOOL)currentProcessIsCarousel;
+ (BOOL)isDeviceInDeveloperMode;
+ (BOOL)isInternalInstall;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (BOOL)currentProcessIsHealth;
+ (BOOL)supportsLEA2;
+ (BOOL)currentProcessIsRTTExternsion;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessIsHeard;
+ (BOOL)deviceHasHomeButton;
+ (id)comfortSoundsAudioQueue;
+ (BOOL)currentProcessIsSystemApp;
+ (BOOL)isBTLEAudioEnabled;
+ (BOOL)currentProcessIsSpringBoard;
+ (BOOL)currentProcessIsInCallService;
+ (BOOL)deviceIsPad;
+ (double)roundToPercentageValue:(double)a0;
+ (BOOL)isProtectedDataAvailable;

@end
