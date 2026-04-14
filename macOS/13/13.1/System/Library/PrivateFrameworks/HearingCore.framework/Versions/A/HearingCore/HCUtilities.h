@interface HCUtilities : NSObject

+ (BOOL)isProtectedDataAvailable;
+ (BOOL)isInternalInstall;
+ (BOOL)currentProcessIsPreferences;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (BOOL)currentProcessIsHeard;
+ (BOOL)deviceIsPhone;
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
