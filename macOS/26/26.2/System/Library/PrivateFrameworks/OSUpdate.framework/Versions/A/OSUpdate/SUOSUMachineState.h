@interface SUOSUMachineState : NSObject

+ (id)currentOSVersion;
+ (BOOL)displayIsAsleep;
+ (id)currentOSVersionTruncated;
+ (BOOL)currentUserLoggedIn;
+ (BOOL)currentUserOnConsole;
+ (BOOL)otherUsersAreLoggedIn;
+ (BOOL)setupAssistantIsActive;
+ (BOOL)softwareUpdateSettingsIsActive;
+ (BOOL)splatSettingsIsActive;
+ (BOOL)usersAreLoggedIn;

@end
