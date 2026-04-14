@interface AKAccountStore : ACAccountStore

- (BOOL)saveVerifiedAccount:(id)a0 error:(id *)a1;
- (id)accountTypeWithAccountTypeIdentifier:(id)a0 error:(id *)a1;
- (id)accountsWithAccountType:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)credentialForAccount:(id)a0 error:(id *)a1;
- (id)credentialForAccount:(id)a0 serviceID:(id)a1 error:(id *)a2;
- (BOOL)isAccountDaemonConnectionError:(id)a0;

@end
