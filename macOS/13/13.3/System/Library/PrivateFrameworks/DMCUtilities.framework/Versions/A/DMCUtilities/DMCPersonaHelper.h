@interface DMCPersonaHelper : NSObject

+ (BOOL)isCurrentPersonaEnterprise;
+ (id)performBlockUnderPersona:(id)a0 block:(id /* block */)a1;
+ (id)createEnterprisePersonaWithDevicePasscode:(id)a0 error:(id *)a1;
+ (id)currentPersonaID;
+ (id)currentPersonaTypeString;
+ (id)enterprisePersonaIdentifier;
+ (BOOL)removePersona:(id)a0 error:(id *)a1;
+ (id)_getCurrentUserGUIDAndReturnError:(id *)a0;
+ (id)enterprisePersonaDisplayName;
+ (id)performBlockUnderPersonalPersona:(id /* block */)a0;
+ (void)removePersonaAndAccountsWithPersonaID:(id)a0;
+ (void)setPersonaIdentifierForApps:(id)a0 personaID:(id)a1 completionHandler:(id /* block */)a2;

@end
