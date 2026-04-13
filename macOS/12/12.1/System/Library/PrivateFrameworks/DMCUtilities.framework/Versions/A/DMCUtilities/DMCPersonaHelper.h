@interface DMCPersonaHelper : NSObject

+ (BOOL)isCurrentPersonaEnterprise;
+ (id)enterprisePersonaIdentifier;
+ (id)currentPersonaID;
+ (id)currentPersonaTypeString;
+ (BOOL)removePersona:(id)a0 error:(id *)a1;
+ (id)createEnterprisePersonaWithDevicePasscode:(id)a0 error:(id *)a1;
+ (id)performBlockUnderPersona:(id)a0 block:(id /* block */)a1;
+ (id)_getCurrentUserGUIDAndReturnError:(id *)a0;
+ (void)removePersonaAndAccountsWithPersonaID:(id)a0;
+ (id)performBlockUnderPersonalPersona:(id /* block */)a0;

@end
