@interface LAKeyStoreBackendQueryBuilder : NSObject

- (id)createQueryForKeyWithIdentifier:(id)a0 domain:(id)a1 acl:(id)a2;
- (id)fetchQueryForKeyWithIdentifier:(id)a0 domain:(id)a1;
- (id)fetchQueryForKeyWithPublicKeyHash:(id)a0;
- (id)fetchQueryForKeysWithDomain:(id)a0;
- (id)removeQueryForKeysWithDomain:(id)a0;
- (id)removeQueryForKeys;
- (id)createQueryForGenericPasswordWithIdentifier:(id)a0 domain:(id)a1 data:(id)a2 protectedBy:(id)a3;
- (id)fetchQueryForGenericPasswordWithIdentifier:(id)a0 domain:(id)a1;
- (id)fetchQueryForGenericPasswordsWithDomain:(id)a0;
- (id)removeQueryForGenericPasswordsWithDomain:(id)a0;
- (id)removeQueryForGenericPasswords;

@end
