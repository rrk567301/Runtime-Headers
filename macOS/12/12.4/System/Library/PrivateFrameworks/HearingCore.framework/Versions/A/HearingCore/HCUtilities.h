@interface HCUtilities : NSObject

+ (BOOL)isProtectedDataAvailable;
+ (BOOL)isInternalInstall;
+ (id)messagePayloadFromDictionary:(id)a0 andIdentifier:(unsigned long long)a1;
+ (BOOL)currentProcessIsHeard;
+ (BOOL)deviceIsPhone;
+ (BOOL)currentProcessIsPreferences;
+ (id)bluetoothManagerQueue;
+ (BOOL)currentProcessIsAXUIServer;

@end
