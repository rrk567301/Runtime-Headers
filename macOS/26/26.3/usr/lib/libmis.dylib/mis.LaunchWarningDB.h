@interface mis.LaunchWarningDB : SQLDB

- (id)initWithDatabaseURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0 asReadOnly:(BOOL)a1;
- (void)setupPermissions;
- (BOOL)setupSchema;

@end
