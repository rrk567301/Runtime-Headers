@interface SUOSUMachineState : NSObject

+ (BOOL)onACPower;
+ (BOOL)usersAreLoggedIn;
+ (BOOL)otherUsersAreLoggedIn;
+ (BOOL)adequatePower;
+ (BOOL)currentUserOnConsole;
+ (BOOL)currentUserLoggedIn;
+ (id)currentOSVersion;
+ (id)currentOSVersionTruncated;
+ (BOOL)prefPaneIsActive;
+ (BOOL)setupAssistantIsActive;

@end
