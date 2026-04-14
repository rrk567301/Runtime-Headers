@interface DMCPersonaHelper : NSObject

+ (BOOL)isCurrentPersonaEnterprise;
+ (id)performBlockUnderPersona:(id)a0 block:(id /* block */)a1;
+ (id)currentPersonaTypeString;
+ (id)enterprisePersonaIdentifier;
+ (id)currentPersonaID;
+ (id)createEnterprisePersonaWithDevicePasscode:(id)a0 error:(id *)a1;
+ (BOOL)removePersona:(id)a0 error:(id *)a1;
+ (void)removePersonaAndAccountsWithPersonaID:(id)a0;
+ (id)performBlockUnderPersonalPersona:(id /* block */)a0;
+ (id)enterprisePersonaDisplayName;
+ (void)setPersonaIdentifierForApps:(id)a0 personaID:(id)a1 completionHandler:(id /* block */)a2;
+ (id)_getCurrentUserGUIDAndReturnError:(id *)a0;

@end
