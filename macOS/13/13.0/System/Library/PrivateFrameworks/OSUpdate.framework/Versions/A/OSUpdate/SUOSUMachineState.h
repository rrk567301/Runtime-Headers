@interface SUOSUMachineState : NSObject

+ (BOOL)onACPower;
+ (BOOL)adequatePower;
+ (BOOL)otherUsersAreLoggedIn;
+ (BOOL)usersAreLoggedIn;
+ (BOOL)currentUserOnConsole;
+ (BOOL)currentUserLoggedIn;
+ (id)currentOSVersion;
+ (id)currentOSVersionTruncated;
+ (BOOL)prefPaneIsActive;
+ (BOOL)setupAssistantIsActive;

@end
