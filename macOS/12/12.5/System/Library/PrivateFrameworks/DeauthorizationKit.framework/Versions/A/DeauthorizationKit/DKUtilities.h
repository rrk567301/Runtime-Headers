@interface DKUtilities : NSObject

+ (unsigned int)uidFromCurrentAuditToken;
+ (BOOL)restart;
+ (void)addConstraintsOfRelation:(long long)a0 forChildView:(id)a1 withParentView:(id)a2;
+ (BOOL)forceRestart;
+ (id)imageForBundleIdentifer:(id)a0;
+ (id)currentVolume;
+ (id)combinedErrors:(id)a0 forCode:(unsigned long long)a1;
+ (BOOL)_startLogoutWithType:(int)a0 shouldForce:(BOOL)a1;
+ (BOOL)quitAllRunningApplications;
+ (id)loggedInUsers;
+ (id)allOtherUserNames;
+ (id)cookiePath;
+ (id)currentVolumeBSD;
+ (BOOL)isRunningOnAppleSiliconMac;
+ (id)usernameForUID:(int)a0;

@end
