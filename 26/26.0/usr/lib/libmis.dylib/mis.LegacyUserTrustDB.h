@interface mis.LegacyUserTrustDB : SQLDB

- (id)init;
- (id)initWithDatabaseURL:(id)a0;
- (id)initWithDatabaseURL:(id)a0 asReadOnly:(BOOL)a1;
- (void)setupPermissions;
- (BOOL)setupSchema;

@end
