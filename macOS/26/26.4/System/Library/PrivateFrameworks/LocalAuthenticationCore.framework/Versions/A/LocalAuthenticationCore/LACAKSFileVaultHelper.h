@interface LACAKSFileVaultHelper : NSObject

- (void)_freeFVData:(struct aks_fv_data_s { void *x0; unsigned long long x1; } *)a0;
- (BOOL)transferOwnershipFromUser:(id)a0 userCredential:(id)a1 targetUserUUID:(id)a2 targetUserCredential:(id)a3 disk:(id)a4 error:(id *)a5;

@end
