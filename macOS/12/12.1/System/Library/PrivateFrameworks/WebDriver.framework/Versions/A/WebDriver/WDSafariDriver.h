@interface WDSafariDriver : NSObject

+ (id)dictionaryForAuthenticateWebDeveloperRight;
+ (id)dictionaryForIsWebDeveloperRight;
+ (id)dictionaryForSafariDriverAllowRight;
+ (BOOL)existingRight:(id)a0 matchesExpectedRight:(id)a1;
+ (id)promptForPassword;
+ (struct AuthorizationOpaqueRef { } *)authorizationWithUser:(id)a0 password:(id)a1;
+ (BOOL)validateRightsRepairingIfNeeded:(BOOL)a0 withAuthorization:(struct AuthorizationOpaqueRef { } *)a1;
+ (BOOL)validateGroupsRepairingIfNeeded:(BOOL)a0 withUser:(id)a1 password:(id)a2;
+ (BOOL)validateGroupMembershipRepairingIfNeeded:(BOOL)a0 withUser:(id)a1 password:(id)a2;
+ (BOOL)validateSafariAllowsRemoteAutomationRepairingIfNeeded;

@end
