@interface DKUtilities : NSObject

+ (BOOL)restart;
+ (id)currentVolume;
+ (BOOL)forceRestart;
+ (unsigned int)uidFromCurrentAuditToken;
+ (id)usernameForUID:(int)a0;
+ (BOOL)_startLogoutWithType:(int)a0 shouldForce:(BOOL)a1;
+ (void)addConstraintsOfRelation:(long long)a0 forChildView:(id)a1 withParentView:(id)a2;
+ (id)allOtherUserNames;
+ (id)combinedErrors:(id)a0 forCode:(unsigned long long)a1;
+ (id)cookiePath;
+ (id)currentVolumeBSD;
+ (BOOL)isRunningOnAppleSiliconMac;
+ (id)loggedInUsers;
+ (BOOL)quitAllRunningApplications;

@end
