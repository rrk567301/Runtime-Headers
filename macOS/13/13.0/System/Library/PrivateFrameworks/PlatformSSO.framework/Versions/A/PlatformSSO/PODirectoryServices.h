@interface PODirectoryServices : NSObject

- (id)uniqueIdentifierForUserName:(id)a0;
- (BOOL)verifyLocalAccountPassword:(id)a0 forUser:(id)a1;
- (BOOL)setLocalAccountPasswordForUser:(id)a0 oldPassword:(id)a1 withNewPassword:(id)a2;
- (BOOL)isLocalAccount:(id)a0;

@end
