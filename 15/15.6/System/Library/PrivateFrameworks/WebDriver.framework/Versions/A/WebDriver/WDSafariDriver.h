@interface WDSafariDriver : NSObject

+ (struct AuthorizationOpaqueRef { } *)authorizationWithUser:(id)a0 password:(id)a1;
+ (id)dictionaryForAuthenticateWebDeveloperRight;
+ (id)dictionaryForIsWebDeveloperRight;
+ (id)dictionaryForSafariDriverAllowRight;
+ (char)existingRight:(id)a0 matchesExpectedRight:(id)a1;
+ (id)promptForPassword;
+ (char)validateGroupMembershipRepairingIfNeeded:(char)a0 withUser:(id)a1 password:(id)a2;
+ (char)validateGroupsRepairingIfNeeded:(char)a0 withUser:(id)a1 password:(id)a2;
+ (char)validateRightsRepairingIfNeeded:(char)a0 withAuthorization:(struct AuthorizationOpaqueRef { } *)a1;
+ (char)validateSafariAllowsRemoteAutomationRepairingIfNeeded;

@end
