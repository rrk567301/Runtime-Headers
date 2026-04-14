@interface PODirectoryServices : NSObject

- (BOOL)isLocalAccountAndNotGuest:(id)a0;
- (BOOL)setLocalAccountPasswordForUser:(id)a0 oldPassword:(id)a1 withNewPassword:(id)a2;
- (id)uniqueIdentifierForUserName:(id)a0;
- (BOOL)verifyLocalAccountPassword:(id)a0 forUser:(id)a1;

@end
