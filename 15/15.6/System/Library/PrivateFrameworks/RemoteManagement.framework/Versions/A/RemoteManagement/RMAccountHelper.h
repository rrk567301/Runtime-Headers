@interface RMAccountHelper : NSObject

+ (id)_createAccountWithEnrollmentURL:(id)a0 username:(id)a1 personaID:(id)a2 description:(id)a3 error:(id *)a4;
+ (char)_removeAccount:(id)a0 store:(id)a1 error:(id *)a2;
+ (id)createAccountWithEnrollmentURL:(id)a0 username:(id)a1 personaID:(id)a2 description:(id)a3 error:(id *)a4;
+ (char)removeAccountWithEnrollmentURL:(id)a0 error:(id *)a1;
+ (char)removeAccountWithIdentifier:(id)a0 error:(id *)a1;
+ (char)updateAccountWithIdentifier:(id)a0 enrollmentURL:(id)a1 personaID:(id)a2 error:(id *)a3;

@end
