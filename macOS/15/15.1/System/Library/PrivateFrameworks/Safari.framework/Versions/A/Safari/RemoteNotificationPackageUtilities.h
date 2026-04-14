@interface RemoteNotificationPackageUtilities : NSObject

+ (BOOL)extractZipArchiveFromPath:(id)a0 toDestination:(id)a1 copyQuarantine:(BOOL)a2;
+ (id)extractZipArchiveFromPathToTemporaryDirectory:(id)a0;
+ (id)jsonContentsOfFileAtPath:(id)a0;

@end
