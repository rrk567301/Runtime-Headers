@interface DKUtilities : NSObject

+ (char)forceRestart;
+ (unsigned int)uidFromCurrentAuditToken;
+ (char)restart;
+ (void)addConstraintsOfRelation:(long long)a0 forChildView:(id)a1 withParentView:(id)a2;
+ (id)currentVolume;
+ (id)usernameForUID:(int)a0;
+ (char)_startLogoutWithType:(int)a0 shouldForce:(char)a1;
+ (id)allOtherUserNames;
+ (id)combinedErrors:(id)a0 forCode:(unsigned long long)a1;
+ (id)cookiePath;
+ (id)currentVolumeBSD;
+ (char)isRunningOnAppleSiliconMac;
+ (id)loggedInUsers;
+ (char)quitAllRunningApplications;

@end
