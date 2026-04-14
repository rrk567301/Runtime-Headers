@interface HCUtilities : NSObject

+ (BOOL)isProtectedDataAvailable;
+ (BOOL)isInternalInstall;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessIsHeard;
+ (BOOL)deviceIsPhone;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (id)bluetoothManagerQueue;
+ (BOOL)currentProcessIsAXUIServer;
+ (BOOL)currentProcessIsSpringBoard;
+ (BOOL)currentProcessIsCarousel;
+ (BOOL)currentProcessIsSystemApp;
+ (BOOL)currentProcessIsRTTExternsion;
+ (BOOL)currentProcessIsInCallService;
+ (BOOL)currentProcessIsHealth;
+ (long long)systemBootTime;

@end
