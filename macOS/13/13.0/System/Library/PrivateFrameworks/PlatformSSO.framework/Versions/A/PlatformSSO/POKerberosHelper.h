@interface POKerberosHelper : NSObject

- (BOOL)checkForValidKerberosTGT:(id)a0;
- (struct gss_cred_id_t_desc_struct { } *)acquireCredentialForUUID:(id)a0;
- (id)importKerberosEntry:(id)a0 error:(id *)a1;
- (void)exchangeKerberosTGTForEntry:(id)a0;

@end
