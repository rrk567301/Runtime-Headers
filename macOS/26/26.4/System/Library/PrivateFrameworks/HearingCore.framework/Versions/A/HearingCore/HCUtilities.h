@interface HCUtilities : NSObject

+ (id)bluetoothManagerQueue;
+ (BOOL)isInternalInstall;
+ (BOOL)deviceIsPhone;
+ (BOOL)deviceIsWatch;
+ (BOOL)currentProcessIsRTTExternsion;
+ (BOOL)currentProcessIsSpringBoard;
+ (BOOL)currentProcessIsCarousel;
+ (BOOL)isDeviceInDeveloperMode;
+ (BOOL)isProtectedDataAvailable;
+ (BOOL)currentProcessIsAXUIServer;
+ (BOOL)supportsLEA2;
+ (BOOL)deviceHasHomeButton;
+ (id)comfortSoundsAudioQueue;
+ (BOOL)isLEAudioEnabled;
+ (BOOL)currentProcessIsSystemApp;
+ (BOOL)currentProcessIsInCallService;
+ (BOOL)isBTLEAudioEnabled;
+ (BOOL)currentProcessIsHealth;
+ (BOOL)currentProcessIsPreferences;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (double)roundToPercentageValue:(double)a0;
+ (BOOL)deviceIsPad;
+ (BOOL)currentProcessIsHeard;
+ (long long)systemBootTime;

@end
