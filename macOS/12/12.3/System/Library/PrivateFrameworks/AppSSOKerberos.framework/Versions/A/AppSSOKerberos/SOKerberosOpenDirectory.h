@interface SOKerberosOpenDirectory : NSObject

- (id)doUserQuery:(id)a0;
- (int)testPasswordOnLocalAccountWithPassword:(id)a0;
- (int)setLocalAccountPasswordWithOldPassword:(id)a0 withNewPassword:(id)a1;
- (id)getPasswordLastSetTimeForUser:(id)a0;
- (BOOL)isMobileAccount:(id)a0;

@end
