@interface BDSSyncUserDefaults : NSObject

+ (char)isSignedIntoICloud;
+ (id)iCloudIdentity;
+ (char)isGlobalICloudDriveSyncOptedIn;
+ (id)_booksAppBundleIdentifier;
+ (char)_isBundleIdentifierInArray:(struct __CFArray { } *)a0;
+ (char)_isICloudDriveSyncOptedIn;
+ (char)_isServiceDisabledAlternative:(struct __CFString { } *)a0;
+ (char)_isServiceEnabledAlternative:(struct __CFString { } *)a0;
+ (void)_setService:(struct __CFString { } *)a0 enabled:(char)a1;
+ (id)_stateForLog;
+ (char)isCloudKitSyncOptedIn;
+ (char)isICloudDriveSyncOptedIn;
+ (id)makeOSStateHandler;

@end
