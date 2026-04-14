@interface SUOSUMachineState : NSObject

+ (id)currentOSVersion;
+ (id)currentOSVersionTruncated;
+ (BOOL)currentUserLoggedIn;
+ (BOOL)currentUserOnConsole;
+ (BOOL)otherUsersAreLoggedIn;
+ (BOOL)prefPaneIsActive;
+ (BOOL)setupAssistantIsActive;
+ (BOOL)usersAreLoggedIn;

@end
