@interface SUOSUMachineState : NSObject

+ (char)displayIsAsleep;
+ (id)currentOSVersion;
+ (id)currentOSVersionTruncated;
+ (char)currentUserLoggedIn;
+ (char)currentUserOnConsole;
+ (char)otherUsersAreLoggedIn;
+ (char)prefPaneIsActive;
+ (char)setupAssistantIsActive;
+ (char)usersAreLoggedIn;

@end
